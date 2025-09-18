#include <stdio.h>

int module(int x){
    (x<0) ? (x*=-1) : (x=x);
    return x;
}

int maioremenor(int a, int b, int c, int operacao){

//OPERAÇÃO MAIOR
int maiorab = ((a+b)+module(a-b))/2; int maiorc = ((maiorab+c)+module(maiorab-c))/2;

//OPERAÇÃO MENOR
int menorab = ((a+b)-module(a-b))/2; int menorc = ((menorab+c)-module(menorab-c))/2;

/*
OPERAÇÃO:
1 - MAIOR
2 - MENOR
3 - MEIO
*/
    switch(operacao){

        case 1: //VOU USAR UMA FÓRMULA QUE APRENDI NO BEECROWD
            return maiorc;

        case 2: //SEM QUERER, DESCOBRI ESSA FÓRMULA
            return menorc;

        case 3:
            if ((a!=maiorc)&&(a!=menorc)){
                return a;
            }
            else if ((b!=maiorc)&&(b!=menorc)){
                return b;
            }
            else{
                return c;
            }
    }

}

int main(){//ENTRADA E SAIDA

    int num1, num2, num3, maior, menor, meio;
    
    //ENTRADA
    scanf("%i %i %i",&num1,&num2,&num3);
    maior = maioremenor(num1, num2, num3, 1);
    menor = maioremenor(num1, num2, num3, 2);
    meio = maioremenor(num1, num2, num3, 3);

    //SAIDA
    printf("\nMAIOR = %i\nMEIO = %i\nMENOR = %i\n", maior, meio, menor);

}