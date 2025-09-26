#include <stdio.h>

const int T = 20;

void queries(int nQ, char pedido[T], int tam, int vet[]);

int main(){

    int N;
    scanf("%i",&N);

    int vet[N];
    for (int i = 0; i<N; i++){
        scanf("%i",&vet[i]);
    }

    int Q;
    scanf("%i", &Q);
    getchar();

    char pedido[T];
    for (int i = 0; i<Q; i++){
        fgets(pedido, 18, stdin);
        queries(i, pedido, N, vet);
    }

}

void queries(int nQ, char pedido[T], int tam, int vet[]){
    char op[7];
    int i, j, k;
    int coord;
    for (int i = 0; i<7; i++){
        if (pedido[i]==' '){
            op[i] = '\0';
            int coord = i;
            break;
        }
        op[i] = pedido[i];
    }
    
    


}