/*
Conta quantas vezes um caractere Aparece em uma string
*/
// #include <stdlib.h>
#include <stdio.h>
int contaCaractere(char string[],char ch){
  int i;
  int contChar=0;
  for(i=0;string[i]!='\0' ;i++){
      if(string[i]==ch){
        contChar++;
      }
  }
  return contChar;
}

int main(){
  char str[100];
  char ch;
  printf("Insira uma string:\n" );
  gets(str);
  printf("Insira um caractere:\n" );
  scanf("%c",&ch);
  printf("A string inserida e: \n" );
  puts(str);
  printf("O caractere inserido e: %c\n",ch );

  printf("O caractere inserido aparece %d vezes na string.\n",contaCaractere(str,ch) );
}
