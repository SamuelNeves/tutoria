#include <stdio.h>
//Funcao abaixo utiliza passagem de parametro por referencia
void potencia(int b,int e, int * resultado){
  if(e==1){
    // O "*" abaixo funciona para indicar que quero alterar e utilizar o conteudo da variavel resultado
    //como na declaraço a mesma aparece como um ponteiro caso eu tentasse utilizada sem  dereferenciar(nome deste processo
  //de acessar o conteudo da variavel ) eu estaria trabalhando diretamente com o endereço da variavel;
  //
    *resultado=(*resultado) * b;
  }else{
    *resultado=b*(*resultado);
    potencia(b,e-1,resultado);
  }
}
int main(){
  int R=1;
  potencia(3,4,&R);
  printf("%d\n",R );

  return 0;
}
