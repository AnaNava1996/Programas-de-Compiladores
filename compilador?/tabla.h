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


#endif
