#include <stdio.h>

void preencheMatrizes(char nomes[][15],float notas[][2],int nAlunos){
        int i,j;
        for(i=0; i<nAlunos; i++) {
                printf("Insira o nome do aluno %d: \n",i+1);
                // fflush(stdin);
                // getchar();
                gets(nomes[i]);
                for(j=0; j<2; j++) {
                        printf("Insira a nota %d\n",j+1 );
                        scanf("%f",&notas[i][j]);
                }
        }
}
void calcMedias(float notas[][2],float medias[],int nAlunos){
        int i,j;
        float soma;
        for(i=0; i<nAlunos; i++) {
                soma=0;
                for(j=0; j<2; j++) {
                        soma=soma+notas[i][j];
                }
                medias[i]=soma/2;
        }
}

void imprimeInformacoes(char nomes[][15], float notas[][2], float medias[], int nAlunos){
        int i;
        for(i=0; i<nAlunos; i++) {
                printf("Aluno %d\n",i+1 );
                printf("Nome: %s\n",nomes[i] );
                printf("Nota 1: %.2f\n",notas[i][0] );
                printf("Nota 2: %.2f\n",notas[i][1] );
                printf("Media: %.2f\n", medias[i]);

        }
}
int main(){
        char nomes[2][15];
        float notas[2][2];
        float medias[2];
        preencheMatrizes(nomes,notas,2);
        calcMedias(notas,medias,2);
        imprimeInformacoes(nomes,notas,medias,2);
        return 0;
}
