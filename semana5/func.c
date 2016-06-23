#include <stdio.h>



float multiplica3valores(float x, float y, float z){
    //x=n1,y=n2,z=n3;
    printf("%d\n",teste );
    float resultado;
    resultado=x*y*z;
    return resultado;

}

int main(){
    float n1,n2,n3,R;
    printf("Insira 3 valores\n" );
    scanf("%f",&n1 );
    scanf("%f",&n2 );
    scanf("%f",&n3 );
     R=multiplica3valores(n1,n2,n3);
    // R=n1*n2*n3;
    printf("O resultado:  %f\n",R );
    return 0;
}
