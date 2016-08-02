#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencheMatriz(int matriz[3][4]){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      matriz[i][j]=rand()%100;
    }
  }
}

void imprimeMatriz(int matriz[3][4]){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("%d ",matriz[i][j]);
    }
    printf("\n" );
  }
}

int somaDosElementos(int matriz[3][4]){
  int i,j,soma=0;
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        soma=soma+matriz[i][j];
    }
  }
  return soma;
}

int main(){
  srand (time(NULL));
  int matriz[3][4];
  preencheMatriz(matriz);
  imprimeMatriz(matriz);
  printf("A soma dos elementos e : %d\n",somaDosElementos(matriz));
  return 0;
}
