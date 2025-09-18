#include <stdio.h>

int minmax(int a, int b, int operacao){
    switch(operacao){
        case 1: //MIN
            if (a<b){
                return a;
            }
            else{
                return b;
            }
        
        case 2: //MAX
            if (a>b){
                return a;
            }
            else{
                return b;
            }
    }
    
}

int main(){

    //ENTRADA
    int x, y, sum=0, i, fim;
    scanf("%i\n%i",&x, &y);
    i = (minmax(x,y,1))+1; //ONDE INICIA, O 1 FOI ADICIONADO PARA NÃO INCLUIR O TERMO INICIAL
    fim = minmax(x,y,2); //ONDE FINALIZA

    //ALGORITMO
    while (i<fim){
        if (i%2!=0){
            sum+=i;
        }
        i++;
    }

    //SAIDA
    printf("%i\n", sum);

    return 0;
}