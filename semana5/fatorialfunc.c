#include  <stdio.h>

int calcFatorial( int n){
  int  fatorial=1;
  int cont;
  for(cont=1;cont<=n;cont++){
    fatorial=fatorial*cont;
  }
  return fatorial;
}

int main(){
  int numero;
  int f;
  printf("Insira um numero\n" );
  scanf("%d",&numero );

  // f=calcFatorial(numero);
  printf("O fatorial e: %d\n",calcFatorial(numero) );

  return 0;
}
