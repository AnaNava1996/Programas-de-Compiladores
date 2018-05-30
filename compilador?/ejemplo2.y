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
}
%token <entero> ENTERO
%type <entero> exp_entera
%token <decimal> DECIMAL
%type <decimal> exp_decimal
%token <texto> TEXTO
%type <texto> exp_texto
%token <texto> POTENCIA
%type <texto> exp_pow

%token <texto> INTEGER
%type <texto> var_int
%token <texto> CHARACTER
%type <texto> var_char
%token <texto> FLOAT
%type <texto> var_float
%token <texto> VARIABLE
%type <texto> variable


%left '+''-'
%left '*''/''%'
%left '='
%left ';'
             
/* Gramática */
%%
             
input:    /* cadena vacía */
        | input line             
;

line:	'\n'
        | exp_entera ';' '\n'  { printf ("\tresultado: %d\n", $1); }
        | exp_decimal ';' '\n'  { printf ("\tresultado: %f\n", $1); }
		| exp_texto ';' '\n'  { printf ("\tresultado: %s\n", $1); }
		| error '\n' { yyerrok;                  }
;

var_int:	INTEGER		{ $$ = $1;};

var_char:	CHARACTER	{ $$ = $1;};

var_float:	FLOAT		{ $$ = $1;};

variable:	VARIABLE	{ $$ = $1;};
         
exp_entera:     ENTERO	{ $$ = $1; }
	| '-' exp_entera		   { $$ = $2 * (-1);  }
	| exp_entera '+' exp_entera        { $$ = $1 + $3;    }
	| exp_entera '*' exp_entera        { $$ = $1 * $3;    }
	| exp_entera '/' exp_entera        { $$ = $1 / $3;    }
	| exp_entera '-' exp_entera        { $$ = $1 - $3;    }
	| var_int variable '=' exp_entera
					   { $$ = $4;//corrobora que la variable existe
						if(existe($2,ini)==1){
							printf("La variable ya existe\n");
							}
						else{
							agregar(0, $2, $4, 0,"", cab,ini);
							recorrer(ini);}
						}	
						
;
exp_decimal:     DECIMAL	{ $$ = $1; }
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

	| var_float variable '=' exp_decimal
					    { $$ = $4;	//corrobora si la variable existe... falta reutilizar
						if(existe($2,ini)==1){
							printf("La variable ya existe\n");
							}
						else{
							agregar(1, $2, 0, $4,"", cab,ini);
							recorrer(ini);}
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

	|var_char variable '=' exp_texto { $$ = $4;	//corrobora si la variable existe... falta reutilizar
						if(existe($2,ini)==1){
							printf("La variable ya existe\n");
							}
						else{
							agregar(2, $2, 0, 0,$4, cab,ini);
							recorrer(ini);}	
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
