/*2. Faça um programa que leia um vetor de 20 inteiros positivos (permita apenas que
valores corretos sejam digitados, pedindo para o usuário repetir cada número ne-
gativo até que ele digite um positivo) e imprima todos os valores abaixo da média
desses valores.
*/
#include <stdio.h>

void leVetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
      do{
        printf("Insira a posicao %d do vetor:\n",i );
        scanf("%d",&vetor[i]);
      }while(vetor[i]<0);
  }
}

double mediaVetor(int vetor[],int tamanho){
  int i;
  double soma=0;
  for(i=0;i<tamanho;i++){
    soma+=vetor[i];
  }
  return soma/tamanho;
}

void imprimeAbaixoMedia(int vetor[],int tamanho, double media){
  int i;
  for(i=0;i<tamanho;i++){
    if(vetor[i]<media){
      printf("%d ",vetor[i]);
    }
  }
  printf("\n" );

}
int main(){
  int  numeros[20];
  double media;
  leVetor(numeros,20);
  media=mediaVetor(numeros,20);
  imprimeAbaixoMedia(numeros,20,media);
  return 0;
}
