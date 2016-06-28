#include <stdio.h>

void preenche(int vetor[], int tam){
  int i;
  for (i=0;i<tam;i++){
    printf("Insira um valor:\n" );
    scanf("%d",&vetor[i]);
  }
}

void imprimeVetor(int vetor[],int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",vetor[i] );
  }
  printf("\n" );
}

void  ordenaVetor(int vetor[], int tam){
  int i, j,aux;
  for(i=0;i<tam;i++){
    for(j=i+1;j<tam;j++){
      if(vetor[j]>vetor[i]){
        aux=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
      }
    }
      imprimeVetor(vetor,tam);
  }
}
int main(){
  int vetor[5];
  int tamanho=5;
  preenche(vetor, tamanho);
  imprimeVetor(vetor,tamanho);
  ordenaVetor(vetor,tamanho);
  imprimeVetor(vetor,tamanho);
  return 0;
}
