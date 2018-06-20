%{
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "tabla.h"

Nodo * ini;
Nodo * cab;

int yylex(void);
void yyerror (char *);
%}
             
/* Declaraciones de BISON */
%union{
	int entero;
	double decimal;
	char *texto;
	struct nodo *nodito;
}
%token <entero> ENTERO
%token <decimal> DECIMAL
%token <texto> TEXTO

%token <texto> POTENCIA
%type <texto> exp_pow
%token <texto> PRINTF
%type <texto> exp_printf

%token <entero> TIPOVAR
%type <entero> tipo_var
%token <texto> NOMBRE
%type <texto> nombre_var
%type <texto> declaracion_variable//funciona como funcion
%type <texto> sobreescribir_variable//funciona como funcion

%type <nodito> operacion_con_variable

%token <texto> IF
%type <entero> condicional


%left '+''-'
%left '*''/''%'
%left '='
%left ';'
             
/* Gramática */
%%
             
input:    /* cadena vacía */
        | input line             
;

line:	'\n'	{printf("\tError de sintaxis: falta un ;\n");}
		| declaracion_variable 		'\n'  { /*{ printf("nueva variable:%s \n",$1);*/ printf("\n");}
		| sobreescribir_variable 	'\n'  { printf("\n");}
		| operacion_con_variable	';' '\n'  { if($1==NULL)				{	printf("\t \n");}
												else if(tipovarNodo($1)==0)	{	printf("\tResultadoplo: %d\n",*$1->t_int);	}		
												else if(tipovarNodo($1)==1)	{	printf("\tResultadoplo: %f\n",*$1->t_float);	}
												else if(tipovarNodo($1)==2) {	printf("\tResultadoplo: %s\n",$1->t_string);	}		}
		| exp_printf				';' '\n'  { printf("\n");}
		| condicional				'\n'  {		if ($1==2)	{printf(" ");}
												else if($1==0)	{printf("FALSE\n");}
												else if($1==1)	{printf("TRUE\n");}		}
		| error 					'\n' { yyerrok;                  }
;



exp_pow:	POTENCIA	{ $$ = $1;};
nombre_var:		NOMBRE	{ $$ = $1;};
tipo_var: 	TIPOVAR		{$$ = $1;};


