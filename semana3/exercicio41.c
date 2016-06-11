#include <stdio.h>

int main(){
  int numCorredores;
  int i;//Contador
  float tempo;
  float maiorTempo=0;
  printf("Insira o numero maximo de corredores: \n" );
  scanf("%d",&numCorredores);
  for(i=1;i<=numCorredores;i++){
      printf("Insira o tempo do corredor %d :\n",i );
      scanf("%f",&tempo );
      if(tempo>maiorTempo){
          maiorTempo=tempo;
      }
  }
  printf("O maior tempo inserido foi %.2f\n",maiorTempo);
}
