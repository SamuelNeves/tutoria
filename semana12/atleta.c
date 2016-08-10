#include <stdio.h>


typedef struct atleta{
  char nome[50];
  char esporte[50];
  int idade;
  float altura;
} Atleta;

int main(){
  Atleta vet[5];
  int i;
  //Preenchendo structs
  for(i=0;i<5;i++){
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

  for(i=0;i<5;i++){
    printf("Aluno %d \n",i+1 );
    printf("Nome: %s\n",vet[i].nome );
    printf("Esporte: %s\n",vet[i].esporte );
    printf("Idade: %d \n",vet[i].idade );
    printf("Altura: %f\n",vet[i].altura );
  }



  return 0;
}
