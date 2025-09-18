#include <stdio.h>

int main(){

    double A, B, C;
    double triangle, circle, square, rectangle, trapezium;

    //ENTRADA
    scanf("%lf %lf %lf",&A,&B,&C);
    triangle = (A*C)/2;
    circle = (C*C)*3.14159;
    square = (B*B);
    trapezium = ((A+B)*C)/2;
    rectangle = (A*B);

    //SAIDA
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezium, square, rectangle);

    return 0;
}