#include <stdio.h>

void imprimeVetor(int v[],int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",v[i]);
  }
  printf("\n" );
}

void preencheVetor(int vetor[],int tamanho){
  int i;
  for(i=0;i<tamanho;i++){
    printf("Insira um valor:\n" );
    scanf("%d",&vetor[i]);
  }
}

int  maiorValor(int vetor[], int tamanho){
  int maior=vetor[0];
  int i;
  for(i=0;i<tamanho;i++){
    if(vetor[i]>maior){
      maior=vetor[i];
    }
  }
return maior;
}
int main(){



  return 0;
}
