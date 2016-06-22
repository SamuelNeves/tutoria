#include <stdio.h>

int contaPares(int vetor[], int tam){
  int numPares=0;
  int i;
  vetor[0]=99999;
  for(i=0;i<tam;i++){
    if(vetor[i]%2==0){
      numPares++;
    }
  }
  return numPares;
}

int main(){
  int vetor[20];
  int i;
  int nPares;
  for(i=0;i<20;i++){
    printf("Insira um numero\n");
    scanf("%d",&vetor[i]);
  }

  for(i=0;i<20;i++){
    printf("%d\n",vetor[i] );
  }
  nPares=contaPares(vetor,20);
  printf("O numero de valores pares e : %d", nPares);
  printf("O numero  de valores impares e : %d\n", 20-nPares );
  return 0;
}
