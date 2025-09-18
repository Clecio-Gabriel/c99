#include <stdio.h>

int main(){


    //ENTRADA
    char mapa[6][6];
    int X, Y;
    int m, i, j;

    for (i = 0; i<6; i++){
        for (j = 0; j<6; j++){
            scanf("%c",&mapa[i][j]);
        }
    }

    scanf("%i\n%i %i",&m,&X,&Y);
    /*char passos[m];
    for (i = 0; i<m; i++){
        scanf("%c",&passos[i]);
    };*/

    //TESTE
    mapa[(X-1)][(Y-1)] = '+';

    for (int i = 0; i<6; i++){
        printf("\n");
        for (int j = 0; j<6; j++){
            printf("%c",mapa[i][j]);
        }
    }

    return 0;
}