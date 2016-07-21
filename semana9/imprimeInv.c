t#include <stdio.h>
void imprimeInv(char string[], int posicao){
  if(string[posicao]=='\0'){
    printf("\n" );
  }else{
    imprimeInv(string,posicao+1);
    printf("%c",string[posicao] );

  }

}

int main(){
  char string[50];
  printf("Insira uma string\n" );
  gets(string);
  imprimeInv(string,0);
  return 0;
}
