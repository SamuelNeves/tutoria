#include <stdio.h>

int main(){
  float Y;
  float X;
  int cont;
  printf("Insira o numero do qual deseja saber a raiz quadrada: \n" );
  scanf("%f",&Y);
  X=Y/2;
  for(cont=0;cont<24;cont++){
    X=(X*X +Y)/(2*X);
  }
  printf("A raiz quadrada e %f\n",X );
  return 0;
}
