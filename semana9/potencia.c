#include <stdio.h>

void potencia(int base, int expoente, long int * resultado){
    if(expoente==0){
      *resultado=*resultado *1;
      printf("(%d,%d)=%ld\n",base,expoente,*resultado);
    }else{
      potencia(base,expoente-1,resultado);
      *resultado=*resultado *base;
      printf("(%d,%d)=%ld\n",base,expoente,*resultado);

    }
}
int main(){
  long int result=1;
  int expo=8;
  int base=2;
  potencia(3, 10, &result);
  result=1;
  potencia(5, 10, &result);
  result=1;
  potencia(7, 10, &result);
  result=1;
  potencia(9, 10, &result);
  // printf(" O resultado e :%d\n",result );


  return 0;
}
