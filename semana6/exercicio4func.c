#include <stdio.h>

void preencheVetor(int vetor[],int tamanho){
  int i;
  for(i=0;i<tamanho;i++){
    printf("Insira um valor:\n" );
    scanf("%d",&vetor[i]);
  }
}

void multiplicaVetores(int v1[],int v2[],int v3[], int tam){
  int i;
  for(i=0;i<tam;i++){
    v3[i]=v1[i]*v2[i];

  }
}

void imprimeVetor(int v[],int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",v[i]);
  }
  printf("\n" );
}

int main(){
  int vetor1[10];
  int vetor2[10];
  int vetor3[10];
  printf("Vetor 1:\n" );
  preencheVetor(vetor1,10);
  printf("Vetor 2:\n" );
  preencheVetor(vetor2,10);
  multiplicaVetores(vetor1,vetor2,vetor3,10);
  imprimeVetor(vetor3,10);
  return 0;
}
