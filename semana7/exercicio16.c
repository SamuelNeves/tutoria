/*
 16. Escreva uma função de assinatura int strchr(char string[], char ch); que procure
a primeira ocorrência do caractere ch em string. A função retorna um número inteiro
indicando o índice do caractere, se for encontrado, ou −1, caso contrário.
*/
// #include <stdlib.h>
#include <stdio.h>
int strchr(char string[],char ch){
  int i;
  for(i=0;string[i]!='\0' ;i++){
      if(string[i]==ch){
        return i;
      }
  }
  return -1;
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


  printf("O caractere informado encontra-se na posicao: %d. \n",strchr(str,ch) );
}
