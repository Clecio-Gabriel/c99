#include <stdio.h>

void encryption(char vetor[1002]);
void passresults(char r[][1002], char vetor[1002], int in);

int main(){

    int N;
    do{scanf("%i\n",&N);} while ((N>10000)||(N<1));
    
    char input[1002] = {0};

    char res[N][1002];
    
    //PROCESSO DE INPUT
    for (int i = 0; i<N; i++){
        fgets(input, 1000, stdin);
        encryption(input);
        //PASSAR PARA MATRIZ res
        passresults(res, input, i);
    }

    //PROCESSO DE OUTPUT
    for (int i = 0; i<N; i++){
        printf("%s", res[i]);
    }
    
    return 0;
}

int size_vetor(char vetor[1002]){
    int count = 0;
    for (int i = 0; i<1002; i++){
        count++;
        if (vetor[i+1]=='\n'){
            break;
        }
    }

    return count;
}

void ascii(char vetor [1002], int tam, int operator, int key){
    /*
    1 - (+)
    2 - (-)
    */
    
    int half = tam/2;

    int ascii_num;
    for (int i = 0; i<tam; i++){
        ascii_num = vetor[i];
        switch(operator){
            case 1:
                if (((ascii_num>=65)&&(ascii_num<=90))||((ascii_num>=97)&&(ascii_num<=122))){
                    vetor[i] = vetor[i] + key;
                }
                break;

            case 2:
                if ((i)>=half){
                    vetor[i] = vetor[i] - key;
                }
        }
    }

}

void reverse(char vetor[1002], int tam){

    char rev_vetor[1002];
    int i = 0;

    //PROCESSO PARA CRIAR O VETOR REVERSO
    for (int j = tam-1; j>=0; j--){
        while (1){
            rev_vetor[i] = vetor[j];
            i++;
            break;
        }
    }

    //PASSAR rev_vetor PARA vetor
    for (i = 0; i<tam; i++){
        vetor[i] = rev_vetor[i];
    }
}

void encryption(char vetor[1002]){
    
    int size = size_vetor(vetor);

    //1º PASSO
    ascii(vetor, size, 1, 3);

    //2º PASSO
    reverse(vetor, size);
    ascii(vetor, size, 2, 1);

}

void passresults(char r[][1002], char vetor[1002], int in){

    for (int j = 0; j<1002; j++){
        r[in][j] = vetor[j];
    }
}