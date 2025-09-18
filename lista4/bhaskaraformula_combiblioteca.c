#include <stdio.h>
#include <math.h>

int bhaskara(double a, double b, double c, double raizes[2]);

int main(){

    double A, B, C;
    double raiz[2];
    scanf("%lf %lf %lf",&A,&B,&C);

    int cond = bhaskara(A,B,C,raiz);
    switch(cond){
        case 0:
            printf("Impossivel calcular\n");
            break;
        case 1: 
            printf("R1 = %.5lf\nR2 = %.5lf\n",raiz[0],raiz[1]);
    }

}

int bhaskara(double a, double b, double c, double raizes[2]){
    double det = pow(b,2)-(4*a*c);
    double raizdet = sqrt(det);
    if ((a==0)||(det<0)){
        return 0;
    }
    
    raizes[0] = ((b*-1)+raizdet)/(2*a);
    raizes[1] = ((b*-1)-raizdet)/(2*a);
    return 1;
}