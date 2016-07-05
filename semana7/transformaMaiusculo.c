
/*
18. Escreva um procedimento de assinatura void strupr(char str[]); que altere todas
as letras para letras maiúsculas. Escreva a função principal para testar seu pro-
grama.
*/

#include <stdio.h>


void strupr(char string[]){
  int i;
  for(i=0;string[i]!='\0';i++){
    if(string[i]>=97 &&string[i]<=122){
      string[i]=string[i]-32;
    }
  }
  }
int main(){
  char str[100];
  printf("Insira uma string:\n" );
  gets(str);
  printf("A string inserida e: \n" );
  puts(str);

  strupr(str);

  printf("A string maiuscula e: \n" );
  puts(str);

}
