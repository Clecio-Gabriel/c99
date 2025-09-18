#include <stdio.h>

int main(){

    double num,divpor25;
    int cond;

    //ENTRADA
    scanf("%lf",&num);
    divpor25 = num/25;
    cond = (num<0)||(num>100);

    //ALGORITMO
    switch(cond){
        case 1:
            printf("Fora de intervalo\n");
            break;
        case 0:
            if (divpor25<=1){
                printf("Intervalo [0,25]\n");
            }
            else if (/*(divpor25>1)&&*/(divpor25<=2)){
                printf("Intervalo (25,50]\n");
            }
            else if(/*(divpor25>2)&&*/(divpor25<=3)){
                printf("Intervalo (50,75]\n");
            }
            else{
                printf("Intervalo (75,100]\n");
            }

    }

    return 0;
}