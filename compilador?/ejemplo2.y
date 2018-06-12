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
%type <entero> exp_entera
%token <decimal> DECIMAL
%type <decimal> exp_decimal
%token <texto> TEXTO
%type <texto> exp_texto
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


//%type <nodito> variable

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
        | exp_entera 				';' '\n'  { printf ("\tresultado: %d\n", $1); }
        | exp_decimal 				';' '\n'  { printf ("\tresultado: %f\n", $1); }
		| exp_texto 				';' '\n'  { if($1==NULL)	{printf(" ");}
												else 			{printf ("\tresultado: %s\n", $1);} }
		| declaracion_variable 		'\n'  { /*{ printf("nueva variable:%s \n",$1);*/ printf("\n");}
		| sobreescribir_variable 	';' '\n'  { printf("\n");}
		| operacion_con_variable	';' '\n'  { if($1==NULL)				{	printf("\tError\n");}		
												else if(tipovarNodo($1)==1)	{	printf("\tResultadoplo: %f\n",*$1->t_float);	}
												else if(tipovarNodo($1)==2) {	printf("\tResultadoplo: %s\n",$1->t_string);	}		}
		| exp_printf				';' '\n'  { printf("\n");}
		| condicional				';'	'\n'  {	if ($1==2)	{printf(" ");}
												else if($1==0)	{printf("FALSE\n");}
												else if($1==1)	{printf("TRUE\n");}		}
		| error 					'\n' { yyerrok;                  }
;
         
exp_entera:     ENTERO	{ $$ = $1; }
	| '-' exp_entera		   { $$ = $2 * (-1);  }
	| exp_entera '+' exp_entera        { $$ = $1 + $3;    }
	| exp_entera '*' exp_entera        { $$ = $1 * $3;    }
	| exp_entera '/' exp_entera        { $$ = $1 / $3;    }
	| exp_entera '-' exp_entera        { $$ = $1 - $3;    }
	| exp_entera '%' exp_entera        { $$ = $1 % $3;    }
;


exp_decimal:     DECIMAL	{ $$ = $1; }
	| '-' exp_decimal		   { $$ = $2 * (-1);  }
	| exp_decimal '+' exp_decimal        { $$ = $1 + $3;    }
	| exp_decimal '*' exp_decimal        { $$ = $1 * $3;    }
	| exp_decimal '/' exp_decimal        { $$ = $1 / $3;    }
	| exp_decimal '-' exp_decimal        { $$ = $1 - $3;    }

	| exp_decimal '+' exp_entera        { $$ = $1 + $3;    }
	| exp_decimal '*' exp_entera        { $$ = $1 * $3;    }
	| exp_decimal '/' exp_entera        { $$ = $1 / $3;    }
	| exp_decimal '-' exp_entera        { $$ = $1 - $3;    }

	| exp_entera '+' exp_decimal        { $$ = $1 + $3;    }
	| exp_entera '*' exp_decimal        { $$ = $1 * $3;    }
	| exp_entera '/' exp_decimal        { $$ = $1 / $3;    }
	| exp_entera '-' exp_decimal        { $$ = $1 - $3;    }

	| exp_pow '(' exp_entera ',' exp_entera ')' { 
										$$=powInt($3,$5);		
										}
	| exp_pow '(' exp_decimal ',' exp_entera ')' { 
										$$=powFloat($3,$5);		
										}
;


exp_pow:	POTENCIA	{ $$ = $1;};

exp_texto:	TEXTO		{ $$ = $1;}
	| exp_texto '+' exp_texto	{
					$$=sumaString($1,$3);
					}

	| exp_texto '-' exp_texto	{ 
					$$=restaString($1,$3);
					}
	
	| exp_pow '(' exp_texto ',' exp_entera ')'	{
						$$=powString($3,$5);
					}
											//ERROREEEES
	| exp_entera '+' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}//Todos estos son de errores
	| exp_decimal '+' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}//errores
	| exp_texto '+' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '+' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_entera '-' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_decimal '-' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '-' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '-' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_entera '*' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_decimal '*' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '*' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '*' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_entera '/' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_decimal '/' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '/' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '/' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_entera '%' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_decimal '%' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '%' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}
	| exp_texto '%' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$=NULL;}

;

