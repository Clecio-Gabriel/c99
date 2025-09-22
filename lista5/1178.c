#include <stdio.h>

int main(){

    long double N[100];
    scanf("%llf",&N[0]);
    for (int i = 1; i<100; i++){
        N[i] = N[i-1]/2;
    }

    for (int i = 0; i<100; i++){
        printf("N[%i] = %.4llf\n", i, N[i]);
    }


    return 0;
}