#include <stdio.h>

int main(){
  int n;
  int cont;
  // int multiplicacao;
  printf("Insira um numero inteiro:\n" );
  scanf("%d",&n );
  for(cont=1;cont<=n;cont++){
    //multiplicacao=cont*n;
    // printf("%d * %d = %d\n",cont,n, multiplicacao );
    printf("%d * %d = %d\n",cont,n, cont*n );
  }
  return 0;
}
