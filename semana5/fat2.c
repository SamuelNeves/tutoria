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
  int cont;
  float soma=0;
  for(cont=1;cont<=7;cont++){
    soma=soma+(calcFatorial(cont))/(cont);
  }
  printf("O resultado do somatorio e %f\n",soma );
  return 0;
}
