/* Escreva um procedimento de assinatura void strupr(char str[]); que altere todas
as letras para letras maiúsculas. Escreva a função principal para testar seu pro-
grama.
*/

#include <stdio.h>

void strinv(char string[]){
  int tam;
  int i,j;
  int aux;
  for(i=0;string[i]!='\0';i++){
  }
  tam=i;

  for(i=0,j=tam-1;i<j;i++,j--){
    aux=string[j];
    string[j]=string[i];
    string[i]=aux;
  }


}

int main(){
  char str[100];
  printf("Insira uma string:\n" );
  gets(str);
  printf("A string inserida e: \n" );
  puts(str);

  strinv(str);
  printf("A string apos a inversao e: \n" );
  puts(str);
}
