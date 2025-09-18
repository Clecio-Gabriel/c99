#include <stdio.h>

int main(){

    int X, Y;
    double value;

    //ENTRADA
    scanf("%i %i",&X,&Y);

    //ALGORITMO
    switch(X){
        case 1:
            value = 4.0*Y;
            break;
        case 2:
            value = 4.5*Y; 
            break;
        case 3:
            value = 5.0*Y;
            break;
        case 4:
            value = 2.0*Y;
            break;
        case 5:
            value = 1.5*Y;
            break;
    }
    printf("Total: R$ %.2lf\n",value);


    return 0;
}