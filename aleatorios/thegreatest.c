#include <stdio.h>

int module(int X){
    (X<0) ? (X*=-1) : (X=X);
    return X;
}

int main(){

    int A, B, C;

    scanf("%i %i %i",&A,&B,&C);
    int MAIORAB = (A+B+module((A-B)))/2;
    int MAIORC = (MAIORAB+C+module((MAIORAB-C)))/2;

    printf("%i eh o maior\n", MAIORC);

    return 0;
}