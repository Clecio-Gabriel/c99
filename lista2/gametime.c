#include <stdio.h>

int timecalculator(int comeco,int fim){
    int relogio = 24, horas, calculobase = (comeco-fim);
    int condicao = ((calculobase)>=0);

    switch(condicao){
        case 1:
            horas = relogio - (calculobase);
            break;
        case 0:
            horas = calculobase*(-1);
            break;
    }

    return horas;
}

int main(){

    int starttime, endtime, totaltime;

    //ENTRADA
    scanf("%i %i", &starttime, &endtime);
    totaltime = timecalculator(starttime, endtime);

    //SAIDA
    printf("O JOGO DUROU %i HORA(S)\n", totaltime);

    return 0;
}