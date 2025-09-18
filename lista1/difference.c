#include <stdio.h>

int main(){

    int A, B, C, D, DIF;

    //ENTRADA
    scanf("%i\n%i\n%i\n%i",&A,&B,&C,&D);
    DIF = (A*B)-(C*D);
    
    //SAÍDA
    printf("DIFERENCA = %i\n",DIF);

    return 0;
}