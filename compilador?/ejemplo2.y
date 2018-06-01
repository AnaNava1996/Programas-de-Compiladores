%{
#include <stdio.h>
#include <string.h>
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
	//struct nodo *nodito;
}
%token <entero> ENTERO
%type <entero> exp_entera
%token <decimal> DECIMAL
%type <decimal> exp_decimal
%token <texto> TEXTO
%type <texto> exp_texto
%token <texto> POTENCIA
%type <texto> exp_pow


%token <entero> TIPOVAR
%type <entero> tipo_var
%token <texto> NOMBRE
%type <texto> nombre_var
%type <texto> declaracion_variable//funciona como funcion
%type <texto> sobreescribir_variable//funciona como funcion

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

line:	'\n'	{printf("\tError de sintaxis: falta un ;");}
        | exp_entera 				';' '\n'  { printf ("\tresultado: %d\n", $1); }
        | exp_decimal 				';' '\n'  { printf ("\tresultado: %f\n", $1); }
		| exp_texto 				';' '\n'  { printf ("\tresultado: %s\n", $1); }
		| declaracion_variable 		';' '\n'  {/*{ printf("nueva variable:%s \n",$1);*/ printf("\n");}
		| sobreescribir_variable 	';' '\n'  {printf("\n");}
		| error 					'\n' { yyerrok;                  }
