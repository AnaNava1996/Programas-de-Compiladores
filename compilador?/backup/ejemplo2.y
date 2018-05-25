%{
#include <stdio.h>
#include <string.h>
//#include <math.h>
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
%token <texto> COMA
%type <texto> exp_coma

%left '+''-'
%left '*''/'
             
/* Gramática */
%%
             
input:    /* cadena vacía */
        | input line             
;

line:	'\n'
        | exp_entera '\n'  { printf ("\tresultado: %d\n", $1); }
        | exp_decimal '\n'  { printf ("\tresultado: %f\n", $1); }
	| exp_texto '\n'  { printf ("\tresultado: %s\n", $1); }
;
             
exp_entera:     ENTERO	{ $$ = $1; }
	| exp_entera '+' exp_entera        { $$ = $1 + $3;    }
	| exp_entera '*' exp_entera        { $$ = $1 * $3;    }
	| exp_entera '/' exp_entera        { $$ = $1 / $3;    }
	| exp_entera '-' exp_entera        { $$ = $1 - $3;    }
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
;

exp_pow:	POTENCIA	{ $$ = $1;};

exp_coma:	COMA		{ $$ = $1;};

exp_texto:	TEXTO		{ $$ = $1;}
	| exp_texto '+' exp_texto	{
					int len1=0,len3=0;
					while($1[len1]!='\0'){
						len1++;}
					while($3[len3]!='\0'){
						len3++;}
					char *aux = malloc(sizeof(char)*(len1+len3+1)); 
					int i=1;
					int j=1;
					int p=0;
					for(i=0;$1[i]!='\0';i++){
						if(($1[i]!='+')&&($1[i]!='"')){
							aux[p++]=$1[i];}}
					for(i=0;$3[i]!='\0';i++){
						if(($3[i]!='+')&&($3[i]!='"')){
							aux[p++]=$3[i];}}
					aux[p]='\0';
					$$=aux;
					}

	| exp_texto '-' exp_texto	{ 
					int p=0;
					int k=0;
					int ini=0;
					int fin=0;
					int len1=0;
					//int aux=0;
					int len3=0;
					char *aux;

					while($1[len1]!='\0'){
						len1++;}
					while($3[len3]!='\0'){
						len3++;}

					if(len3>len1){
						printf("\nresta no valida!!!\n\n");
						break;}

					else{
						aux = malloc(sizeof(char)*(len1+1));					
						for(int i=0;$1[i]!='\0';i++){
							if($1[i]==$3[0]){
								ini=i;
								fin=i;
								for(int j=1;$3[j]!='\0';j++){
									if($3[j]==$1[i+j]){
										fin++;}
									}
								if(fin-ini+1==len3){
									for(k=0;k<ini;k++){
										aux[k]=$1[k];
										}
									for(int m=fin+1;$1[m]!='\0';m++){
										aux[k++]=$1[m];
										}
									aux[k]='\0';
									//printf("\nini %d   fin %d   len3 %d\n",ini,fin,len3);
									fin=0;
									break;
									}
								}
							}
						}
					printf("\n%s\n",aux);
					$$=aux;
					}
	
	| exp_pow '(' exp_texto ',' exp_entera ')' exp_coma	{
						int p=0,len=0,q=0;
						while($3[len]!='\0'){
							len++;}
						char *aux2 = malloc(sizeof(char)*(len+1));
						char *aux;

						if($5<0){
							aux = malloc(sizeof(char)*(len*(-1*$5)+1));
							for(int j=len-1 ; j>=0 ; j--){
								//printf("%c",$3[j]);
								aux2[p++]=$3[j];									
							}
							//printf("\n%s\n",aux2);
							//printf("\n%d\n",p);
							aux2[p]='\0';

							for(int i=$5 ; i<0 ; i++){
								//printf("\n%s\n",aux2);
								for(int j=0 ; aux2[j]!='\0' ; j++){
									//printf("%c",aux[q]);
									aux[q++]=aux2[j];
									
								}								
							}
							aux[q]='\0';
							printf("%s\n",aux);
						}

						else{
							aux = malloc(sizeof(char)*(len*($5)+1));
							for(int i=0 ; i<$5 ; i++ ){
								for(int j=0 ; $3[j]!='\0' ; j++){
									aux[p++]=$3[j];
								}
							}
							aux[p]='\0';
						}
						//printf("\n%s\n",aux);
						$$=aux;
					}

;


        
%%

int main() {
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
