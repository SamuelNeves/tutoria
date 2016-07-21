#include <stdio.h>
void trocaValores(int * a, int * b){
  int aux;
  aux=*a;
  *a=*b;
  *b=aux;
printf("DENTRO DA FUNCAO:a: %d b: %d\n",*a,*b);
}

int  main(){
  int a=4;
  int b=65;
  printf("a: %d b: %d\n",a,b);
  trocaValores(&a,&b);
  printf("a: %d b: %d\n",a,b);

  return 0;
}