operacion_con_variable:
	nombre_var '+' exp_decimal  {
		if(existe($1,ini)==1){	//////////////////////////////-------SUMAS------//////////////////////////////
			if(tipovar($1,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($1,ini)+$3,""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($1,ini)+$3,""); 	}	//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}  $$=NULL;	}
		else {	printf("\tError, una de las variables no existe\n");  $$=NULL;	}		}//retorno NULL cuando hay error para anular toda la operación
	| nombre_var '+' exp_entera   { 
		if(existe($1,ini)==1){
			if(tipovar($1,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($1,ini)+$3,""); } //declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($1,ini)+$3,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");  $$=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n");   $$=NULL;	}	}
	| nombre_var '+' exp_texto     {
		if(existe($1,ini)==1){	
			if(tipovar($1,ini)==0)	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n");   $$=NULL;	}
			if(tipovar($1,ini)==1)	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n");  $$=NULL; }	
			if(tipovar($1,ini)==2)	{
				$$ = declarar(2,"",0,0,sumaString(retornaString($1,ini),$3)); } } //declaro un nodo auxiliar tipo string
		else {	printf("\tError, una de las variables no existe\n"); $$=NULL;	}	}
	| exp_decimal '+' nombre_var	{        
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($3,ini)+$1,""); } //declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($3,ini)+$1,""); } //declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); $$=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n"); $$=NULL;	} 	}
	| exp_entera '+' nombre_var        	{
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($3,ini)+$1,""); } //declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($3,ini)+$1,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); $$=NULL; }	}
				else {	printf("\tError, una de las variables no existe\n"); $$=NULL;	 }	}		
	| exp_texto '+' nombre_var        	{
		if(existe($3,ini)==1){
			if(	(tipovar($3,ini)==0) || (tipovar($3,ini)==1) )	{	
				printf("\tError de sintaxis: no se puede sumar numero con string\n"); $$=NULL;	}
			if(tipovar($3,ini)==2)	{
				$$ = declarar(2,"",0,0,sumaString($1,retornaString($3,ini))); } } //declaro un nodo auxiliar tipo string
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	 }		}
	| nombre_var '+' nombre_var			{	
			if((existe($1,ini))&&(existe($3,ini))){
				if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0)){
					$$ = declarar(1,"",0,retornaInt($3,ini)+retornaInt($1,ini),""); } //declaro un nodo auxiliar tipo float
				if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1)){
					$$ = declarar(1,"",0,retornaFloat($3,ini)+retornaFloat($1,ini),"");  }//declaro un nodo auxiliar tipo float
				if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1)){
					$$ = declarar(1,"",0,retornaInt($1,ini)+retornaFloat($3,ini),""); } //declaro un nodo auxiliar tipo float
				if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0)){
					$$ = declarar(1,"",0,retornaFloat($1,ini)+retornaInt($3,ini),""); }  //declaro un nodo auxiliar tipo float
				if((tipovar($1,ini)==0)&&(tipovar($3,ini)==2)){ printf("\tError, suma de tipos distintos\n"); $$=NULL; }
				if((tipovar($1,ini)==1)&&(tipovar($3,ini)==2)){ printf("\tError, suma de tipos distintos\n"); $$=NULL; }
				if((tipovar($1,ini)==2)&&(tipovar($3,ini)==0)){ printf("\tError, suma de tipos distintos\n"); $$=NULL; }
				if((tipovar($1,ini)==2)&&(tipovar($3,ini)==1)){ printf("\tError, suma de tipos distintos\n"); $$=NULL; }
				if((tipovar($1,ini)==2)&&(tipovar($3,ini)==2)){
					$$ = declarar(2,"",0,0,sumaString(retornaString($1,ini),retornaString($3,ini)));}	}
			else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}		}
	| nombre_var '+' operacion_con_variable	 {	
		if(existe($1,ini)==1){
			if(tipovarNodo($3)==1){
				if(tipovar($1,ini)==0)		{$$ = declarar(1,"",0,retornaInt($1,ini)+*$3->t_float,"");}
				else if(tipovar($1,ini)==1) {$$ = declarar(1,"",0,retornaFloat($1,ini)+*$3->t_float,"");}
				else if(tipovar($1,ini)==2)	{ printf("\tError, suma de tipos distintos\n"); $$=NULL; }		}
			else if(tipovarNodo($3)==2){
				if(tipovar($1,ini)==0)		{printf("\tError, suma de tipos distintos\n"); $$=NULL;}
				else if(tipovar($1,ini)==1)	{printf("\tError, suma de tipos distintos\n"); $$=NULL;}
				else if(tipovar($1,ini)==2)	{$$ = declarar(2,"",0,0,sumaString(retornaString($1,ini),$3->t_string));}	}	}
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}	}	
	| operacion_con_variable '+' nombre_var	{	
		if(existe($3,ini)==1){
			if(tipovarNodo($1)==1){//nodo guardó un numero
				if(tipovar($3,ini)==0)		{$$ = declarar(1,"",0,retornaInt($3,ini)+*$1->t_float,"");}
				else if(tipovar($3,ini)==1) {$$ = declarar(1,"",0,retornaFloat($3,ini)+*$1->t_float,"");}
				else if(tipovar($3,ini)==2)	{ printf("\tError, suma de tipos distintos\n"); $$=NULL; }		}
			else if(tipovarNodo($1)==2){//nodo guarda string
				if(tipovar($3,ini)==0)		{printf("\tError, suma de tipos distintos\n"); $$=NULL;}
			else if(tipovar($3,ini)==1)	{printf("\tError, suma de tipos distintos\n"); $$=NULL;}
			else if(tipovar($3,ini)==2)	{$$ = declarar(2,"",0,0,sumaString($1->t_string,retornaString($3,ini)));}		}	}
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}		}
	| operacion_con_variable '+' exp_entera	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, *$1->t_float + $3,"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '+' exp_decimal	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, *$1->t_float + $3,"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '+' exp_texto	{	
		if(tipovarNodo($1)==2){$$=declarar(2,"",0, 0 , sumaString($1->t_string,$3));}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '+' operacion_con_variable  {	
		if(	(tipovarNodo($1)==1)	&&	(tipovarNodo($3)==1)	){
			$$ = declarar(1,"",0,(*$1->t_float)+(*$3->t_float),""); }	
		}
		
		
			
	| nombre_var '-' exp_decimal  {
		if(existe($1,ini)==1){	//////////////////////////////////////////////-------RESTAS-------//////////////////////////////
			if(tipovar($1,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($1,ini)-$3,""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($1,ini)-$3,"");	} //declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n"); $$=NULL; }	}
		else {	printf("\tError, una de las variables no existe\n");  $$=NULL;	}	}
	| nombre_var '-' exp_entera        	{ 
		if(existe($1,ini)==1){
			if(tipovar($1,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($1,ini)-$3,""); }  //declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($1,ini)-$3,""); 	}//declaro un nodo auxiliar tipo float	
			if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	$$=NULL;	}		} //el null sirve para anular toda la operación
	| nombre_var '-' exp_texto        	{
		if(existe($1,ini)==1){	
			if(tipovar($1,ini)==0)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}
			if(tipovar($1,ini)==1)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}	
			if(tipovar($1,ini)==2)	{
				$$ = declarar(2,"",0,0,restaString(retornaString($1,ini),$3)); 	}	}//declaro un nodo auxiliar tipo string
		else {	printf("\tError, una de las variables no existe\n");	$$=NULL;	}		}
	| exp_decimal '-' nombre_var        {
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($3,ini)-$1,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==1)	{	
				$$ = declarar(1,"",0,$1-retornaFloat($3,ini),""); }//declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	$$=NULL;	}		}
	| exp_entera '-' nombre_var        	{
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				$$ = declarar(1,"",0,$1-retornaInt($3,ini),"");	}  //declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==1)	{	
				$$ = declarar(1,"",0,$1-retornaFloat($3,ini),"");} //declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");  $$=NULL;	}		}		
	| exp_texto '-' nombre_var        	{
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}
			if(tipovar($3,ini)==1)	{	
				printf("\tError de sintaxis: no se puede restar numero con string\n");	$$=NULL;	}	
			if(tipovar($3,ini)==2)	{
				$$ = declarar(2,"",0,0,restaString($1,retornaString($3,ini)));	}	} //declaro un nodo auxiliar tipo string
		else{	printf("\tError, una de las variables no existe\n");	$$=NULL;	 }		}
	| nombre_var '-' nombre_var			{	
		if((existe($1,ini))&&(existe($3,ini))){
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0)){
				$$ = declarar(1,"",0,retornaInt($1,ini)-retornaInt($3,ini),"");		}  //declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1)){
				$$ = declarar(1,"",0,retornaFloat($1,ini)-retornaFloat($3,ini),"");		}//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1)){
				$$ = declarar(1,"",0,retornaInt($1,ini)-retornaFloat($3,ini),""); 	} //declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0)){
				$$ = declarar(1,"",0,retornaFloat($1,ini)-retornaInt($3,ini),"");  	}//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==2)){ printf("\tError, suma de tipos distintos\n");	$$=NULL; }
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==2)){ printf("\tError, suma de tipos distintos\n"); 	$$=NULL; }
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==0)){ printf("\tError, suma de tipos distintos\n"); 	$$=NULL; }
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==1)){ printf("\tError, suma de tipos distintos\n"); 	$$=NULL; }
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==2)){
				$$ = declarar(2,"",0,0,restaString(retornaString($1,ini),retornaString($3,ini)));	}	}
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;		}		}//el nulo sirve para anular la operacion
	| nombre_var '-' operacion_con_variable	 {	
		if(existe($1,ini)==1){
			if(tipovarNodo($3)==1){
				if(tipovar($1,ini)==0)		{$$ = declarar(1,"",0,retornaInt($1,ini)-*$3->t_float,"");}
				else if(tipovar($1,ini)==1) {$$ = declarar(1,"",0,retornaFloat($1,ini)-*$3->t_float,"");}
				else if(tipovar($1,ini)==2)	{ printf("\tError, suma de tipos distintos\n");	$$=NULL; }		}
			else if(tipovarNodo($3)==2){
				if(tipovar($1,ini)==0)		{printf("\tError, suma de tipos distintos\n");	$$=NULL;}
				else if(tipovar($1,ini)==1)	{printf("\tError, suma de tipos distintos\n");	$$=NULL;}
				else if(tipovar($1,ini)==2)	{
					$$ = declarar(2,"",0,0,restaString(retornaString($1,ini),$3->t_string));}			}
			}	//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;		}		}		
	| operacion_con_variable '-' nombre_var	{	
		if(existe($3,ini)==1){
			if(tipovarNodo($1)==1){
				if(tipovar($3,ini)==0)		{$$ = declarar(1,"",0, *$1->t_float - retornaInt($3,ini),"");}
				else if(tipovar($3,ini)==1) {$$ = declarar(1,"",0, *$1->t_float - retornaFloat($3,ini),"");}
				else if(tipovar($3,ini)==2)	{ printf("\tError, suma de tipos distintos\n"); $$=NULL; }		}
			else if(tipovarNodo($1)==2){
				if(tipovar($3,ini)==0)		{printf("\tError, suma de tipos distintos\n");	$$=NULL;}
				else if(tipovar($3,ini)==1)	{printf("\tError, suma de tipos distintos\n");	$$=NULL;}
				else if(tipovar($3,ini)==2)	{
					$$ = declarar(2,"",0,0,restaString($1->t_string,retornaString($3,ini)));}		}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}		}
	| operacion_con_variable '-' exp_entera	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, *$1->t_float - $3,"");}
		else{printf("\tNo se pueden restar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '-' exp_decimal	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, *$1->t_float - $3,"");}
		else{printf("\tNo se pueden restar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '-' exp_texto	{	
		if(tipovarNodo($1)==2){$$=declarar(2,"",0, 0 , restaString($1->t_string,$3));}
		else{printf("\tNo se pueden restar tipos distintos\n");	 $$=NULL;	}	}		
	| operacion_con_variable '-' operacion_con_variable  {	
		if(	(tipovarNodo($1)==1)	&&	(tipovarNodo($3)==1)	){
			$$ = declarar(1,"",0,(*$1->t_float)-(*$3->t_float),""); }	
		}



	| nombre_var '*' exp_decimal        {
		if(existe($1,ini)==1){	///////////////////////////////////////------Multiplicación-------//////////////////////////////////////
			if(tipovar($1,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($1,ini)*$3,""); 	}//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($1,ini)*$3,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	} 	}
		else {	printf("\tError, una de las variables no existe\n");	$$=NULL;		}			}
	| nombre_var '*' exp_entera        	{ 
		if(existe($1,ini)==1){
			if(tipovar($1,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($1,ini)*$3,"");  }//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($1,ini)*$3,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");	$$=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");$$=NULL;		}			}			
	| nombre_var '*' exp_texto      {	printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}	
	| exp_decimal '*' nombre_var        {
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($3,ini)*$1,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($3,ini)*$1,""); }//declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");		$$=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");	$$=NULL;	}			}
	| exp_entera '*' nombre_var        	{
		if(existe($3,ini)==1){
			if(tipovar($3,ini)==0)	{	
				$$ = declarar(1,"",0,retornaInt($3,ini)*$1,""); } //declaro un nodo auxiliar tipo float
			if(tipovar($3,ini)==1)	{	
				$$ = declarar(1,"",0,retornaFloat($3,ini)*$1,""); }//declaro un nodo auxiliar tipo float	
			if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}	}
		else {	printf("\tError, una de las variables no existe\n");  $$=NULL;	}				}		
	| exp_texto '*' nombre_var        	{	printf("\tError de sintaxis: strings no se multiplican\n");	}
	| nombre_var '*' nombre_var			{	
		if((existe($1,ini))&&(existe($3,ini))){
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0)){
				$$ = declarar(1,"",0,retornaInt($3,ini)*retornaInt($1,ini),"");		}  //declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1)){
				$$ = declarar(1,"",0,retornaFloat($3,ini)*retornaFloat($1,ini),"");		}//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1)){
				$$ = declarar(1,"",0,retornaInt($1,ini)*retornaFloat($3,ini),""); 	} //declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0)){
				$$ = declarar(1,"",0,retornaFloat($1,ini)*retornaInt($3,ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==2)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==2)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==0)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==1)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==2)){ printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}				}
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}				}
	| nombre_var '*' operacion_con_variable	 {	
			if(existe($1,ini)==1){
				if(tipovarNodo($3)==1){
					if(tipovar($1,ini)==0)		{$$ = declarar(1,"",0,retornaInt($1,ini)*(*$3->t_float),"");}
					else if(tipovar($1,ini)==1) {$$ = declarar(1,"",0,retornaFloat($1,ini)*(*$3->t_float),"");}
					else if(tipovar($1,ini)==2)	{ printf("\tError, operación de tipos distintos\n");	$$=NULL;	 }				}
				else if(tipovarNodo($3)==2){ printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}		}
			else{	printf("\tError, una de las variables no existe\n");	$$=NULL; }
											}	
	| operacion_con_variable '*' nombre_var	{	
			if(existe($3,ini)==1){
				if(tipovarNodo($1)==1){
					if(tipovar($3,ini)==0)		{$$ = declarar(1,"",0,retornaInt($3,ini)*(*$1->t_float),"");}
					else if(tipovar($3,ini)==1) {$$ = declarar(1,"",0,retornaFloat($3,ini)*(*$1->t_float),"");}
					else if(tipovar($3,ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	} 		}
				else if(tipovarNodo($1)==2){ printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}		}
			else{	printf("\tError, una de las variables no existe\n");	$$=NULL; }			}	
	| operacion_con_variable '*' exp_entera	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, (*$1->t_float) * ($3),"");}
		else{printf("\tNo se pueden multiplicar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '*' exp_decimal	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, (*$1->t_float) * ($3),"");}
		else{printf("\tNo se pueden multiplicar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '*' exp_texto	{	printf("\tNo se pueden multiplicar strings\n");	 $$=NULL;	}	
	| operacion_con_variable '*' operacion_con_variable  {	
		if(	(tipovarNodo($1)==1)	&&	(tipovarNodo($3)==1)	){
			$$ = declarar(1,"",0,(*$1->t_float)*(*$3->t_float),""); }	
		}	


			
	| nombre_var '/' exp_decimal        	{
			if(existe($1,ini)==1){	//////////////////////////////------DIVICIÓN-------//////////////////////////////
				if(tipovar($1,ini)==0)	{	
					$$ = declarar(1,"",0,retornaInt($1,ini)/$3,""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar($1,ini)==1)	{	
					$$ = declarar(1,"",0,retornaFloat($1,ini)/$3,"");	} //declaro un nodo auxiliar tipo float
				if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");	$$=NULL; }	}
			else {	printf("\tError, una de las variables no existe\n");	$$=NULL;	}				}
	| nombre_var '/' exp_entera        	{ 
			if(existe($1,ini)==1){
				if(tipovar($1,ini)==0)	{	
					$$ = declarar(1,"",0,retornaInt($1,ini)/$3,""); 	} //declaro un nodo auxiliar tipo float
				if(tipovar($1,ini)==1)	{	
					$$ = declarar(1,"",0,retornaFloat($1,ini)/$3,"");	} //declaro un nodo auxiliar tipo float	
				if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");	$$=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); $$=NULL;	}			}
			
	| nombre_var '/' exp_texto      {	printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}
	
	| exp_decimal '/' nombre_var        {
			if(existe($3,ini)==1){
				if(tipovar($3,ini)==0)	{	
					$$ = declarar(1,"",0,retornaInt($3,ini)/$1,""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar($3,ini)==1)	{	
					$$ = declarar(1,"",0,retornaFloat($3,ini)/$1,""); 	}//declaro un nodo auxiliar tipo float
				if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");		$$=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); $$=NULL;	}			}
	| exp_entera '/' nombre_var        	{
			if(existe($3,ini)==1){
				if(tipovar($3,ini)==0)	{	
					$$ = declarar(1,"",0,retornaInt($3,ini)/$1,"");  }//declaro un nodo auxiliar tipo float
				if(tipovar($3,ini)==1)	{	
					$$ = declarar(1,"",0,retornaFloat($3,ini)/$1,"");	} //declaro un nodo auxiliar tipo float
				if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: strings no se dividen\n");		$$=NULL;	}	}
			else {	printf("\tError, una de las variables no existe\n"); $$=NULL;	}			}		
	| exp_texto '/' nombre_var        	{	printf("\tError de sintaxis: strings no se multiplican\n");	$$=NULL;	}
	
	| nombre_var '/' nombre_var			{	
		if((existe($1,ini))&&(existe($3,ini))){
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0)){
				$$ = declarar(1,"",0,retornaInt($3,ini)/retornaInt($1,ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1)){
				$$ = declarar(1,"",0,retornaFloat($3,ini)/retornaFloat($1,ini),"");	}//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1)){
				$$ = declarar(1,"",0,retornaInt($1,ini)/retornaFloat($3,ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0)){
				$$ = declarar(1,"",0,retornaFloat($1,ini)/retornaInt($3,ini),"");  }//declaro un nodo auxiliar tipo float
			if((tipovar($1,ini)==0)&&(tipovar($3,ini)==2)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==1)&&(tipovar($3,ini)==2)){ printf("\tError, operación de tipos distintos\n");	$$=NULL;	}
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==0)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==1)){ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}
			if((tipovar($1,ini)==2)&&(tipovar($3,ini)==2)){ printf("\tError de sintaxis: strings no se dividen\n");	$$=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}											}
	| nombre_var '/' operacion_con_variable	 {	
		if(existe($1,ini)==1){
			if(tipovarNodo($3)==1){
				if(tipovar($1,ini)==0)		{$$ = declarar(1,"",0,retornaInt($1,ini)/(*$3->t_float),"");}
				else if(tipovar($1,ini)==1) {$$ = declarar(1,"",0,retornaFloat($1,ini)/(*$3->t_float),"");}
				else if(tipovar($1,ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}	}
				else if(tipovarNodo($3)==2){ printf("\tError de sintaxis: strings no se dividen\n");	$$=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}				}	
	| operacion_con_variable '/' nombre_var	{	
		if(existe($3,ini)==1){
			if(tipovarNodo($1)==1){
				if(tipovar($3,ini)==0)		{$$ = declarar(1,"",0,retornaInt($3,ini)/(*$1->t_float),"");}
				else if(tipovar($3,ini)==1) {$$ = declarar(1,"",0,retornaFloat($3,ini)/(*$1->t_float),"");}
				else if(tipovar($3,ini)==2)	{ printf("\tError, operación de tipos distintos\n"); 	$$=NULL;	}		}
			else if(tipovarNodo($1)==2){ printf("\tError de sintaxis: strings no se dividen\n");	$$=NULL;	}
			}//en caso de no existir una variable, devuelvo nulo para anular toda la operación anterior 
		else{	printf("\tError, una de las variables no existe\n"); $$=NULL;	}		}	
	| operacion_con_variable '/' exp_entera	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, *$1->t_float / $3,"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '/' exp_decimal	{	
		if(tipovarNodo($1)==1){$$=declarar(1,"",0, *$1->t_float / $3,"");}
		else{printf("\tNo se pueden sumar tipos distintos\n");	 $$=NULL;	}	}	
	| operacion_con_variable '/' exp_texto	{	printf("\tNo se pueden dividir strings\n");	 $$=NULL;	}		
	| operacion_con_variable '/' operacion_con_variable  {	
		if(	(tipovarNodo($1)==1)	&&	(tipovarNodo($3)==1)	){
			$$ = declarar(1,"",0,(*$1->t_float)/(*$3->t_float),""); }	
		}	

		
		
	| exp_pow '(' operacion_con_variable ',' exp_entera ')'	{	//////////////////////////////------POTENCIA------//////////////////////////////
						if(tipovarNodo($3)==2)		{	
							$$=declarar(2,"",0,0,powString($3->t_string,$5));		}
						else if(tipovarNodo($3)==1)	{	
							$$=declarar(1,"",0,powFloat(*$3->t_float,$5),"");	}			}
	| exp_pow '(' nombre_var ',' exp_entera ')' {
						if(existe($3,ini)==1){
							if(tipovar($3,ini)==0)		{
								$$=declarar(1,"",0,powInt(retornaInt($3,ini),$5),"");		}
							else if(tipovar($3,ini)==1)	{	
								$$=declarar(1,"",0,powFloat(retornaFloat($3,ini),$5),"");		}
							else if(tipovar($3,ini)==2)	{	
								$$=declarar(2,"",0,0,powString(retornaString($3,ini),$5));	}	}//devuelvo nulo para anular toda la operación anterior 
						else{	printf("\tError, una de las variables no existe\n");	$$=NULL;	 }
	}
		
;



tipo_var: 	TIPOVAR		{$$ = $1;};

nombre_var:		NOMBRE	{ $$ = $1;};

declaracion_variable:
	 tipo_var nombre_var '=' exp_entera ';' {//DECLARAR UN VALOR Y ASIGNARLE UN ENTERO
						if(existe($2,ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");
							//imprimeValores($2,ini);
							}
						else if($1==0){ 
							agregar(0, $2, $4, 0,"", cab,ini);
							//imprimeValores($2,ini);
							recorrer(ini);}
						else if($1==1){
							agregar(1, $2, 0, $4,"", cab,ini);
							//imprimeValores($2,ini);
							recorrer(ini);	}
						else if($1==2){
							printf("\tError de sintaxis: No se puede asignar valor int a variable tipo String\n");	}
						$$=$2;
					}
	 | tipo_var nombre_var '=' exp_decimal ';' {//DECLARAR UN VALOR Y ASIGNARLE UN DECIMAL
						if(existe($2,ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}	 
						else if($1==0){ 
							agregar(0, $2, $4, 0,"", cab,ini);
							recorrer(ini);	}
						else if($1==1){
							agregar(1, $2, 0, $4,"", cab,ini);
							recorrer(ini);	}
						else if($1==2){
							printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");	}
						$$=$2;
					}
	 | tipo_var nombre_var '=' exp_texto  ';'{//DECLARAR UN VALOR Y ASIGNARLE UNA CADENA
						if(existe($2,ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}						
						else if($1==0){ 
							printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
						else if($1==1){
							printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
						else if($1==2){
							if($4==NULL)	{printf(" ");}
							else	{agregar(2, $2, 0, 0,$4, cab,ini);	recorrer(ini);	}	}
						$$=$2;
					}
	 | tipo_var nombre_var '=' operacion_con_variable ';' {//DECLARAR UN VALOR Y ASIGNARLE UN NODO
						if(existe($2,ini)==1){
							printf("\tError de sintaxis: La variable ya existe\n");		}	
						else if (tipovarNodo($4)==2)	{				
							if($1==0){	printf("\tError de sintaxis: No se puede asignar String a variable tipo int\n");	}
							if($1==1){	printf("\tError de sintaxis: No se puede asignar String a variable tipo float\n");	}
							if($1==2){	agregar(2, $2, 0, 0,$4->t_string, cab,ini);	recorrer(ini);	}	}
						else if (tipovarNodo($4)==1)	{
							if($1==0){	agregar(0, $2, *$4->t_float, 0,"", cab,ini);	recorrer(ini);	}
							if($1==1){	agregar(1, $2, 0, *$4->t_float,"", cab,ini);	recorrer(ini);	}
							if($1==2){	printf("\tError de sintaxis: No se puede asignar int o float a variable tipo string\n");	}	}
						$$=$2;
					}				
	| tipo_var  nombre_var	'=' nombre_var ';' {//DECLARAR UNA VARIABLE Y ASIGNARLE EL VALOR DE OTRA VARIABLE
						if(existe($4,ini)==1){// si la $4 existe
							if((tipovar($4,ini)==0)||(tipovar($4,ini)==1)){//si la $4 es un numero
								if($1==0){ //si tipo var es INT
									agregar(0, $2, retornaInt($4,ini)+retornaFloat($4,ini), 0,"", cab,ini);
									recorrer(ini);	}
								else if($1==1){//si tipo var es FLOAT
									agregar(1, $2, 0, retornaInt($4,ini)+retornaFloat($4,ini),"", cab,ini);
									recorrer(ini);	}
								else if($1==2){//si tipo var es STRING
									printf("\tError, la variable que se desea asignar es de otro tipo\n");}	
								}
							else if(tipovar($4,ini)==2){//si $4 es string
								if($1==0){ //si tipo var es INT
									printf("\tError, la variable que se desea asignar es de otro tipo\n");	}
								else if($1==1){//si tipo var es FLOAT
									printf("\tError, la variable que se desea asignar es de otro tipo\n");	}
								else if($1==2){//si tipo var es STRING
									agregar(2, $2, 0, 0,retornaString($4,ini), cab,ini);
									recorrer(ini);}								
								}
							$$=$2;}
						else {printf("\tLa variable que se quiere asignar no existe\n");}//si $4 no existe
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
	nombre_var '=' exp_entera {
						if(existe($1,ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar($1,ini)==0)	{sobreescribirValor($1,$3, 0, "", ini);}
							if(tipovar($1,ini)==1)	{sobreescribirValor($1,0, $3, "", ini);}
							if(tipovar($1,ini)==2)	{printf("\tError de sintaxis: La variable no es entero ni float\n");
							imprimeValores($1,ini);}
							}
						else{
							printf("\tError de sintaxis: La variable no existe\n");}	
						$$=$1;							
					}
	|nombre_var '=' exp_decimal{
						if(existe($1,ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar($1,ini)==0)	{sobreescribirValor($1, $3, 0, "", ini);}
							if(tipovar($1,ini)==1)	{sobreescribirValor($1, 0, $3, "", ini);}
							if(tipovar($1,ini)==2)	{printf("\tError de sintaxis: La variable no es entero ni float\n");}
							imprimeValores($1,ini);
							}
						else{
							printf("\tError de sintaxis: La variable no existe\n");}
						$$=$1;								
					}
	|nombre_var '=' exp_texto{
						$$=$1;
						if(existe($1,ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar($1,ini)==0)	{printf("\tError de sintaxis: La variable no es de tipo String\n");}
							if(tipovar($1,ini)==1)	{printf("\tError de sintaxis: La variable no es de tipo String\n");}
							if(tipovar($1,ini)==2)	{sobreescribirValor($1, 0, 0, $3, ini);}
							}
						else{
							printf("\tError de sintaxis: La variable no existe\n");}	
						$$=$1;						
					}
	|nombre_var '=' operacion_con_variable {
						if(existe($1,ini)==1){//void sobreescribirValor(char * nombre,int varInt, float varFloat , char * varString, Nodo * ini)
							if(tipovar($1,ini)==0)	{
								if(tipovarNodo($3)==1){
									sobreescribirValor($1, *$3->t_float, 0, "", ini);}}
							if(tipovar($1,ini)==1)	{
								if(tipovarNodo($3)==1){
									sobreescribirValor($1, 0, *$3->t_float, "", ini);}}
							if(tipovar($1,ini)==2)	{
								if(tipovarNodo($3)==2){
									sobreescribirValor($1, 0, 0, $3->t_string, ini);}}
							}
						else{	printf("\tError de sintaxis: La variable no existe\n");}	
						$$=$1;						
					}
;

exp_printf:		PRINTF '(' nombre_var ')' {//esta funcion es util para ver los valores de determinada variable...
					if(existe($3,ini)==1){
						imprimeValores($3,ini);
						$$=$3;}//esto no importa, es para que devuelva algo
					else{
						printf("\tLa variable no existe\n");}
}


condicional:	
	IF '(' nombre_var	'<'	nombre_var ')'	{
		if(  (existe($3,ini)==0) ||  (existe($5,ini)==0)  ){//si alguna de las dos variables no existe devuelve false
			printf("\tError: Una de las variables no existe\n");
			$$=2;}//2 será el error
		else{
			if		(	(tipovar($3,ini)==0) && (tipovar($5,ini)==0)	){	
					if(retornaInt($3,ini)<retornaInt($5,ini))	{	$$=1;	}
					else { $$=0; }	}
			else if	(	(tipovar($3,ini)==1) && (tipovar($5,ini)==1)	){	
					if(retornaFloat($3,ini)<retornaFloat($5,ini))	{	$$=1;	}
					else { $$=0; }	}		
			else if	(	(tipovar($3,ini)==0) && (tipovar($5,ini)==1)	){	
					if(retornaInt($3,ini)<retornaFloat($5,ini))	{	$$=1;	}
					else{ $$=0; }	}		
			else if	(	(tipovar($3,ini)==1) && (tipovar($5,ini)==0)	){	
					if(retornaFloat($3,ini)<retornaInt($5,ini))	{	$$=1;	}
					else{ $$=0; }	}
			else {	printf("\tError de tipo de datos\n"); $$=2;	}
			}		
	}

	|IF '(' nombre_var	'>'	nombre_var ')'	{
		if(  (existe($3,ini)==0) ||  (existe($5,ini)==0)  ){//si alguna de las dos variables no existe devuelve false
			printf("\tError: Una de las variables no existe\n");
			$$=2;}//2 será el error
		else{
			if		(	(tipovar($3,ini)==0) && (tipovar($5,ini)==0)	){	
					if(retornaInt($3,ini)>retornaInt($5,ini))	{	$$=1;	}
					else { $$=0; }	}
			else if	(	(tipovar($3,ini)==1) && (tipovar($5,ini)==1)	){	
					if(retornaFloat($3,ini)>retornaFloat($5,ini))	{	$$=1;	}
					else { $$=0; }	}		
			else if	(	(tipovar($3,ini)==0) && (tipovar($5,ini)==1)	){	
					if(retornaInt($3,ini)>retornaFloat($5,ini))	{	$$=1;	}
					else{ $$=0; }	}		
			else if	(	(tipovar($3,ini)==1) && (tipovar($5,ini)==0)	){	
					if(retornaFloat($3,ini)>retornaInt($5,ini))	{	$$=1;	}
					else{ $$=0; }	}
			else {	printf("\tError de tipo de datos\n"); $$=2;	}
			}		
	}	

	|IF '(' nombre_var	'=''='	nombre_var ')'	{
		if(  (existe($3,ini)==0) ||  (existe($6,ini)==0)  ){//si alguna de las dos variables no existe devuelve false
			printf("\tError: Una de las variables no existe\n");
			$$=2;}//2 será el error
		else{
			if		(	(tipovar($3,ini)==0) && (tipovar($6,ini)==0)	){	
					if(retornaInt($3,ini)==retornaInt($6,ini))	{	$$=1;	}
					else { $$=0; }	}
			else if	(	(tipovar($3,ini)==1) && (tipovar($6,ini)==1)	){	
					if(retornaFloat($3,ini)==retornaFloat($6,ini))	{	$$=1;	}
					else { $$=0; }	}		
			else if	(	(tipovar($3,ini)==0) && (tipovar($6,ini)==1)	){	
					if(retornaInt($3,ini)==retornaFloat($6,ini))	{	$$=1;	}
					else{ $$=0; }	}		
			else if	(	(tipovar($3,ini)==1) && (tipovar($6,ini)==0)	){	
					if(retornaFloat($3,ini)==retornaInt($6,ini))	{	$$=1;	}
					else{ $$=0; }	}
			else if (	(tipovar($3,ini)==2)  &&  (tipovar($6,ini)==2)	)	{
				if(precisionCompare( retornaString($3,ini) , retornaString($6,ini) )==0){	$$=1;	}
				else {	$$=0;	}		}					
			else {	printf("\tError de tipo de datos\n"); $$=2;	}
			}		
	}	

	| IF '(' '('operacion_con_variable')'	'=' '='	'('operacion_con_variable')' ')'	{
			if		(	(tipovarNodo($4)==1) && (tipovarNodo($9)==1)	){	
					if((*$4->t_float)==(*$9->t_float))	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

	| IF '(' exp_decimal	'=' '='	operacion_con_variable ')'	{
			if		(tipovarNodo($6)==1)	{	
					if($3==(*$6->t_float))	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

	| IF '(' operacion_con_variable	'=' '='	exp_decimal ')'	{
			if		(tipovarNodo($3)==1)	{	
					if((*$3->t_float)==$6)	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

	| IF '(' exp_decimal	'<'	operacion_con_variable ')'	{
			if		(tipovarNodo($5)<1)	{	
					if($3==(*$5->t_float))	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

	| IF '(' operacion_con_variable	'<'	exp_decimal ')'	{
			if		(tipovarNodo($3)==1)	{	
					if((*$3->t_float)<$5)	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

	| IF '(' exp_decimal	'>'	operacion_con_variable ')'	{
			if		(tipovarNodo($5)>1)	{	
					if($3==(*$5->t_float))	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

	| IF '(' operacion_con_variable	'>'	exp_decimal ')'	{
			if		(tipovarNodo($3)==1)	{	
					if((*$3->t_float)>$5)	{	$$=1;	}
					else { $$=0; }	}
			else {	printf("\tError de variable\n"); $$=2;	}
	}

;
	
	
/*

			else if (	(tipovar($3,ini)==2)  &&  (tipovar($5,ini)==2)	)	{
				if(precisionCompare( retornaString($3,ini) , retornaString($5,ini) )==0){	$$=1;	}
				else {	$$=0;	}		}

*/

        
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
