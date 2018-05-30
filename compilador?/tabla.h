#ifndef STR_FILE
#define STR_FILE
#include <stdlib.h>

typedef struct nodo{
  unsigned char tipo;
  char * nombre;
  int * t_int;
  float * t_float;
  char * t_string;
  struct nodo *next;
}Nodo;

int existe(char *,Nodo *);

int agregar(unsigned char tipo, char * nombre, int t_int, float t_float ,char * t_string, Nodo *cab, Nodo * ini){
  Nodo * ptrNuevo;
  Nodo * ptrAux=ini;
  ptrNuevo=malloc(sizeof(Nodo));

  while(ptrAux->next!=NULL){
    ptrAux = ptrAux->next;
  }

    ptrNuevo->tipo=tipo;
    ptrNuevo->nombre=nombre;
    ptrNuevo->t_int = malloc(sizeof(int));
    ptrNuevo->t_float = malloc(sizeof(float));
    *ptrNuevo->t_int=t_int;
    *ptrNuevo->t_float=t_float;
    if(t_string==NULL)ptrNuevo->t_string=t_string;
    else {
      int tam = 0;
      while(t_string[tam]!='\0') {
        tam++;
      }
      ptrNuevo->t_string=malloc(sizeof(char)*tam+1);
      tam = 0;
      while(t_string[tam]!='\0') {
        ptrNuevo->t_string[tam]=t_string[tam];
        tam++;
      }
      ptrNuevo->t_string[tam]='\0';
    }
    ptrAux->next = ptrNuevo;

    //printf("%s\n",ptrAux->nombre);
    //printf("%s\n",ptrAux->next->nombre);
}

//Compara si un string es exactamente igual a otro. Retorna un 0 si son iguales.
int precisionCompare (char *s1, char * s2)
{
	int size_1 = 0, size_2 = 0;
	while(s1[size_1]!='\0')	{size_1 += 1;}
	while(s2[size_2]!='\0')	{size_2 += 1;}

	int diff = size_1-size_2;

	if(diff==0)
	{
			int check=0;
			for(int i = 0;i<size_2;i++) check+=s1[i]-s2[i];
			return check;
		}
	else {return -1;}
}


int existe(char *nombre,Nodo * ini){
  Nodo * ptrAux=ini;
  while(ptrAux!=NULL){
    if(precisionCompare(ptrAux->nombre,nombre)==0){
      return 1;
      break;
    }
    else{
      //printf("%s\n", ptrAux->nombre);
      ptrAux=ptrAux->next;
    }
  }
}


void recorrer(Nodo * ini){
  Nodo * ptrAux=ini;
  while(ptrAux!=NULL){
    printf("%s\t",ptrAux->nombre);
    ptrAux=ptrAux->next;}
    printf("\n");
}

char* powString(char *a,int b){
  int p=0,len=0,q=0;
  while(a[len]!='\0'){
    len++;}
  char *aux2 = malloc(sizeof(char)*(len+1));
  char *aux = malloc(sizeof(char)*(len+1));;

  if(b<0){
    aux = malloc(sizeof(char)*(len*(-1*b)+1));
    for(int j=len-1 ; j>=0 ; j--){
      aux2[p++]=a[j];
    }
    aux2[p]='\0';
    for(int i=b ; i<0 ; i++){
    for(int j=0 ; aux2[j]!='\0' ; j++){
      aux[q++]=aux2[j];
      }
    }
    aux[q]='\0';
    printf("%s\n",aux);
  }
  else{
    aux = malloc(sizeof(char)*(len*(b)+1));
    for(int i=0 ; i<b ; i++ ){
      for(int j=0 ; a[j]!='\0' ; j++){
        aux[p++]=a[j];
      }
    }
    aux[p]='\0';
  }
  return aux;
}


char * sumaString(char * a,char* b){
  int len1=0,len3=0;
  while(a[len1]!='\0'){
    len1++;}
  while(b[len3]!='\0'){
    len3++;}
  char *aux = malloc(sizeof(char)*(len1+len3+1));
  int i=1;
  int j=1;
  int p=0;
  for(i=0;a[i]!='\0';i++){
    if((a[i]!='+')&&(a[i]!='"')){
      aux[p++]=a[i];}}
  for(i=0;b[i]!='\0';i++){
    if((b[i]!='+')&&(b[i]!='"')){
      aux[p++]=b[i];}}
  aux[p]='\0';
return aux;
}

char * restaString(char * a,char * b){
  int p=0;
  int k=0;
  int ini=0;
  int fin=0;
  int len1=0;
  int len3=0;
  char *aux;
  while(a[len1]!='\0'){
    len1++;}
  while(b[len3]!='\0'){
    len3++;}
  if(len3>len1){
    printf("\nerror, resta no valida\n\n");
   }
  else{
    aux = malloc(sizeof(char)*(len1+1));
    for(int i=0;a[i]!='\0';i++){
      if(a[i]==b[0]){
        ini=i;
        fin=i;
        for(int j=1;b[j]!='\0';j++){
          if(b[j]==a[i+j]){
            fin++;}
          }
        if(fin-ini+1==len3){
          for(k=0;k<ini;k++){
            aux[k]=a[k];
            }
          for(int m=fin+1;a[m]!='\0';m++){
            aux[k++]=a[m];
            }
          aux[k]='\0';
          //printf("\nini %d   fin %d   len3 %d\n",ini,fin,len3);
          fin=0;
          break;
          }
        }
      }
    }
  //printf("\n%s\n",aux);
  return aux;
}
















/*

| exp_pow '(' exp_texto ',' exp_entera ')' ';'	{
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

*/














#endif
