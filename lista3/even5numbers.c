#include <stdio.h>

int contadorpares(){
    int numero, counter;

    for(int i = 0;i < 5; i++){
        scanf("%i",&numero);
        if (numero%2==0){
            counter+=1;
        }
    }
    
    return counter;
}


int main(){

    int saida;

    saida = contadorpares();
    printf("%i valores pares\n",saida);

    return 0;
}