#include <stdio.h>

int main(){

    double A, B, C, areatrapezio, perimetrotriangulo;
    int condicao_trianguloexiste;

    //ENTRADA
    scanf("%lf %lf %lf",&A,&B,&C);
    condicao_trianguloexiste = (A<(B+C))&&(B<(A+C))&&(C<(A+B));

    //ALGORITMO
    if(condicao_trianguloexiste){
        perimetrotriangulo = A+B+C;
        printf("Perimetro = %.1lf\n",perimetrotriangulo);
    }
    else{
        areatrapezio = ((A+B)*C)/2;
        printf("Area = %.1lf\n",areatrapezio);
    }

    return 0;
}