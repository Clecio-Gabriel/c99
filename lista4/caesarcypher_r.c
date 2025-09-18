#include <stdio.h>

//USAR VALOR ASCII

int const tam = 52;

/*
INPUT:
    int N
        string frase
        int senha
*/

//peguei o código de um projeto meu

void caesar_cypher(char vetor[], int chave);
int len_s(char array[]);

int main(){

    int N;
    do{
        scanf("%i\n",&N);
    } while ((N<0));

    char frase[tam]; int key;
    char res[N][tam];
    for (int i = 0; i<N; i++){
        scanf("%[^\n]\n", frase);
        scanf("%i\n",&key);

        caesar_cypher(frase, key);
        
        for (int j = 0; j<tam; j++){
            res[i][j] = frase[j];
        }

    }

    for (int i = 0; i<N; i++){
        printf("%s\n", res[i]);
    }

    return 0;
}

int len_s(char array[]){
    
    int count = 0;
    for (int i = 0; i<tam; i++){
        count++;
        if (array[i+1]=='\0'){
            break;
        }
    }

    return count;
}

void caesar_cypher(char vetor[], int chave){
    int size = len_s(vetor);

    int ascii_num, check, chavem;
    for (int i = 0; i<size; i++){
        
        ascii_num = vetor[i];
        
        if ((ascii_num>=65)&&(ascii_num<=90)){
                //ESTUDAR ARITMETICA MODULAR

                /*
                DESLOCAR EM UM INTERVALO
                [0,N-1]
                se sabemos que x e y estão inclusos, será igual a:
                (x-y+N) mod N
                POR QUE O +N?
                evitar números negativos
                */
                /*x:=vetor[i],y:=chave,N:=26(são 26 letras)qualquer vetor[i] dentro de [0,n-1] = 
                tal que
                Para todo Vetor[i] -> Vetor[i] = ((Vetor[i]-chave+26) mod 26)
                p.s.: esqueci de garantir que inicia em 65, logo, tem que se levar em conta também o ponto de inicio
                [65,90] -> Índices A-Z em ASCII
                */
                vetor [i] = (vetor[i]-chave-'A'+26)%26 + 'A'; //Pode ser lido como: termo dado, deslocamento, ponto de partida do conjunto
                /*
                dado exemplo:
                    vetor[i] = 'A', ASCII = 65
                    chave = 2
                    RESULTADO DESEJADO: 'Y', ASCII = 89

                    65-2=63
                    63+26=89
                    89%26 = r
                        f = g*q + r
                        89 = 26*5 + 9
                    89%26 = 9
                    9+65=74 ERRADO
                    

                    o mesmo exemplo, com A na subtração:
                    65-2=63
                    63-65=-2
                    -2+26=24
                    24%26 = 24
                    65+24=89
                    deu certo :O
                */


                //CÓDIGO QUEBRADO
                /*check = ascii_num - chave;
                /*
                CASO BASE: 
                vetor[i] -= chave;
                    o que atentar-se?
                        ascii trabalha com alfabeto maiúsculo entre as coordenadas 65 e 90
                            já que a operação sempre será de subtrair, trabalhemos então apenas com o caso da coordenada ser menor que 65
                
                vetor[i] -= chave;
                if (check<65){
                    vetor[i] += 26;    
                }*/
        }


    }

}