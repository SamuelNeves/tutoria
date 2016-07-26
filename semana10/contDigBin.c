// Escreva uma  funçao recursiva  que calcule o numero de digitos binarios
// de um  numero n
#include <stdio.h>
int numDigitosBinarios(int n){
  if(n<2){
      return 1;
  }else{
    return 1+numDigitosBinarios(n/2);
  }


}

int main(){
  printf("%d\n",numDigitosBinarios(25));

  return 0;
}
