#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int *vet,int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("Insira um numero para a posicao %d  do vetor:\n",i  );
    scanf("%d",&vet[i]);
  }

}
void imprimeVetor(int * vetor, int tam){
  int i;
  for(i=0;i<tam;i++){
    printf(" %d  ",vetor[i] );
  }
  printf("\n" );
}

void eh_multiplo(int a, int b, int *resp){
  if(a%b==0){
    *resp=1;
  }else{
    *resp=0;
  }

}
int main(){
    int x,y;
    int *vet;
    int i;
    int resp;
    printf("Insira x: \n" );
    scanf("%d",&x);
    printf("Insira y:\n" );
    scanf("%d",&y);
    vet=(int *) malloc(y*sizeof(int));
    preencheVetor(vet,y);
    imprimeVetor(vet,y);
    for(i=0;i<y;i++){
        eh_multiplo(vet[i],x,&resp);
        if(resp==1){
          printf("O numero %d e divisivel por %d.\n",vet[i],x );
        }
    }
    free(vet);
    return 0;
}
