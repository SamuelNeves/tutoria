#include <stdio.h>
void leVetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("Insira a posicao %d do vetor:\n",i );
        scanf("%d",&vetor[i]);
  }
}

int procuraValor(int vetor[],int tam, int valor, int posicao){
  if(posicao==tam){
    return -1;
  }else{
    if(vetor[posicao]==valor){
      return posicao;
    }else{
      return procuraValor(vetor,tam,valor,posicao+1);
    }
  }
}
int main()
{
  int vetor[5];
  int tam=5;
  int valor;
  leVetor(vetor,tam);
  printf("Insira o valor que deseja procurar:\n" );
  scanf("%d",&valor);
  printf("O valor encontra-se no indice %d\n",procuraValor(vetor,tam,valor,0) );
  }
