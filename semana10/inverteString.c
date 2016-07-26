#include <stdio.h>

void imprimeInverso(char string[], int pos){
  if(string[pos]=='\0'){
    printf("\n" );
  }else{
    imprimeInverso(string,pos+1);
    printf("%c",string[pos]);
  }

}

int main(){
  char string[50];
  printf("Insira uma string\n" );
  gets(string);
  imprimeInverso(string,0);
  return 0;
}
