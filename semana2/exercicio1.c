#include<stdio.h>



int main(){
  int a,b;
  printf("Insira o primeiro numero:\n" );
  scanf("%d",&a);
  printf("Insira o segundo numero:\n" );
  scanf("%d",&b);

  if(a<b){
    printf("%d , %d\n",b,a );
  }else{
    printf("%d , %d \n",a,b );
  }

  return 0;
}
