#include <stdio.h>

/*
PROGRAMA

recebe uma entrada ->
checa se é positiva | IF positiva -> counter+=1, soma+=entrada; ->
cria uma média (media : double soma X int objetos -> double media)
*/

double media(double soma, int objetos){
    double media = soma/objetos;
    return media;
}

int main(){

    int counter=0, i=0;
    double num, soma=0;
    while (i<6){
        scanf("%lf",&num);
        if (num>0){
            counter+=1;
            soma+=num;
        }
        i++;
    }

    printf("%i valores positivos\n%.1lf\n",counter, media(soma,counter));

    return 0;
}