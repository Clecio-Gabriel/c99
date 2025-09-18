#include <stdio.h>

void sort(int vetor[]);

int main(){

    int valores[3];
    for (int i = 0; i<3; i++){
        scanf("%i", &valores[i]);
    }

    sort(valores);

    for (int i = 0; i<3; i++){
        printf("%i ", valores[i]);
    }
    
    return 0;
}

void troca(int v[], int indice1, int indice2){
/*o que usar como argumento:
1 - o próprio array
2 - o índice do primeiro
3 - o índice do segundo
*/  
    int troca;
    troca = v[indice1];
    v[indice1]=v[indice2];
    v[indice2]=troca;
}

void sort(int vetor[]){
    for (int i=1; i<3; i++){
        if (vetor[i]<vetor[0]){
            /*troca=vetor[0];
            vetor[0]=vetor[i];
            vetor[i]=troca;*/
            troca(vetor,0,i);
        }
    }
    if (vetor[1]>vetor[2]){
        /*troca=vetor[2];
        vetor[2]=vetor[1];
        vetor[1]=troca;*/
        troca(vetor,2,1);
    }
}