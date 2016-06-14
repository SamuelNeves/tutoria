#include <stdio.h>

int main(){
  int num=1;
  int soma=0;
  while(num!=0){
    printf("Insira um numero ou digite 0 para sair:\n" );
    scanf("%d",&num);
    soma=soma+ num;
  }
  printf("A soma dos numeros inseridos e : %d .\n",soma);

  return 0;
}
