


#include <stdio.h>
#include <stdlib.h>
void imprimeMatriz(int **matriz, int tamanho){
  int i,j;
  for(i=0;i<tamanho;i++){

    for(j=0;j<tamanho;j++){
        printf("%d ",matriz[i][j] );

    }
    printf("\n");
  }
}
void calculaMultMatriz(int **A,int **B,int tamanho){
  int **Resultado;
  int i,j,k,soma;
  Resultado=(int **)malloc(tamanho*sizeof(int *));
  for(i=0;i<tamanho;i++){
      Resultado[i]=(int *)malloc(tamanho*sizeof(int));
  }
  for(i=0;i<tamanho;i++){
    for(j=0;j<tamanho;j++){
      soma=0;
      for(k=0;k<tamanho;k++){
        soma=soma+(A[i][k]* B[k][j]);
      }
      Resultado[i][j]=soma;
    }
  }
  printf("Resultado\n" );
  imprimeMatriz(Resultado,tamanho );
  for(i=0;i<tamanho;i++){
    free(Resultado[i]);
  }
  free(Resultado);
}
void preenche(int **matriz, int tamanho){
  int i,j;
  for(i=0;i<tamanho;i++){
    for(j=0;j<tamanho;j++){
      printf("Insira a posicao %d %d :\n",i,j );
      scanf("%d",&matriz[i][j]);
    }
  }
}



int main(){
  int **A;
  int **B;
  int n;
  printf("Insira o tamanho da matriz\n" );
  scanf("%d",&n );
  int i;
  A=(int **)malloc(n*sizeof(int *));
  B=(int **)malloc(n*sizeof(int *));
  for(i=0;i<n;i++){
      A[i]=(int *)malloc(n*sizeof(int));
      B[i]=(int *)malloc(n*sizeof(int));
  }
  printf("Matriz 1: \n" );
  preenche(A,n);
  printf("Matriz 2:\n");
  preenche(B,n);
  printf("Matriz 1: \n" );
  imprimeMatriz(A,n);
  printf("Matriz 2: \n" );
  imprimeMatriz(B,n);
  calculaMultMatriz(A,B,n);
  for(i=0;i<n;i++){
    free(A[i]);
    free(B[i]);
  }
  free(A);
  free(B);
  return 0;
}
