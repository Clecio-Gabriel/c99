#include <stdio.h>

int main(){

    double salario,imposto, excedente;
    int isento, oitoporcento, dezoitoporcento;

    //ENTRADA
    scanf("%lf",&salario);
    isento = (salario<=2000); 
    oitoporcento = (salario<=3000); 
    dezoitoporcento = (salario<=4500); 

    /*
    isento -> salario<=2000
    oitoporcento -> salario<=3000
    dezoitoporcento -> salario<=4500
    vinteeoitoporcento-> salario>4500
    */

    //SAIDA
    if (isento){
        printf("Isento\n");
    }
    else if (oitoporcento){
        excedente = salario-2000;
        imposto = ((excedente)*0.08);
        printf("R$ %.2lf\n",imposto);
    }
    else if(dezoitoporcento){
        excedente = salario-3000;
        imposto = ((excedente*0.18)+(1000*0.08));
        printf("R$ %.2lf\n",imposto);
    }
    else{
        excedente = salario-4500;
        imposto = ((excedente*0.28)+(1500*0.18)+(1000*0.08));
        printf("R$ %.2lf\n",imposto);
    }

    return 0;
}