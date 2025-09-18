#include <stdio.h>

double extractandapply(double matriz[12][12], char operacao);

int main(){

    double result;
    double M[12][12];
    char O;
    scanf("%c",&O);
    for (int i = 0; i<12; i++){
        for (int j = 0; j<12; j++){
            scanf("%lf",&M[i][j]);
        }
    }
    result = extractandapply(M, O);

    printf("%.1lf\n", result);


    return 0;
}

/*



*/


double extractandapply(double matriz[12][12], char operacao){

    double sum = 0, ave;
    int i_ini = 1, c = 11;
    for (int j = 11; j>6; j--){
        for (int i = i_ini; i<c; i++) {
            sum += matriz[i][j];
        }
        i_ini++;
        c--;
    }
    ave = sum/30;

    if (operacao=='S'){
        return sum;
    }
    else if (operacao=='M'){
        return ave;
    }
    
}