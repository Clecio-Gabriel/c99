#include <stdio.h>

int main(){

    int code,horas;
    double valorhora, salario;

    //ENTRADA
    scanf("%i\n%i\n%lf",&code,&horas,&valorhora);
    salario = horas*valorhora;

    //SAIDA
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n",code,salario);

    return 0;
}