#include <stdio.h>

void construct_matriz(int dim, int matriz[dim][dim]);
void print_matriz(int tam, int matriz[tam][tam]);

int main(){

    int N;
    while (scanf("%i", &N)!=EOF){
        int mat[N][N];
        construct_matriz(N, mat);
        print_matriz(N, mat);
    }


    return 0;
}

void construct_matriz(int dim, int matriz[dim][dim]){

    for (int i = 0; i<dim; i++){
        for (int j = 0; j<dim; j++){
            if((i+j)==(dim-1)){
                matriz[i][j] = 2;
            }
            else if ((i-j)==0){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 3;
            }
        }
    }

}

void print_matriz(int tam, int matriz[tam][tam]){
    for (int i = 0; i<tam; i++){
        for (int j = 0; j<tam; j++){
            printf("%i", matriz[i][j]);
        }
        printf("\n");
    }
}