#include <stdio.h>
int main(){
  int n, cont=1;
  int multiplicacao;
  printf("Insira um numero inteiro:\n" );
  scanf("%d",&n );
  while(cont<=n){
      multiplicacao=cont*n;
      printf("%d * %d = %d \n",cont,n,multiplicacao);
      cont++;
  }
  return 0;
}
