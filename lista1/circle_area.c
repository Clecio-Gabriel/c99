#include <stdio.h>

int main(){
    double area,raio;
    const double pi = 3.14159;
    /*Para a área de um círculo, são necessárias 3 variáveis: 
    area = armazenar a informação de área
    pi = armazenar pi(constante entre perímetro e diâmetro)
    raio = armazenar raio(distância do centro á circuferência)
    */

    //ENTRADA
    scanf("%lf",&raio);
    area = pi*raio*raio;

    //SAÍDA
    printf("A=%.4lf\n",area);

    return 0;
}