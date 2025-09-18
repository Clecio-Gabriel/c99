#include <stdio.h>

int main(){

    double A,B,C,media;
    const double pesoA = 2,pesoB = 3, pesoC = 5,sumpes = pesoA+pesoB+pesoC;

    //ENTRADA
    scanf("%lf\n%lf\n%lf",&A,&B,&C);
    media = ((A*pesoA)+(B*pesoB)+(C*pesoC))/sumpes;

    //SAIDA
    printf("MEDIA = %.1lf\n",media);

    return 0;
}