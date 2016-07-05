#include <stdio.h>
/*
  Criar função que retorna o fatorial de um numero.
*/
int fatorial(int numero){
  int resultado=1;
  int i;
  for(i=numero;i>=1;i--){
    resultado=resultado*i;
   }
   return resultado;

}

int main(){
  int num;
  printf("Insira o numero do  qual deseja saber o fatorial:" );
  scanf("%d",&num);
  printf("O fatorial de %d e %d\n",num,fatorial(num) );
  return 0;
}
