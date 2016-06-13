#include <stdio.h>

int main(){
  int numero;
  int soma=0;
  int cont;
  int quantidade=0;
  for(numero=1;quantidade<4 ;numero++){
    soma=0;
    // printf("%d\n",numero );
    for(cont=1;cont<numero;cont++){
      if(numero%cont==0){
        soma=soma+cont;
      }
    }
    if(soma==numero){
      printf("%d\n",numero );
      quantidade++;
    }
}
  return 0;
}
