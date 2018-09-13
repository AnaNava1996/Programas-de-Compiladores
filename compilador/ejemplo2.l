%{
#include "ejemplo2.tab.h"
%}

NUM [0-9]+

CAD \"(\\.|[^"\\])*\"

POW ("P"|"p")("O"|"o")("W"|"w")
PRINTF ("P"|"p")("R"|"r")("I"|"i")("N"|"n")("T"|"t")("F"|"f")
/*    VAR [a-zA-Z"_"]([a-zA-Z0-9"_"])*     */
INT ("I"|"i")("N"|"n")("T"|"t")
FLOAT ("F"|"f")("L"|"l")("O"|"o")("A"|"a")("T"|"t")
STRING ("S"|"s")("T"|"t")("R"|"r")("I"|"i")("N"|"n")("G"|"g")
VAR [a-zA-Z"_"]([a-zA-Z0-9"_"])*


IF ("I"|"i")("F"|"f")


%%

{NUM}           {
		//printf("Numero entero %s\n",yytext);
                yylval.entero = atoi(yytext);
                return (ENTERO);
                }

[0-9]*"."[0-9]+           {
                //printf("Numero decimal %s\n",yytext);
                yylval.decimal = atof(yytext);
                return (DECIMAL);
                }

"+"	 	{
		//printf("Signo mas\n");
                return (yytext[0]);
                }

"-"         	{
                //printf("Signo menos\n");
                return (yytext[0]);
                }
">"         	{
                return (yytext[0]);
                }
"<"         	{
                return (yytext[0]);
                }

"*"		{
                //printf("Signo multiplicacion\n");
                return (yytext[0]);
                }
"%"		{
                //printf("Signo módulo\n");
                return (yytext[0]);
                }

"/"         	{
                //printf("Signo division\n");
                return (yytext[0]);
                }

"("         	{
                //printf("Abro paréntesis\n");
                return (yytext[0]);
                }

")"         	{
                //printf("Cierro paréntesis\n");
                return (yytext[0]);
                }
                
"["         	{
                //printf("Abro paréntesis\n");
                return (yytext[0]);
                }

"]"         	{
                //printf("Cierro paréntesis\n");
                return (yytext[0]);
                }                

","         	{
                //printf("Coma\n");
                return (yytext[0]);
                }
                
";"         	{
                //printf("punto y coma\n");
                return (yytext[0]);
                }

"="         	{
                //printf("Igual\n");
                return (yytext[0]);
                }


"\n"            {
		//printf("Salto de linea\n");
                return (yytext[0]);
                }

{CAD}		{
		char *input;
		int j=0;
		input = (char *) malloc(sizeof(char));
		for(int i=1;yytext[i]!='\0';i++){
			if(yytext[i]!='"'){
				input[j++]=yytext[i];}}
		input[j]='\0';
		//printf("Cadena %s\n",input);
		yylval.texto = input;
		return (TEXTO);
		}

{POW}		{
		//printf("Potencia de caracteres\n");
        yylval.texto = yytext;
		return (POTENCIA);
		}

{IF}	{
        yylval.texto = yytext;
		return (IF);
		}		
		
{PRINTF}		{
		//printf("Potencia de caracteres\n");
        yylval.texto = yytext;
		return (PRINTF);
		}
		

{INT}	{
		//printf("Tipo Variable\n");
        yylval.entero = 0;
		return (TIPOVAR);
		}

{FLOAT}	{
		//printf("Tipo Variable\n");
        yylval.entero = 1;
		return (TIPOVAR);
		}


{STRING}	{
		//printf("Tipo Variable\n");
        yylval.entero = 2;
		return (TIPOVAR);
		}


{VAR}		{
		
		char *input;
		int j=0;
		input = (char *) malloc(sizeof(char));
		for(int i=0;yytext[i]!='\0';i++){
			input[j++]=yytext[i];}
		input[j]='\0';
		//printf("Variable %s\n",input);
		yylval.texto = input;
		return (NOMBRE);
		}


.               ;


%%
