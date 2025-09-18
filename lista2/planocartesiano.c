#include <stdio.h>

int main(){

    double x,y;
    int condicao_x0, condicao_xmaior, condicao_y0, condicao_ymaior;

    //ENTRADA
    scanf("%lf %lf",&x,&y);

    //SAÍDA
    condicao_x0 = (x==0);
    condicao_xmaior = (x>0);
    condicao_y0 = (y==0);
    condicao_ymaior = (y>0);

    switch(condicao_x0){
        case 1: //PARA X==0
        condicao_y0 ? printf("Origem\n") : printf("Eixo Y\n");
        break;

        case 0: //PARA X!=0
        if (condicao_y0){
            printf("Eixo X\n");
        }
        else{
            switch(condicao_ymaior){
                case 1:
                    condicao_xmaior ? printf("Q1\n") : printf("Q2\n");
                    break;

                case 0:
                    (condicao_xmaior==0) ? printf("Q3\n") : printf("Q4\n");
                    break;
            }

        }

    }

    //ORGANIZAÇÃO
    /*Para Igual a 0
        Caso 1 = 
        if (condicao_y0), Then Origem
        Else Eixo Y

        Caso 0 = (X!=0)
        If (condicao_y0), Then Eixo X
        Else:
            switch(condicao_ymaior)
                Caso 1:
                if (condicao_xmaior), Then Q1
                Else Q2
                
                Caso 2:
                if (condicao_xmaior==0), Then Q3
                Else Q4
    */

    return 0;
}