operacion_con_variable:
	 ENTERO						  { $$ = declarar(0,"",$1,0,""); }
	| '-' ENTERO		   		  { $$ = declarar(0,"",$2*(-1),0,"");  }
	| DECIMAL					  { $$ = declarar(1,"",0,$1,""); }
	| '-' DECIMAL		   		  { $$ = declarar(1,"",0,$2*(-1),"");  }
	| TEXTO						  {	$$ = declarar(2,"",0,0,$1);}
	| NOMBRE					  { 
		if(existe($1,ini)==1){
			if(tipovar($1,ini)==0){
				$$ = declarar(0,"",retornaInt($1,ini),0,"");
				}
			else if(tipovar($1,ini)==1){
				$$ = declarar(1,"",0,retornaFloat($1,ini),"");
				}
			else{
				$$ = declarar(2,"",0,0,retornaString($1,ini));
				}			
		}
		else{printf("\tError, la variable no existe\n");}
	}
	| '(' operacion_con_variable ')' { $$ = $2; }
	| operacion_con_variable '+' operacion_con_variable       { 
		if(  (tipovarNodo($1)==0 || tipovarNodo($1)==1)  &&  (tipovarNodo($3)==0 || tipovarNodo($3)==1) ){
			$$ = declarar(1,"",0,(*$1->t_int)+(*$1->t_float)+(*$3->t_int)+(*$3->t_float),""); 
			}
		else if((tipovarNodo($1)==2)&&(tipovarNodo($3)==2)){
			$$ = declarar(2,"",0,0,sumaString($1->t_string,$3->t_string));}
		else{printf("\tError de tipo de variable\n"); $$=NULL;}  
		}
	| operacion_con_variable '-' operacion_con_variable       { 
		if(  (tipovarNodo($1)==0 || tipovarNodo($1)==1)  &&  (tipovarNodo($3)==0 || tipovarNodo($3)==1) ){
			$$ = declarar(1,"",0,((*$1->t_int)+(*$1->t_float))-((*$3->t_int)+(*$3->t_float)),""); 
			}
		else if((tipovarNodo($1)==2)&&(tipovarNodo($3)==2)){
			$$ = declarar(2,"",0,0,restaString($1->t_string,$3->t_string));}
		else{printf("\tError de tipo de variable\n"); $$=NULL;}  
		}
	| operacion_con_variable '*' operacion_con_variable       { 
		if(  (tipovarNodo($1)==0 || tipovarNodo($1)==1)  &&  (tipovarNodo($3)==0 || tipovarNodo($3)==1) ){
			$$ = declarar(1,"",0,((*$1->t_int)+(*$1->t_float))*((*$3->t_int)+(*$3->t_float)),""); 
			}
		else{printf("\tError de tipo de variable\n"); $$=NULL;}  
		}
	| operacion_con_variable '/' operacion_con_variable       { 
		if(  (tipovarNodo($1)==0 || tipovarNodo($1)==1)  &&  (tipovarNodo($3)==0 || tipovarNodo($3)==1) ){
			$$ = declarar(1,"",0,((*$1->t_int)+(*$1->t_float))/((*$3->t_int)-(*$3->t_float)),""); 
			}
		else{printf("\tError de tipo de variable\n"); $$=NULL;}  
		}
	| operacion_con_variable '%' operacion_con_variable       { 
		if(  (tipovarNodo($1)==0)  &&  (tipovarNodo($3)==0) ){
			$$ = declarar(0,"",(*$1->t_int)%(*$3->t_int),0,""); 
			}
		else{printf("\tError de tipo de variable\n"); $$=NULL;}  
		}
	| exp_pow '(' operacion_con_variable ',' operacion_con_variable ')' { 
		if(tipovarNodo($5)==0){
			if(tipovarNodo($3)==0){
				$$ = declarar(0,"",powInt(*$3->t_int,*$5->t_int),0,"");
			}
			else if(tipovarNodo($3)==1){
				$$ = declarar(1,"",0,powFloat(*$3->t_float,*$5->t_int),"");
			}
			else{
				$$ = declarar(2,"",0,0,powString($3->t_string,*$5->t_int));
			}
		}
		else{printf("\tError de tipo de variable\n"); $$=NULL;}
		}		
;


