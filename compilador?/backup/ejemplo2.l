%{
#include "ejemplo2.tab.h"
%}

NUM "-"?[0-9]+

CAD \"(\\.|[^"\\])*\"

POW ("P"|"p")("O"|"o")("W"|"w")


%%

{NUM}           {
		printf("Numero entero %s\n",yytext);
                yylval.entero = atoi(yytext);
                return (ENTERO);
                }

"-"?[0-9]*"."[0-9]+           {
                printf("Numero decimal %s\n",yytext);
                yylval.decimal = atof(yytext);
                return (DECIMAL);
                }

"+"	 	{
		printf("Signo mas\n");
                return (yytext[0]);
                }

"-"         	{
                printf("Signo menos\n");
                return (yytext[0]);
                }

"*"		{
                printf("Signo multiplicacion\n");
                return (yytext[0]);
                }

"/"         	{
                printf("Signo division\n");
                return (yytext[0]);
                }

"("         	{
                printf("Abro paréntesis\n");
                return (yytext[0]);
                }

")"         	{
                printf("Cierro paréntesis\n");
                return (yytext[0]);
                }

","         	{
                printf("Coma\n");
                return (yytext[0]);
                }


"\n"            {
		printf("Salto de linea\n");
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
		printf("Cadena %s\n",input);
		yylval.texto = input;
		return (TEXTO);
		}

{POW}		{
		printf("Potencia de caracteres\n");
                yylval.texto = yytext;
		return (POTENCIA);
		}


";"		{
		printf("Punto y coma\n");
                yylval.texto = yytext;
                return (COMA);
                }



.               ;


%%
