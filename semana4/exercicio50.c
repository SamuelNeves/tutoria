#include <stdio.h>


int main(){
  int dado1;
  int dado2;
  int dado3;
  int dado4;
  int numPossibilidades=0;
  for(dado1=1;dado1<=6;dado1++){
    for(dado2=1;dado2<=6;dado2++){
      for(dado3=1;dado3<=6;dado3++){
        for(dado4=1;dado4<=6;dado4++){
              numPossibilidades=numPossibilidades+1;
              printf("%d %d %d %d\n",dado1,dado2,dado3,dado4 );

      }
    }
  }
}
printf("Numero de possibilidades %d\n",numPossibilidades );
return 0;
}
