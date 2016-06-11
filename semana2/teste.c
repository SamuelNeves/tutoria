#include<stdio.h>

int main(){
	int idade;
	printf("Insira uma idade: \n" );
	scanf("%d",&idade);
	if(idade<=10 ){
		printf("Criança\n" );
	}else if(idade>10 && idade<=20){
		printf("Adolescente!\n" );
	}else{
		printf("Adulto\n" );
	}


	return 0;
}
