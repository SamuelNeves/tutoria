#include <stdio.h>
int fibonacci(int n){
        if(n==1 || n==2) {
                return 1;
        }else{
                return fibonacci(n-1)+ fibonacci(n-2);
        }
}

int main(){
        int n;
        printf("Insira um numero:\n" );
        scanf("%d",&n );
        printf("O %d numero do da sequencia de fibonacci e %d. \n",n,fibonacci(n));
        return 0;

}
