#include <stdio.h>
#include <math.h>

int bhask_form(double A, double B, double C, double raiz [2]);

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double raizes [2];
    int exist;
    exist = bhask_form(a, b, c, raizes);

    switch(exist){
        case 0:
            printf("Impossivel calcular\n");
            break;
        case 1:
            for (int i = 0; i<2; i++){
                printf("R%i = %.5lf\n", i+1, raizes[i]);
            }
    }

}

int bhask_form(double A, double B, double C, double raiz [2]){

    double det = pow(B, 2) - (4 * A * C);
    if ((det<0)||(A==0)){
        return 0;
    }

    for (int i = 0; i<2; i++){
        raiz[i] = ((B * -1) + (sqrt(det) * pow(-1,i))) / (2 * A);
    }
    return 1;
    
}