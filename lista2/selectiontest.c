#include <stdio.h>
//TESTEI O SWITCH-CASE, APESAR DO IF SER MAIS EFICIENTE NESSE CASO
int main(){

    int A,B,C,D;

    //ENTRADA
    scanf("%i %i %i %i",&A,&B,&C,&D);

    int escolha = ((B>C)&&(D>A)&&((C+D)>(A+B))&&((C>=0)&&(D>=0))&&(A%2==0));

    //SAIDA
    switch(escolha){
        case 1:
        printf("Valores aceitos\n");
        break;
        case 0:
        printf("Valores nao aceitos\n");
        break;
    }

    return 0;
}