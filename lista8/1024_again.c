#include <stdio.h>
#include <string.h>

#define M 1001

void encryption(char s[M], int c, char res[][M]);

int main(){
    int N;
    do{
        scanf("%i\n", &N);
    }while((N<1)||(N>10000));

    char s[M];
    char res[N][M];

    /*
    como farei isso de forma mais eficiente?
        primeiro, listemos o processo para compreender o que a atividade pede:
            1. toda letra do alfabeto deve ser modificada em 3 posições para frente
                char elem += 3
            2. as linhas devem ser colocadas de trás para frente
                precisa-se de uma função de reverse
            3. todos os caracteres da metade pra frente devem ser movidos uma casa para esquerda
                char elem -+ 1

    funções que eu preciso:
        encryption(string, iteração do i, matriz resultado) -- Função principal
            vamo tentar fazer com a string.h
        reverse(char string)
    */

    for (int i = 0; i<N; i++){
        fgets(s, 1000, stdin);
        encryption(s, i, res);
    }

    //TESTE
    printf("%s", res[0]);

}

void reverse(char string [M]);

void encryption(char s[M], int c, char res[][M]){
    strcpy(res[c], s);  //não vai precisar mais da passresults
}