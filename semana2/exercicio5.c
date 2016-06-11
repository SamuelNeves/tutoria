#include<stdio.h>
int main(){
  int n1,n2,n3;
  printf("Insira o primeiro numero:\n" );
  scanf("%d",&n1);
  printf("Insira o segundo numero:\n" );
  scanf("%d",&n2);
  printf("Insira o terceiro numero:\n" );
  scanf("%d",&n3);
  if(n1>n2 && n1>n3){
    printf("O maior numero e o %d!\n",n1 );
  }else if(n2>n1 && n2>n3){
    printf("O maior numero e o %d!\n",n2 );
  }else{
      printf("O maior numero e o %d!\n",n3 );
  }

  return 0;
}
