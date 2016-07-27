#include <stdio.h>


void leMatriz(int matriz[][3], int tam){
    int i,j;
    for(i=0;i<tam;i++){
      for(j=0;j<tam;j++){
        printf("Insira o elemento corresponde a posicao %d %d\n",i,j );
        scanf("%d", &matriz[i][j]);
      }
    }
}
void imprimeDiagonalInversa(int matriz[][3],int tam){
  int i,j;
  j=tam-1;
  for(i=0;i<tam && j>=0;i++){
    printf("%d ",matriz[i][j] );
    j--;
}
  printf("\n");
}
void imprimeMatriz(int matriz[][3], int tam){
  int i,j;
  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      printf("%d ",matriz[i][j] );
    }
    printf("\n" );
  }

}
int main(){
  int matriz[3][3];
  leMatriz(matriz,3);
  imprimeMatriz(matriz,3);
  imprimeDiagonalInversa(matriz,3);


}
