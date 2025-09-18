#include <stdio.h>

int main(){

    const double pi=3.14159,fracconst = (4.0/3);
    double raio,volumeesfera;

    //ENTRADA
    scanf("%lf",&raio);
    raio=raio*raio*raio;
    volumeesfera=raio*pi*fracconst;

    //SAIDA
    printf("VOLUME = %.3lf\n",volumeesfera);

    return 0;
}