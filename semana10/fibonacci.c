// Escreva uma funçao recursiva que receba um numero n da sequencia  de fibonacci
// e retorne o valor correspondente.
#include<stdio.h>

int fibonacci(int n){
  if(n==1 || n==2){
    return 1;
  }else{
    return fibonacci(n-1)+ fibonacci(n-2);
  }

}
int main(){
  int numero;
  printf("Insira o numero da sequencia de fibonacci" );
  scanf("%d",&numero );
  printf("Fibonacci(%d)=%d\n",numero,fibonacci(numero) );
  return 0;
}
