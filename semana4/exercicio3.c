#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int teste=128382;

int Dado(){
  int numero;
  numero=(rand()%6)+1;
  return numero;
}


int main(){
  srand( (unsigned)time(NULL));
  int vezesNumero1=0;
  int vezesNumero2=0;
  int vezesNumero3=0;
  int vezesNumero4=0;
  int vezesNumero5=0;
  int vezesNumero6=0;
  int cont;
  int num;
  for(cont=0;cont<1000000;cont++){
    num=Dado();
    printf("%d\n",num );
    switch(num){
      case 1:
        vezesNumero1++;
        break;
      case 2:
        vezesNumero2++;
        break;
      case 3:
        vezesNumero3++;
        break;
      case 4:
        vezesNumero4++;
        break;
      case 5:
        vezesNumero5++;
        break;
      case 6:
        vezesNumero6++;
        break;
    }
  }
  printf("Vezes numero 1 : %d\n",vezesNumero1 );
  printf("Vezes numero 2 : %d\n",vezesNumero2 );
  printf("Vezes numero 3 : %d\n",vezesNumero3 );
  printf("Vezes numero 4 : %d\n",vezesNumero4 );
  printf("Vezes numero 5 : %d\n",vezesNumero5 );
  printf("Vezes numero 6 : %d\n",vezesNumero6 );

    return 0;
}
