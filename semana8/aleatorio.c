#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void iniciaVetorAleatorio(int vetor[],int tamanho,int limiteInicial,
    int limiteFinal){
      int i;
      for(i=0;i<tamanho;i++){
        vetor[i]= limiteInicial +(rand()%(limiteFinal-limiteInicial+1));
      }
 }
void imprimeVetor(int vetor[],int tamanho){
  int i;
  for(i=0;i<tamanho;i++){
    printf("%d ",vetor[i] );
  }
  printf("\n" );
}
int main(){
   srand( (unsigned)time(NULL) );
   int vetor[10];
   iniciaVetorAleatorio(vetor,10,10,20);
   imprimeVetor(vetor,10);
  return 0;
}
