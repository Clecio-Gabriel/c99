#include <stdio.h>

int main(){

    /*
    para multiplicar duas matrizes
    Amxn e Bnxq
    MATRIZ RESULTANTE: Rmxq
    */
    int m, n, q;
    do{
    scanf("%i %i %i",&m,&n,&q);
    } while ((m<0)||(n<0)||(q<0));

    int matrizA[m][n];
    int matrizB[n][q];
    int matrizR[m][q];

    //MATRIZ A
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++ ){
            scanf("%i",&matrizA[i][j]);
        }
    }

    //MATRIZ B
    for (int i = 0; i < n; i++){
        for (int j = 0; j < q; j++ ){
            scanf("%i",&matrizB[i][j]);
        }
    }

    //MATRIZ R
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q; j++ ){
                matrizR[i][j] = 0;
            for (int k = 0; k < n; k++){
                matrizR[i][j] += matrizA[i][k]*matrizB[k][j];
            }
        }
    }
    

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++ ){
            printf("%i ",matrizA[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < q; j++ ){
            printf("%i ",matrizB[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        printf("\n");
        for (int j = 0; j < q; j++ ){
            printf("%i ",matrizR[i][j]);
        }
    }
}