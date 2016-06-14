#include <stdio.h>

int main(){
  int quantidadePares=0;
  int quantidadeImpares=0;
  int quantidadeTotaldeNumeros=0;
  float mediaPares;
  float mediaGeral;
  float somaPares=0;
  float somaTotal=0;
  int num;
  do{
    printf("Insira um numero:\n" );
    scanf("%d",&num );
    if(num!=0){
      somaTotal=somaTotal+num;
      quantidadeTotaldeNumeros++;
      if(num % 2 ==0){
        quantidadePares++;
        //quantidadePares=quantidadePares+1;
        somaPares=somaPares +num;
      }else{
        quantidadeImpares++;
        //quantidadeImpares=quantidadeImpares+1;
      }
    }
  }while(num!=0);
  mediaPares=somaPares/quantidadePares;
  mediaGeral=somaTotal/quantidadeTotaldeNumeros;
  printf("Quantidade de Numeros Pares: %d .\n",quantidadePares );
  printf("Quantidade de Numeros Impares: %d .\n",quantidadeImpares );
  printf("Media dos numeros Pares: %f .", mediaPares);
  printf("Media Total: %f .\n",mediaGeral);
  return 0;
}
