#include <stdio.h>
#include <stdlib.h>

void preencheAlunos(char **nomes, float **notas, int tamanho){
  int i;
  for(i=0;i<tamanho;i++){
    printf("Aluno %d\n",i+1 );
    printf("Insira o nome do aluno\n" );
    //fflush(stdin);
    getchar();
    gets(nomes[i]);
    printf("Insira a nota 1: \n" );
    scanf("%f",&notas[i][0]);
    printf("Insira a nota 2: \n" );
    scanf("%f",&notas[i][1]);
    printf("\n" );
  }
}
void calculaMedias(float ** notas, float *medias,int n ){
  int i;
  for(i=0;i<n;i++){
      medias[i]=(notas[i][0]+notas[i][1])/2;
  }
}

void imprimeAlunos(char **nomes, float **notas,float * medias, int n){
  int i;
  for(i=0;i<n;i++){
    printf("Aluno %d\n",i+1 );
    printf("Nome:  %s\n",nomes[i] );
    printf("Nota 1: %.2f\n",notas[i][0] );
    printf("Nota 2: %.2f\n",notas[i][1] );
    printf("Media: %.2f \n",medias[i] );
    printf("\n" );
  }
}
int main(){
  int n;
  int i;
  float *medias;
  char **nomes;
  float **notas;

  printf("Insira o numero de alunos:\n" );
  scanf("%d",&n);
  medias=(float *)malloc(n*sizeof(float));
  nomes=(char **)malloc(n*sizeof(char*));
  notas=(float **) malloc(n*sizeof(float *));
  for(i=0;i<n;i++){
    nomes[i]=(char *)malloc(15*sizeof(char));
    notas[i]=(float *) malloc(2*sizeof(float));
  }
  preencheAlunos(nomes,notas,n);
  calculaMedias(notas,medias,n);
  imprimeAlunos(nomes,notas,medias,n);




  free(medias);
  for(i=0;i<n;i++){
    free(nomes[i]);
    free(notas[i]);
  }
  free(nomes);
  free(notas);
  return 0;
}
