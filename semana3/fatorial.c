#include <stdio.h>
int main(){
  //int n,fatorial;
  int n;
  int fatorial=1;
  printf("Insira um inteiro positivo:\n" );
  scanf("%d",&n);
  while(n>1){
    fatorial=fatorial*n;
    n--;
    //ou n=n-1;
  }
  printf("O fatorial do numero inserido  e  %d\n",fatorial );
  return 0;
}
