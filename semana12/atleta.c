#include <stdio.h>


typedef struct atleta {
        char nome[50];
        char esporte[50];
        int idade;
        float altura;
} Atleta;

int main(){
        Atleta vet[5];
        int i;
        //assumo que o atleta mais alto e o atleta mais velho é o da posição zero
        int maisAlto=0,maisVelho=0;
        //Preenchendo structs
        for(i=0; i<5; i++) {
                printf("Insira o nome do atleta %d\n",i+1 );
                scanf("%s",&vet[i].nome );
                printf("Insira o esporte \n" );
                scanf("%s",&vet[i].esporte );
                printf("Insira a idade: \n" );
                scanf("%d",&vet[i].idade );
                printf("Insira a altura\n" );
                scanf("%f",&vet[i].altura );
        }

        //imprimindo structs
        for(i=1; i<5; i++) {
                if(vet[i].idade>vet[maisVelho].idade) {
                        maisVelho=i;
                }
                if(vet[i].altura>vet[maisAlto].altura) {
                        maisAlto=i;
                }
        }
        printf("Atleta mais velho\n" );
        printf("Nome: %s\n",vet[maisVelho].nome );
        printf("Esporte: %s\n",vet[maisVelho].esporte );
        printf("Idade: %d \n",vet[maisVelho].idade );
        printf("Altura: %f\n",vet[maisVelho].altura );

        printf("Atleta mais alto\n" );
        printf("Nome: %s\n",vet[maisAlto].nome );
        printf("Esporte: %s\n",vet[maisAlto].esporte );
        printf("Idade: %d \n",vet[maisAlto].idade );
        printf("Altura: %f\n",vet[maisAlto].altura );

        return 0;
}
