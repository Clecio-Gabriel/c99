#include <stdio.h>

double mat_op(char op, int linha, double mat[12][12]);

int main(){

    int L;
    do{
        scanf("%i\n", &L);
    } while((L<0)||(L>11));

    char operacao;
    scanf("%c", &operacao);
    double M[12][12];
    for (int i = 0; i<12; i++){
        for (int j = 0; j<12; j++){
            scanf("%lf\n", &M[i][j]);
        }
    }

    double ret = mat_op(operacao, L, M);
    printf("%.1lf\n", ret);

    return 0;
}

double mat_op(char op, int linha, double mat[12][12]){

    double sum = 0;
    for (int j = 0; j<12; j++){
        sum += mat[linha][j];
    }
    if (op=='S'){
        return sum;
    }
    else if (op=='M'){
        return (sum/12);
    }
}