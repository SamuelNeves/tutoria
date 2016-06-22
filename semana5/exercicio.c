/*11. Um professor, muito legal, fez 3 provas durante um semestre mas só vai
levar em conta as duas notas mais altas para calcular a média.
Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média
 com essas 3 provas, a média com as 2 notas mais altas, bem como sua nota mais
 alta e sua nota mais baixa.
*/
#include <stdio.h>

float media3Provas(float nota1,float nota2, float nota3){
    float soma;
    soma=nota1+nota2+nota3;
    return soma/3;

}
float media2MaioresNotas(float nota1,float nota2, float nota3){
  float soma;
  if(nota1>nota3 && nota2>nota3){
      soma=nota1 + nota2;
  }else if((nota1>nota2 && nota3>nota2)){
    soma=nota1 + nota3;
  }else{
    soma=nota2 + nota3;
  }
  return soma/2;
}

int main(){
  float n1,n2,n3;
  printf("Insira a primeira Nota:\n" );
  scanf("%f",&n1);
  printf("Insira a segunda Nota:\n" );
  scanf("%f",&n2);
  printf("Insira a terceira Nota:\n" );
  scanf("%f",&n3);
  printf("A media das 3 provas e : %f\n",media3Provas(n1,n2,n3) );
  printf("A media das 2 maiores notas: %f \n",media2MaioresNotas(n1,n2,n3) );
  return 0;
}
