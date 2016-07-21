#include <stdio.h>
void preencheMatriz(int matriz[][3], int nLinhas,int nColunas){
        int i,j;
        for(i=0; i<nLinhas; i++) {
                for(j=0; j<nColunas; j++) {
                        printf("Insira um valor para a posicao %d, %d da matriz:\n",i,j );
                        scanf("%d",&matriz[i][j]);
                }
        }
}
void imprimeMatriz(int matriz[][3], int nLinhas,int nColunas){
        int i,j;
        for(i=0; i<nLinhas; i++) {
                for(j=0; j<nColunas; j++) {
                        printf(" %d",matriz[i][j]);
                }
                printf("\n" );
        }


}
int main(){
        int matriz[3][3];
        preencheMatriz(matriz,3,3);
        imprimeMatriz(matriz,3,3);

        return 0;
}
