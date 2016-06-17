#include <stdio.h>

int teste=5;
int soma1ateN(int numero){
    int soma=0;
    int i;
    numero=1;
    printf("TEsste: %d dentro da funcao soma\n",teste );
    for(i=1;i<=numero;i++){
        soma=soma+i;
    }
    return soma;
}




int main(){
    printf("TEsste: %d dentro da funcao main\n",teste );

    int num;
    int soma;
    printf("Insira um numero:\n" );
    scanf("%d",&num );
    soma= soma1ateN(num);
    printf("O resultado da soma e: %d\n",soma );
    return 0;
}
