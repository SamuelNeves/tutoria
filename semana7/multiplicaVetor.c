/*4. Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o
vetor resultante.
*/
#include <stdio.h>

void leVetor(int vetor[],int tam){
    int i;
    printf("Preenchendo vetor:\n" );
    for(i=0;i<tam;i++){
        printf("Insira um valor:\n" );
        scanf("%d",&vetor[i]);
    }
}

void imprimeVetor(int vetor[],int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n" );
}
void multiplicaVetores(int v1[],int v2[], int v3[],int tam){
    int i;
    for(i=0;i<tam;i++){
        v3[i]=v1[i]*v2[i];
    }
}
int main(){
    int v1[3];
    int v2[3];
    int v3[3];
    leVetor(v1,3);
    leVetor(v2,3);
    multiplicaVetores(v1,v2,v3,3);
    imprimeVetor(v3,3);

}
