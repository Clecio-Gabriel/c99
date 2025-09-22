#include <stdio.h>

int main(){

    int vetor[10], num;
    for (int i = 0; i<10; i++){
        scanf("%i\n", &num);
        if (num<=0){
            vetor[i] = 1;
        }
        else{
            vetor[i] = num;
        }
    }

    for (int i = 0; i<10; i++){
        printf("X[%i] = %i\n", i, vetor[i]);
    }

}