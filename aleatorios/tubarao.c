#include <stdio.h>

int main(){

    //vamos tentar com um array de contadores

    int qnt_fotos, entrada, diferentes = 0;
    int count_tubaroes[15] = {0};

    scanf("%i",&qnt_fotos);
    for (int i = 0 ; i<qnt_fotos ; i++){
        do{
            scanf("%i",&entrada);
        } while ((entrada<0)||(entrada>14));
        
        if ((count_tubaroes[entrada])==0){
            count_tubaroes[entrada] += 1;
            diferentes += 1;
        }

    }

    printf("%i espécies diferentes\n",diferentes);

    for (int i = 1; i < sizeof(count_tubaroes); i++){
        if (count_tubaroes[i] == 1){
            switch(i){
                case 1: printf("Tubarão Branco\n"); break;               
                case 2: printf("Tubarão Martelo\n"); break;
                case 3: printf("Tubarão Touro\n"); break;
                case 4: printf("Tubarão Baleia\n"); break;
                case 5: printf("Tubarão Lixa\n"); break;
                case 6: printf("Tubarão Frade\n"); break;
                case 7: printf("Tubarão Tigre\n"); break;
                case 8: printf("Tubarão Cabeça-Chata\n"); break;
                case 9: printf("Tubarão Serra\n"); break;
                case 10: printf("Tubarão de Pontas Negras\n"); break;
                case 11: printf("Tubarão Raposa\n"); break;
                case 12: printf("Tubarão Mako\n"); break;
                case 13: printf("Tubarão Bruxa\n"); break;
                case 14: printf("Tubarão Azul\n"); break;
            }
        }
    }
    
    return 0;
}