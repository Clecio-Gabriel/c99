#include <stdio.h>

int nota_moedas[] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};

void countdinheiro_main(int x, int array[]);

int main(){

    double valor;
    scanf("%lf",&valor);

    int qnt_notas [12] = {0};
    countdinheiro_main((valor*100), qnt_notas);

    printf("NOTAS:\n");
    for (int i = 0; i<12; i++){
        if (i<=5){
            printf("%i nota(s) de R$ %.2lf\n",qnt_notas[i],nota_moedas[i]/100.0);
        }
        else{
            if (i==6){
                printf("MOEDAS:\n");
            }
            printf("%i moeda(s) de R$ %.2lf\n",qnt_notas[i],nota_moedas[i]/100.0);
        }   
    }

    return 0;
}

void countdinheiro_main(int x, int array[]){
    int valor0 = x;
    int div;
    for (int i = 0; i<12; i++){
        div = valor0/nota_moedas[i];
        if (div!=0){
            array[i] += div;
            valor0-=(div*nota_moedas[i]);
        }
    }
}