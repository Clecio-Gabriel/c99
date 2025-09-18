#include <stdio.h>

//f isitpositive : int contador X int numero -> int contador
int isitpositive(int contador, double numero){
    if (numero>0){
        contador += 1;
    }

    return contador;
}

int main(){ //ENTRADA

    //ENTRADA
    int counter=0; 
    double num;
    for (int i = 0; i < 6; i++){
        scanf("%lf",&num);
        counter = isitpositive(counter, num);
    }

    //SAIDA
    printf("%i valores positivos\n",counter);

    return 0;
}