#include <stdio.h>

int main(){

    int ddd;

    //ENTRADA
    scanf("%i",&ddd);

    //ALGORITMO
    switch(ddd){
        case 11: 
            printf("Sao Paulo\n");
            break;
        
        case 19:
            printf("Campinas\n");
            break;

        case 21: 
            printf("Rio de Janeiro\n");
            break;

        case 27:
            printf("Vitoria\n");
            break;
        
        case 31:
            printf("Belo Horizonte\n");
            break;

        case 32:
            printf("Juiz de Fora\n");
            break;
        
        case 61:
            printf("Brasilia\n");
            break;

        case 71:
            printf("Salvador\n");
            break;

        default:
            printf("DDD nao cadastrado\n");
            break;
    }

    return 0;
}

/*
61 -> Brasilia(CHECK)
71 -> Salvador(CHECK)
11 -> Sao Paulo (CHECK)
21 -> Rio de Janeiro (CHECK)
32 -> Juiz de Fora (CHECK)
19 -> Campinas (CHECK)
27 -> Vitoria (CHECK)
31 -> Belo Horizonte (CHECK)

*/