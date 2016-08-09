#include <stdio.h>
#include <stdlib.h>

void maximoMinimo(int *v, int N, int *maximo,int *minimo){
    int i;
    int maior=v[0];
    int menor=v[0];
    for(i=1;i<N;i++){
      if(v[i]>maior){
        maior=v[i];
      }
      if(v[i]<menor){
        menor=v[i];
      }
    }
    *maximo=maior;
    *minimo=menor;
}

void preencheVetor(int *vetor,int n){
  int i;
  for(i=0;i<n;i++){
    printf("Insira a posicao %d \n",i );
    scanf("%d",&vetor[i]);
  }
}
int main(){

  int maximo,minimo,tamanho;
  int *vetor;
  printf("Insira o tamanho do vetor\n" );
  scanf("%d",&tamanho );
  vetor=(int *)malloc(tamanho* sizeof(int));
  preencheVetor(vetor,tamanho);
  maximoMinimo(vetor,tamanho,&maximo,&minimo);
  printf("Maximo: %d \n",maximo );
  printf("Minimo: %d \n",minimo );


  free(vetor);
  return 0;
}
