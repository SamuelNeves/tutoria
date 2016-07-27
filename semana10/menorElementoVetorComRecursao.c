#include<stdio.h>

int menorValor(int vetor[],int tam, int pos){
    if(pos==tam-1){
      return vetor[pos];
    }else{
      if(vetor[pos]<menorValor(vetor,tam,pos+1)){
        return vetor[pos];
      }else{
        return menorValor(vetor,tam,pos+1);
      }
    }
}
int main(){
  int vet[10];
  int i;
  for(i=0;i<10;i++){
    printf("Insira um numero:\n");
    scanf("%d",&vet[i]);
  }
  for(i=0;i<10;i++){
    printf("%d ",vet[i]);
  }
  printf("O menor elemento deste vetor e: %d\n",menorValor(vet,10,0));

  return 0;
}
