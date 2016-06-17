#include <stdio.h>

char Conceito( float mediaFinal){
  char conceito;
  if(mediaFinal<50){
    conceito='D';
  }else if(mediaFinal>=50 && mediaFinal<70){
    conceito='C';
  }else if(mediaFinal>=70 && mediaFinal<90){
    conceito='B';
  }else if(mediaFinal>=90 && mediaFinal<=100){
    conceito='A';
  }
  return conceito;
}

char conceito2( float mediaFinal){
  if(mediaFinal<50){
    return 'D';
  }else if(mediaFinal>=50 && mediaFinal<70){
    return 'C';
  }else if(mediaFinal>=70 && mediaFinal<90){
    return'B';
  }else if(mediaFinal>=90 && mediaFinal<=100){
    return 'A';
  }
  printf("(DASDASDSADASDASDASD)\n" );
}
int main(){
  float media;
  printf("Insira a media final:\n" );
  scanf("%f",&media);
  printf("Conceito: %c .\n",conceito2(media) );
  printf("Conceito: %c .\n",Conceito(media) );
  return 0;
}
