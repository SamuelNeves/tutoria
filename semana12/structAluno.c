/*Faça um programa que permita ao usuário cadastrar os dados de um aluno. Os dados deverão
   ser armazenados em uma variável do tipo Aluno. Para isso você deverá criar um registro
   chamado Aluno que conterá os seguintes dados: nome, curso, idade, data de nascimento
   (estrutura criada no exercício anterior), notas (armazenadas em um vetor de double contendo
   3 elementos). Depois de realizado o cadastro, os dados do estudante deverão ser exibidos de
   maneira organizada na tela. Antes de exibir os dados do aluno cadastrado, calcule o
   coeficiente dele fazendo uma média ponderada das notas de cada uma das provas, sendo o
   peso delas: 2 para a primeira prova, 3 para a segunda prova e 4 para a terceira prova.
 */
#include <stdio.h>
#include <stdlib.h>
struct data {
        int ano;
        int mes;
        int dia;


};
struct aluno {
        char nome[50];
        char curso[50];
        int idade;
        struct data nascimento;
        double notas[3];
};
int main(){
        struct aluno A;
        double media;

        printf("Insira o nome do aluno\n" );
        scanf("%s",&A.nome);
        printf("Insira o curso do aluno\n" );
        scanf("%s",&A.curso );
        printf("Insira a idade do aluno:\n" );
        scanf("%d",&A.idade );
        printf("Insira a data de nascimento na ordem dia, mes e ano:\n" );
        scanf("%d",&A.nascimento.dia);
        scanf("%d",&A.nascimento.mes);
        scanf("%d",&A.nascimento.ano);
        printf("Insira a nota 1,2,3 do aluno:\n" );
        scanf("%lf", &A.notas[0]);
        scanf("%lf", &A.notas[1]);
        scanf("%lf", &A.notas[2]);

        printf("Aluno: %s\n",A.nome );
        printf("Curso: %s\n",A.curso );
        printf("Idade: %d\n",A.idade);
        printf("Nascimento: %d/%d/%d\n",A.nascimento.dia,A.nascimento.mes,A.nascimento.ano);
        printf("Nota 1: %lf\n",A.notas[0] );
        printf("Nota 2: %lf\n",A.notas[1] );
        printf("Nota 3: %lf\n",A.notas[2] );
        media=(2*A.notas[0]+3*A.notas[1]+ 4*A.notas[2])/(2+3+4);
        printf("O coefiente do aluno e: %.2lf\n",media );
        return 0;
}
