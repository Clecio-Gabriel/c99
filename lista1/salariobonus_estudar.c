#include <stdio.h>

int main(){

    char nome[100];
    double salariobase, vendas, salario;

    //ENTRADA
    scanf("%s\n%lf\n%lf",&nome,&salariobase,&vendas);
    salario = salariobase + (vendas*0.15);

    //SAIDA
    printf("TOTAL = R$ %.2lf\n",salario);

    return 0;
}