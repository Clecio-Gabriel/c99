#include <stdio.h>

int const tam = 22;

void to_hexa(int decimal, char hexa[]);

int main(){

    int entrada;
    do{
        scanf("%i",&entrada);
    } while((entrada<1)||(entrada>2000000000));

    char hexa[tam];
    to_hexa(entrada,hexa);

    printf("%s\n",hexa);

    return 0;
}

void to_hexa(int decimal, char hexa[]){

    /*
    decimal A/16 = q + r(digitos do número)
    int base[tam];
    int a = decimal, mod;
    for (int i = 0; a/16!=0; i++){
        mod = a%16;
        printf("%i", mod);
        base[i] = mod;
        a/=16;
    }
    */

    /*
    2 passos:
    1 - lista de inteiros com os restos
    2 - conversão dos inteiros para hexa
    */
    

}