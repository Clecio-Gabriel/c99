#include <stdio.h>

void oddnumbers(int numero){
    for(int i = 1; i<=numero; i++){
        if (i%2!=0){
            printf("%i\n", i);
        }
    }
}

int main(){

    int entrada;

    //ENTRADA
    scanf("%i",&entrada);

    //SAIDA
    oddnumbers(entrada);

    return 0;
}