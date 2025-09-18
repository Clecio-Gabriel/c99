#include <stdio.h>

int main(){
    double kg,m,ft,lb; //declarado tudo em double, por conta da precisão

    //ENTRADA
    scanf("%lf\n%lf",&m,&kg);
    /*Formatação do input:
    m desejado
    kg desejado
    */
    ft = m*3.28084; //Fórmula de pés
    lb = kg*2.20462; //Fórmula de libras

    //OUTPUT
    printf("CONVERSÃO:\n\n%.4lfm = %.4lfft\n%.4lfkg = %.4lflb",m,ft,kg,lb);

    return 0;
}