


#include <stdio.h>

int main(){
  int value1,value2;
  int * lnPtr;
  printf("Insira um valor para value1:\n" );
  scanf("%d",&value1);
  lnPtr=&value1;
  value2= *lnPtr;
  printf("value2: %d\n",value2);
  printf("Endereco de value1 %p \n",&value1 );
  printf("Endereco armazenado em lnPtr %p \n",lnPtr );


}
