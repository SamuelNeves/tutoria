#include <stdio.h>

int main(){
  char operacao;
  int num1,num2,resultado;
  printf("Escolha uma opcao: \n");
  printf("- Subtracao \n" );
  printf( "+ Soma \n");
  printf("$ Sair\n");
  scanf("%c",&operacao);
  switch (operacao) {
    case '-':
        printf("Insira um numero:\n" );
        scanf("%d",&num1);
        printf("Insira outro numero:\n" );
        scanf("%d",&num2);
        resultado=num1-num2;
        printf("O resultado e : %d \n",resultado );
        break;
    case '+':
        printf("Insira um numero:\n" );
        scanf("%d",&num1);
        printf("Insira outro numero:\n" );
        scanf("%d",&num2);
        resultado=num1+num2;
        printf("O resultado e : %d \n",resultado );
        break;
    case '$':
      break;
    default:
      printf("Caracter Invalido!\n" );
  }
  return 0;
}