declaracion_variable:
	 tipo_var NOMBRE '=' operacion_con_variable ';' {//DECLARAR UN VALOR Y ASIGNARLE UN NODO
						if(existe($2,ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}
						else if($4==NULL){
							printf("\tExpresión no válida para asignar\n");	}	
						else{
							if (tipovarNodo($4)==2)	{				
								if($1==0){	printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
								if($1==1){	printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
								if($1==2){	agregar(2, $2, 0, 0,$4->t_string, cab,ini);	recorrer(ini);	}	}
							else if (tipovarNodo($4)==0 || tipovarNodo($4)==1)	{
								if($1==0){	agregar(0, $2, (*$4->t_int)+(*$4->t_float), 0,"", cab,ini);	recorrer(ini);	}
								if($1==1){	agregar(1, $2, 0, (*$4->t_int)+(*$4->t_float),"", cab,ini);	recorrer(ini);	}
								if($1==2){	printf("\tError de sintaxis: No se puede asignar int o float a variable tipo string\n");	}	}	}
						$$=$2;
					}				
	
	| tipo_var  nombre_var	';'{//DECLARAR SIN DAR UN VALOR;
						if(existe($2,ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}
						else if($1==0){ //si tipo var es INT
							agregar(0, $2, 0, 0,"", cab,ini);
							recorrer(ini);	}
						else if($1==1){//si tipo var es FLOAT
							agregar(1, $2, 0, 0,"", cab,ini);
							recorrer(ini);	}
						else if($1==2){//si tipo var es STRING
							agregar(2, $2, 0, 0,"", cab,ini);
							recorrer(ini);	}
						$$=$2;
					}
												
;


sobreescribir_variable://SOBREESCRIBO EL VALOR O LE ASIGNO A VARIABLES QUE EXISTAN
	nombre_var '=' operacion_con_variable ';' {
		if($3==NULL){	printf("\tExpresión no valida para gregar, se conserva el valor anterior\n");}
		else if(existe($1,ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
			if(tipovar($1,ini)==0 && (tipovarNodo($3)==0 || tipovarNodo($3)==1)){
				sobreescribirValor($1,(*$3->t_int)+(*$3->t_float),0,"",ini);
				}
			else if(tipovar($1,ini)==1 && (tipovarNodo($3)==0 || tipovarNodo($3)==1)){
				sobreescribirValor($1,0,(*$3->t_int)+(*$3->t_float),"",ini);
				}							
			else if(tipovar($1,ini)==2 && tipovarNodo($3)==2){
				sobreescribirValor($1,0,0,$3->t_string,ini);
				}
			else{	printf("\tError de tipo de variable\n");}	
			}
		else{	printf("\tError de sintaxis: La variable no existe\n");	}
			$$=$1;						
		}
;

condicional:
	IF '(' operacion_con_variable '=''=' operacion_con_variable ')' ';'{
		if(	(tipovarNodo($3)==0 || tipovarNodo($3)==1)  &&  (tipovarNodo($6)==0 || tipovarNodo($6)==1) ){
			if(  ((*$3->t_int)+(*$3->t_float))  ==  ((*$6->t_int)+(*$6->t_float))  ){
				$$ = 1;	}
			else{
				$$ = 0;	}
		}
		else if(  tipovarNodo($3)==2 && tipovarNodo($6)==2  ){
			if( precisionCompare($3->t_string,$6->t_string) ==0){
				$$ = 1;	}
			else{
				$$ = 0;	}
		}
		else {
			printf("\tError de tipo de variable\n");
			$$ = 2;	}
	}
	| IF '(' operacion_con_variable '>' operacion_con_variable ')' ';'{
		if(	(tipovarNodo($3)==0 || tipovarNodo($3)==1)  &&  (tipovarNodo($5)==0 || tipovarNodo($5)==1) ){
			if(  ((*$3->t_int)+(*$3->t_float))  >  ((*$5->t_int)+(*$5->t_float))  ){
				$$ = 1;	}
			else{
				$$ = 0;	}
		}
		else {
			printf("\tError de tipo de variable\n");
			$$ = 2;	}
	}
	| IF '(' operacion_con_variable '<' operacion_con_variable ')' ';'{
		if(	(tipovarNodo($3)==0 || tipovarNodo($3)==1)  &&  (tipovarNodo($5)==0 || tipovarNodo($5)==1) ){
			if(  ((*$3->t_int)+(*$3->t_float))  <  ((*$5->t_int)+(*$5->t_float))  ){
				$$ = 1;	}
			else{
				$$ = 0;	}
		}
		else {
			printf("\tError de tipo de variable\n");
			$$ = 2;	}
	}
;


exp_printf:		PRINTF '(' nombre_var ')' {//esta funcion es util para ver los valores de determinada variable...
					if(existe($3,ini)==1){
						imprimeValores($3,ini);
						$$=$3;}//esto no importa, es para que devuelva algo
					else{
						printf("\tLa variable no existe\n");}
}
;

        
%%

int main() {
	////////////////
	ini = NULL;
	ini = malloc(sizeof(Nodo));
	if (ini == NULL) {
	    return 1;
	}
	ini->nombre = "inicio";
	ini->next = NULL;
	cab = ini;

	////////////////
  yyparse();
  return 0;
}
             
void yyerror (char *s)
{
  printf ("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  
