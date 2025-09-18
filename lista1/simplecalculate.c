#include <stdio.h>

int main(){

    int cod1, cod2, quantia1, quantia2;
    double price1, price2, valortotal;

    //ENTRADA
    scanf("%i %i %lf\n%i %i %lf",&cod1,&quantia1,&price1,&cod2,&quantia2,&price2);
    valortotal = (quantia1*price1)+(quantia2*price2);

    //SAIDA
    printf("VALOR A PAGAR: R$ %.2lf\n",valortotal);
    
    return 0;
}