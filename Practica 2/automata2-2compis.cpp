#include <iostream>//   programa que encuentra los posibles caminos
#include <string.h>//   para un automata con epsilon
#include <stdio.h>
#include <map>
#include <vector>
#include <thread>
using namespace std;

class Estado{
public:
  char q;
  std::map<char,std::vector<char> >deltas;
  void nq(char);
  Estado();
  char getQ();
  std::vector<char> getNextQ(char);
  void AgregarCamino(char,char);
};

Estado::Estado(){}

void Estado::nq(char newq){//le asigno el nombre de estado al objeto
  q=newq;}

char Estado::getQ(){//obtengo imprimo el estado
  return q;
}

void Estado::AgregarCamino(char entrada,char nuevoEstado){
  deltas[entrada].push_back(nuevoEstado);
}

std::vector<char> Estado::getNextQ(char entrada){//get el vector de los caminos para el caracer/entrada/la llave
  if(deltas.count(entrada)==1) {
    return deltas.find(entrada)->second;}
  else{
      std::vector<char> plip;
    return plip;
  }}

Estado cambioEstado(Estado estadoActual,Estado *estados,int i,char vic){
  Estado nuevoEstado;
  for(int j=0;j<i;j++){
    if(estados[j].getQ()==vic){
      nuevoEstado=estados[j];
      break;}
  }
  return nuevoEstado;}

//                                                 0    la cadena #estados
int explorar(Estado estadoActual,Estado *estados,int it,char * cad,int i,char * F,std::string loQueSeImprime){
  std::vector<char> v = estadoActual.getNextQ(cad[it]);//v copia el vector para los posibles caminos del estado actual con esa entrada
  std::vector<char> victor = estadoActual.getNextQ('E');//victor copia el vector para los posibles caminos de epsilon
  loQueSeImprime.push_back(estadoActual.getQ());//lo que se ha recorrido hasta ahora
  //loQueNoSeImprime.push_back(estadoActual.getQ());//buscaloops
  int vsz = v.size();
  int tamvic=victor.size();
  if(vsz==0 && tamvic==0) {
    //std::cout << loQueSeImprime <<"    no sirve"<<'\n';
    return 0;}
  else {
    for(int k=0;k<tamvic;k++){//con esto itero en el vector para epsilon
      if(it == strlen(cad)-1 && (victor[k]==F[0] ||victor[k]==F[2]||victor[k]==F[4])) {
        loQueSeImprime.push_back(victor[k]);
        std::cout << loQueSeImprime <<"    sirve"<<'\n';
        return 1;
      }
      else{
      //std::cout << loQueSeImprime <<"    probandoo"<<'\n';
      int o = explorar(cambioEstado(estadoActual,estados,i,victor[k]),estados,it,cad,i,F,loQueSeImprime);
      if(o == 0) { continue; }}
    }
    for(int k=0;k<vsz;k++){
      if((it == strlen(cad)-1 && v[k]==F[0]) ||(it == strlen(cad)-1 && v[k]==F[2])||(it == strlen(cad)-1 && v[k]==F[4])) {//se itera en el vector y se comprueba que coincida con el FIN
        loQueSeImprime.push_back(v[k]);
        std::cout << loQueSeImprime <<"    sirve"<<'\n';
        return 1;}
      int o = explorar(cambioEstado(estadoActual,estados,i,v[k]),estados,it+1,cad,i,F,loQueSeImprime);
      if(o == 0) { continue; }
    }
  }
}

int main(){
  char Q[40];//estados
  char E[20];//alfabeto
  char S[3];//estado inicial
  char F[7];//estado final
  char d[7];//funcion de transicion
  Estado estadoActual;
  int ini;
  char cad[30]="cbbb";
  Estado estados[20];
  int i=0;
  char *nodo;

  FILE *archi;
  archi=fopen("Thompson2.txt","r");

  fgets(Q, 40, (FILE*)archi);//leo primera linea
  nodo = strtok (Q,",\n");//ignoro comas
  while (nodo != NULL){
    estados[i].nq(nodo[0]);//le asigno un nombre a los estados
    nodo = strtok (NULL, ",\n");
    i++;}

  fgets(E, 20, (FILE*)archi);
  fgets(S, 3, (FILE*)archi);
  fgets(F, 7, (FILE*)archi);

  while (fgets(d, 7, (FILE*)archi)!=NULL){
    for(int j=0;j<=i;j++){
      if(estados[j].getQ()==d[0]){
        estados[j].AgregarCamino(d[2],d[4]);}}}

  fclose(archi);

//en cual estado inicio
  for(int j=0;j<=i;j++){
    if(estados[j].getQ()==S[0]){
      ini=j;
      break;}}
  estadoActual=estados[ini];

  explorar(estadoActual,estados,0,cad,i,F,"");
}



//  printf(",%c,    ,%c\n", estados[0].getQ(),estados[0].deltas.find('a')->second[0]);
//  printf(",%c,    ,%c\n", estados[0].getQ(),estados[0].deltas.find('a')->second[1]);
//printf("%d",estados[0].getNextQ('a').size());