;

         
exp_entera:     ENTERO	{ $$ = $1; }
	| '-' exp_entera		   { $$ = $2 * (-1);  }
	| exp_entera '+' exp_entera        { $$ = $1 + $3;    }
	| exp_entera '*' exp_entera        { $$ = $1 * $3;    }
	| exp_entera '/' exp_entera        { $$ = $1 / $3;    }
	| exp_entera '-' exp_entera        { $$ = $1 - $3;    }
	| exp_entera '%' exp_entera        { $$ = $1 % $3;    }
	| nombre_var '%' exp_entera        { if(tipovar($1,ini)==0) {$$= retornaInt($1,ini) % $3; }
										else{printf("\tError de sintaxis: el modulo es entre enteros\n");}   }
	| exp_entera '%' nombre_var        { if(tipovar($3,ini)==0) {$$= $1 % retornaInt($3,ini); } 
										else{printf("\tError de sintaxis: el modulo es entre enteros\n");}  }
	| nombre_var '%' nombre_var        { if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0)) {$$= retornaInt($1,ini) % retornaInt($3,ini); }
										else{printf("\tError de sintaxis: el modulo es entre enteros\n");}   }
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

	| nombre_var '+' exp_decimal        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) + $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) + $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}	}
										
	| exp_decimal '+' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) + $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) + $1; }	
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}	}
											
	| nombre_var '+' exp_entera        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) + $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) + $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n");}  }
											
	| exp_entera '+' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) + $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) + $1; }
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede sumar numero con string\n"); }	}

	| nombre_var '+' nombre_var			{ 	if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0))	{$$ = retornaInt($1,ini) + retornaInt($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1))	{$$ = retornaFloat($1,ini) + retornaFloat($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0))	{$$ = retornaFloat($1,ini) + retornaInt($3,ini);}
											if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1))	{$$ = retornaInt($1,ini) + retornaFloat($3,ini);}	}

	| nombre_var '-' exp_decimal        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) - $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) - $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");}	}
										
	| exp_decimal '-' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) - $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) - $1; }	
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");}	}
											
	| nombre_var '-' exp_entera        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) - $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) - $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n");}  }
											
	| exp_entera '-' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) - $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) - $1; }
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede restar numero con string\n"); }	}

	| nombre_var '-' nombre_var			{ 	if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0))	{$$ = retornaInt($1,ini) - retornaInt($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1))	{$$ = retornaFloat($1,ini) - retornaFloat($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0))	{$$ = retornaFloat($1,ini) - retornaInt($3,ini);}
											if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1))	{$$ = retornaInt($1,ini) - retornaFloat($3,ini);}	}

	| nombre_var '/' exp_decimal        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) / $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) / $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");}	}
										
	| exp_decimal '/' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) / $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) / $1; }	
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");}	}
											
	| nombre_var '/' exp_entera        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) / $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) / $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n");}  }
											
	| exp_entera '/' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) / $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) / $1; }
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede dividir numero con string\n"); }	}

	| nombre_var '/' nombre_var			{ 	if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0))	{$$ = retornaInt($1,ini) / retornaInt($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1))	{$$ = retornaFloat($1,ini) / retornaFloat($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0))	{$$ = retornaFloat($1,ini) / retornaInt($3,ini);}
											if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1))	{$$ = retornaInt($1,ini) / retornaFloat($3,ini);}	}
											
	| nombre_var '*' exp_decimal        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) * $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) * $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n");}	}
										
	| exp_decimal '*' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) * $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) * $1; }	
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n");}	}
											
	| nombre_var '*' exp_entera        {	if(tipovar($1,ini)==0)	{	$$ = retornaInt($1,ini) * $3; }
											if(tipovar($1,ini)==1)	{	$$ = retornaFloat($1,ini) * $3; }	
											if(tipovar($1,ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n");}  }
											
	| exp_entera '*' nombre_var        {	if(tipovar($3,ini)==0)	{	$$ = retornaInt($3,ini) * $1; }
											if(tipovar($3,ini)==1)	{	$$ = retornaFloat($3,ini) * $1; }
											if(tipovar($3,ini)==2)	{	printf("\tError de sintaxis: no se puede multiplicar numero con string\n"); }	}

	| nombre_var '*' nombre_var			{ 	if((tipovar($1,ini)==0)&&(tipovar($3,ini)==0))	{$$ = retornaInt($1,ini) * retornaInt($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==1))	{$$ = retornaFloat($1,ini) * retornaFloat($3,ini);}
											if((tipovar($1,ini)==1)&&(tipovar($3,ini)==0))	{$$ = retornaFloat($1,ini) * retornaInt($3,ini);}
											if((tipovar($1,ini)==0)&&(tipovar($3,ini)==1))	{$$ = retornaInt($1,ini) * retornaFloat($3,ini);}	}

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
	| exp_entera '+' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_decimal '+' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '+' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '+' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_entera '-' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_decimal '-' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '-' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '-' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_entera '*' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_decimal '*' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '*' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '*' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_entera '/' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_decimal '/' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '/' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '/' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_entera '%' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_decimal '%' exp_texto {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '%' exp_entera {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	| exp_texto '%' exp_decimal {printf("\tError de sintaxis: no se pueden sumar tipos distintos\n");$$="Error";}
	
	| exp_texto '+' nombre_var {if(tipovar($3,ini)==2)	{ $$=sumaString($1,retornaString($3,ini));	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
	| nombre_var '+' exp_texto {if(tipovar($1,ini)==2)	{ $$=sumaString(retornaString($1,ini),$3);	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
	| exp_texto '-' nombre_var {if(tipovar($3,ini)==2)	{ $$=restaString($1,retornaString($3,ini));	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
	| nombre_var '-' exp_texto {if(tipovar($1,ini)==2)	{ $$=restaString(retornaString($1,ini),$3);	}
								else{	printf("\tError de sintaxis, no son cadenas las dos variables\n");}	}
	| exp_pow '(' nombre_var ',' exp_entera ')'	{
						if(tipovar($3,ini)==2){
							$$=powString(retornaString($3,ini),$5);}
					}
	| nombre_var '+' nombre_var	{
						if((tipovar($1,ini)==2)&&(tipovar($3,ini)==2)){
							$$=sumaString(retornaString($1,ini),retornaString($3,ini));}
					}
;



tipo_var: 	TIPOVAR		{$$ = $1;};

nombre_var:		NOMBRE	{ $$ = $1;};

declaracion_variable:
	 tipo_var nombre_var '=' exp_entera {//DECLARAR UN VALOR Y ASIGNARLE UN ENTERO
						if($1==0){ 
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								//imprimeValores($2,ini);
								}
							else{
								agregar(0, $2, $4, 0,"", cab,ini);
								//imprimeValores($2,ini);
								recorrer(ini);}
						}
						else if($1==1){
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								//imprimeValores($2,ini);
								}
							else{
								agregar(1, $2, 0, $4,"", cab,ini);
								//imprimeValores($2,ini);
								recorrer(ini);}							
						}
						else if($1==2){
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor int a variable tipo String\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor int a variable tipo String\n");}							
						}
					$$=$2;
					}
	 | tipo_var nombre_var '=' exp_decimal {//DECLARAR UN VALOR Y ASIGNARLE UN DECIMAL
						if($1==0){ 
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(0, $2, $4, 0,"", cab,ini);
								recorrer(ini);}
						}
						else if($1==1){
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(1, $2, 0, $4,"", cab,ini);
								recorrer(ini);}							
						}
						else if($1==2){
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");}							
						}
					$$=$2;
					}
	 | tipo_var nombre_var '=' exp_texto {//DECLARAR UN VALOR Y ASIGNARLE UNA CADENA
						if($1==0){ 
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor String a variable tipo int\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");}	
						}
						else if($1==1){
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: No se puede asignar valor String a variable tipo float\n");
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								printf("\tError de sintaxis: No se puede asignar valor float a variable tipo String\n");}						
						}
						else if($1==2){
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(2, $2, 0, 0,$4, cab,ini);
								recorrer(ini);}							
						}
					$$=$2;
					}
	| tipo_var  nombre_var	{//DECLARAR SIN DAR UN VALOR;
						if($1==0){ //si tipo var es INT
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(0, $2, 0, 0,"", cab,ini);
								recorrer(ini);}
						}
						else if($1==1){//si tipo var es FLOAT
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(1, $2, 0, 0,"", cab,ini);
								recorrer(ini);}							
						}
						else if($1==2){//si tipo var es STRING
							if(existe($2,ini)==1){
								printf("\tError de sintaxis: La variable ya existe\n");
								}
							else{
								agregar(2, $2, 0, 0,"", cab,ini);
								recorrer(ini);}							
						}
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
