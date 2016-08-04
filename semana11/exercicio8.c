/*Faça um programa que carregue uma matriz C (20x20) com valores aleatórios entre 0 e 10.
Imprimir a posição da linha cujos valores possuem a menor soma e a posição da coluna cujos
valores possuem a maior soma. */

#include<stdio.h>
#include<time.h>
void preencheMatriz(int matriz[20][20]){
  int i,j;
  for(i=0;i<20;i++){
    for(j=0;i<20;j++){
      matriz[i][j]=rand()%100;
    }
  }
}

void calculaSomaLinhas(int matriz[20][20], int somaLinha[]){
    int i,j;
    for(i=0;i<20;i++){
      somaLinha[i]=0;
    }
    for(i=0;i<20;i++){
      for(j=0;j<20;j++){
        somaLinha[i]=somaLinha[i]+ matriz[i][j];
      }
    }
}

void  calculaSomaColunas(int matriz[20][20], int somaColuna[]){
    int i,j;
    for(i=0;i<20;i++){
      somaColuna[i]=0;
    }
    for(i=0;i<20;i++){
      for(j=0;j<20;j++){
        somaColuna[j]=somaColuna[j]+ matriz[i][j];
      }
    }
}
int indiceMenorSomaLinha(int somaLinha[]){
  int i;
  int indiceMenor=0;
  for(i=1;i<20;i++){
    if(somaLinha[i]<somaLinha[indiceMenor]){
      indiceMenor=i;
    }
  }
  return indiceMenor;
}
int indiceMaiorSomaColuna(int somaLinha[]){
  int i;
  int indiceMaior=0;
  for(i=1;i<20;i++){
    if(somaLinha[i]>somaLinha[indiceMaior]){
      indiceMaior=i;    }
  }
  return indiceMaior;
}
int main(){
  srand(time(NULL));
  int C[20][20];
  int somaLinha[20];
  int somaColuna[20];
  calculaSomaColunas(C,somaColuna);
  calculaSomaLinhas(C,somaLinha);
  printf("O indice da linha que contem a menor soma e %d\n",indiceMenorSomaLinha(somaLinha));
  printf("O indice da coluna que contem a maior soma e %d\n",indiceMaiorSomaColuna(somaColuna) );
  return 0;
}
