#include <stdio.h>

int main (){

    int A, B, checkmultiplo;

    //ENTRADA
    scanf("%i %i",&A,&B);
    checkmultiplo = ((A%B)==0)||((B%A)==0);

    //SAIDA
    if (checkmultiplo){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}