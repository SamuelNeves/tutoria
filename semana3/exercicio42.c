  #include <stdio.h>

  int main(){
    int n;
    int cont;
    int maior=0;
    printf("Conteudo da variavel maior: %d\n",maior );
    for(cont=0;cont<10;cont++){
        printf("Insira um numero:\n");
        scanf("%d",&n);
        if(n>maior){
          maior=n;
        }
    }
    printf("O maior valor digitado e %d\n",maior );
    return 0;
  }
