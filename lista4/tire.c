#include <stdio.h>

int ISnolimitepressao(int x){
    int condicao = !((1<=x)&&(x<=40));
    return condicao;
}

int main(){

    int M, N, pressaodesejada;
    do{
    scanf("%i\n%i",&N,&M);
    }while((ISnolimitepressao(M))&&(ISnolimitepressao(N)));
    pressaodesejada = (N-M);

    printf("%i\n",pressaodesejada);

    return 0;
}