#include <stdio.h>

void printpum(int x);


int main(){

    int N;
    scanf("%i",&N);

    printpum(N);

    return 0;
}

void printpum(int x){
    /* (i*4)+j = indice*/
    for (int i = 0; i<x; i++){
        for (int j = 1; j<=4; j++){
            if ((j%4)!=0){
                printf("%i ", ((i*4)+j));
            }
            else{
                printf("PUM");
                printf("\n");
            }
        }
    }
}