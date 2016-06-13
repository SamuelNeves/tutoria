#include <stdio.h>

int main(){
  char controle;
  int idade;
  float peso;
  float somaPesos=0;
do{
  printf("Insira sua idade:\n" );
  scanf("%d",&idade);
  if(idade>30){
    printf("Insira o peso:\n" );
    scanf("%f",&peso);
    somaPesos+=peso;
  }
  printf("Digite s para continuar e n para sair:\n");
  getchar();
  // fflush(stdin);
  scanf("%c",&controle);
}while(controle=='s');
printf("A soma dos pesos e: %.2f Kg\n",somaPesos);
  return 0;
}
