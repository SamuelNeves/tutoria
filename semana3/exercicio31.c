#include <stdio.h>

int main(){

  float soma=0;
  int quantidade=0;
  int numero;
  float media;
  
  do{
    printf("Insira um numero\n");
    scanf("%d",&numero );
    if(numero>0){
      soma=soma+numero;
      quantidade++;
    }

  }while(numero>0);
  printf("soma: %f\n",soma );
  printf("quantidade :%d \n",quantidade );
  media=soma/quantidade;
  printf("A media dos valores inseridos e %f \n",media);
}
