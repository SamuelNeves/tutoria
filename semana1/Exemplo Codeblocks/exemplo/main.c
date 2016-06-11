#include <stdio.h>
#include <stdlib.h>



int main() {
	char opcao;
	int a = 2, b = 34;
	do {

		printf("Insira a opçao correspondente\n");
		printf("+-Soma\n");
		printf("--Subtracao\n");
		printf("*-Multiplicacao\n");
		printf("0-Sair\n");
		scanf("%c", &opcao);
		printf("%c", opcao );
		switch (opcao) {
		case '+':
			printf("%c", opcao );

			printf("a soma e %d", a + b );
			break;
		case '-':
			printf("a subtracao e %d", a - b );
			break;
		case '*':
			printf("a multi e %d", a * b );
			break;
		case '0':
			printf("Sair do programa");
			break;
		default:
			printf("Opcao Invalida");

		}

	} while (opcao != '0');


	return 0;
}
