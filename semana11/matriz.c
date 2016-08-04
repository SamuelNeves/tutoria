#include <stdio.h>
void preencheMatriz(int **matriz, int tama)

int main(){
  int tamanho;
  int linha, coluna;
  printf("Insira o tamanho:\n" );
  scanf("%d",&tamanho );
  //Alocação dinamica de vetores
  int *vetor;
  vetor=malloc(tamanho*sizeof(int));
  // Alocação dinamica de matrizes
  int **matriz;
  matriz=malloc(tamanho*sizeof(int*));
  int i;
  for(i=0;i<tamanho;i++){
    matriz[i]=malloc(tamanho*sizeof(int));
  }





  return 0;
}
