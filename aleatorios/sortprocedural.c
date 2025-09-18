#include <stdio.h>

void sort(int vetor[], int tam);

int main(){

    int qnt_valores;
    printf("Digite a quantia de valores: ");
    scanf("%i", &qnt_valores);
    int valores[qnt_valores];
    for (int i = 0; i<qnt_valores; i++){
        scanf("%i", &valores[i]);
    }

    sort(valores, qnt_valores);

    for (int i = 0; i<qnt_valores; i++){
        printf("%i ", valores[i]);
    }
    
    return 0;
}

void troca(int v[], int indiceR, int indiceL){
    int troca;
    troca = v[indiceR];
    v[indiceR]=v[indiceL];
    v[indiceL]=troca;
}

void sort(int vetor[], int tam){
    for (int i=0; i<tam; i++){
        for (int j=i+1; j<tam; j++){
            if (vetor[j]<vetor[i]){
                troca(vetor, i, j);
            }
        }
    }
}