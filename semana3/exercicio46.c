#include <stdio.h>

int main(){
  int tamanhoBase;
  int linha,cont;
  printf("Insira o tamanho da base do triangulo!\n" );
  scanf("%d",&tamanhoBase);

  for(linha=0;linha<tamanhoBase;linha++){
    for(cont=tamanhoBase;cont>linha;cont--){
      printf("* " );
    }
    printf("\n" );
  }

  return 0;
}
