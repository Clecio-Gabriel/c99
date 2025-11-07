#include <stdio.h>

void checkbigsmall(int vet[10], int res[2]);
void evenodd(int vet[10], int res[2]);

int main(){

    int vet[10], sum = 0;
    for (int i = 0; i<10; i++){
        scanf("%i",&vet[i]);
        sum+=vet[i];
    }

    int bigsma[2], eveodd[2];
    checkbigsmall(vet, bigsma);
    evenodd(vet, eveodd);
    
    printf("Sum: %i\nPar: %i\nImpar: %i\nBig: %i\nSmall: %i\n", sum, eveodd[0], eveodd[1], bigsma[0], bigsma[1]);

}

void checkbigsmall(int vet[10], int res[2]){



}