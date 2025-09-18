#include <stdio.h>

int main(){
    double A,B,MEDIA;
    const double Peso1 = 3.5, Peso2 = 7.5;
    
    //ENTRADA
    scanf("%lf\n%lf",&A,&B);
    MEDIA = ((A*Peso1)+(B*Peso2))/(Peso1+Peso2);

    //SAÍDA
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}