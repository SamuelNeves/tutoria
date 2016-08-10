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
  int soma=0,i;
  printf("Insira o tamanho do vetor:\n" );
  scanf("%d",&n);
  vetor=(int *)malloc(n*sizeof(int));
  preencheVetor(vetor,n);
  imprimeVetor(vetor,n);
  for(i=0;i<n;i++){
    if(vetor[i]%2==0){
      soma=soma+vetor[i];
    }
  }
  free(vetor);
  return 0;
}
