#include<stdio.h>


void preencheVetor(int *vetor, int n){
  int i;
  for(i=0;i<n;i++){
    printf(" Insira o elemento %d\n",i );
    scanf("%d",&vetor[i] );
  }
}

void imprimeVetor(int *vetor,int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",vetor[i]);
}

}

int main(){
  int n;
  int *vetor;
  printf("Insira o tamanho do vetor:\n" );
  scanf("%d",&n);
  vetor=(int *)malloc(n*sizeof(int));
  preencheVetor(vetor,n);
  imprimeVetor(vetor,n);
  free(vetor);
  return 0;
}
