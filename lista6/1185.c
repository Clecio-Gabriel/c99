#include <stdio.h>

double op_mat(double matriz[12][12], char op);

int main(){

    char operacao;
    scanf("%c\n", &operacao);

    double M[12][12];
    for (int i = 0; i<12; i++){
        for (int j = 0; j<12; j++){
            scanf("%lf",&M[i][j]);
        }
    }

    double ret = op_mat(M, operacao);
    printf("%.1lf\n", ret);

}

double op_mat(double matriz[12][12], char op){

    int coordf = 11, count = 0;
    double sum = 0;
    for (int i = 0; i<12; i++){
        for (int j = 0; j<coordf; j++){
            sum+=matriz[i][j];
            count++;
        }
        coordf--;
    }
    if (op=='S'){
        return sum;
    }
    else if (op=='M'){
        return (sum/count);
    }

}