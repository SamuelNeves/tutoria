#include <stdio.h>

int idadeEmDias(int anos, int meses,int dias){
  int idadeDias=0;
  idadeDias=idadeDias + (anos*360);
  idadeDias=idadeDias + (meses*30);
  idadeDias=idadeDias + dias;
  return idadeDias;
}


int main(){
    int idadeAnos;
    int idadeMeses;
    int idadeDias;
    printf("Insira sua idade em anos:\n" );
    scanf("%d",&idadeAnos );
    printf("Insira sua idade em meses:\n" );
    scanf("%d",&idadeMeses );
    printf("Insira sua idade em dias:\n" );
    scanf("%d",&idadeDias );
    printf("A idade em dias total e: %d.\n",idadeEmDias(idadeAnos,idadeMeses,idadeDias) );


  return 0;
}
