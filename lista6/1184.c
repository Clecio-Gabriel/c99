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

    return 0;
}

double op_mat(double matriz[12][12], char op){
    
    double sum = 0;
    int count = 0;
    for (int i = 0; i<12; i++){
        for (int j = 0; j<12; j++){
            if ((j-i)<0){
                sum+=matriz[i][j];
                count++;
            }
        }
    }
    if (op=='S'){
        return sum;
    }
    else if (op=='M'){
        return (sum/count);
    }
}