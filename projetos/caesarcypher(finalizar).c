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
void pass_results(char matriz[][tam], char vetor[], int linha);
int len_s(char array[]);

int main(){

    int N;
    do{
        scanf("%i\n",&N);
    } while ((N<0));

    char frase[tam]; int key;
    char res[N][tam];
    for (int i = 0; i<N; i++){
        fgets(frase, 50, stdin);
        scanf("%i",&key);
        getchar();

        caesar_cypher(frase, key);
        pass_results(res, frase, i);

    }

    for (int i = 0; i<N; i++){
        printf("%s", res[i]);
    }

    return 0;
}

int len_s(char array[]){
    
    int count = 0;
    for (int i = 0; i<tam; i++){
        count++;
        if (array[i+1]=='\n'){
            break;
        }
    }

    return count;
}

void caesar_cypher(char vetor[], int chave){
    int size = len_s(vetor);
    chave*=-1;

    int ascii_num, upper, check, chavef;
    for (int i = 0; i<size; i++){
        
        /*DETERMINAR SE: 
        - Pertence ao alfabeto
        - Se é Upper ou Lower case;
        */
        ascii_num = vetor[i];
        if ((ascii_num>=65)&&(ascii_num<=90)) upper = 1;
        if ((ascii_num>=97)&&(ascii_num<=122)) upper = 0;
        
        //AJUSTAR A CHAVE
        if (chave>26||chave<-26) chave = (chave%26);
        
        check = ascii_num + chave;
        switch(upper){
            case 1:
                if (check<65){
                    chavef = 65-check;
                    vetor[i] = '[';
                    vetor[i] = vetor[i] - chavef;
                    break;
                }
                vetor[i] += chave;
                
                break;
        }


    }

}

void pass_results(char matriz[][tam], char vetor[], int linha){

    for (int j = 0; j<tam; j++){
        matriz[linha][j] = vetor[j];
    }

}