#include <stdio.h>

void leVetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("Insira a posicao %d do vetor:\n",i );
        scanf("%d",&vetor[i]);
  }
}
void multiplicaVetores(int v1[], int v2[],int result[],int tamanho){
  int i;
  for(i=0;i<tamanho;i++){
    result[i]=v1[i]*v2[i];
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
  int v1[10];
  int v2[10];
  int resultado[10];
  printf("Vetor1:\n" );
  leVetor(v1,10);
  printf("Vetor2:\n" );
  leVetor(v2,10);
  multiplicaVetores(v1,v2,resultado,10);
  imprimeVetor(resultado,10);
  return 0;
}
