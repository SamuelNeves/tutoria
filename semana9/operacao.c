/*Criar uma função que receba dois números e calcule uma operação com eles retor-
nando o resultado. A operação deve ser escolhida pelo usuário passando para função
e executando, retornando o valor. */
#include<stdio.h>
int operacao(int n1,int n2, char operacao){
  switch(operacao){
    case '+':
      return n1+n2;
      break;
    case '-':
      return n1-n2;
      break;
    case '/':
      return n1/n2;
      break;
    case '%':
      return n1%n2;
      break;
    case '*':
      return n1*n2;
      break;
    default:
      printf("Simbolo invalido!!\n" );
      return -1;
  }

}

int main(){
  int a,b;
  char op;
  printf("Insira o primeiro numero:\n" );
  scanf("%d",&a );
  printf("Insira o segundo numero:\n" );
  scanf("%d",&b );
  printf("Insira a operacao\n");
  fflush(stdin);//No windows
  getchar();//No linux
  scanf("%c",&op );
  printf("O resultado de %d %c %d = %d\n",a,op,b,operacao(a,b,op) );
  return 0;
}
