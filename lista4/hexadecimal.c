#include <stdio.h>

int const tam = 2000;

void catch_factors16(int num, int vetor[]);
void hexad_change(int num, char hexa[]);
void reverse(char vetor[], int final);

int main(){
    int entrada;
    do{
        scanf("%i",&entrada);
    } while((entrada<1)||(entrada>2000000000));

    char hexa_eq[tam];
    hexad_change(entrada, hexa_eq);
    printf("%s\n", hexa_eq);

    return 0;
}

void hexad_change(int num, char hexa[]){
    
    int vetor_fat16[tam];
    int coordf;
    catch_factors16(num, vetor_fat16);
    
    for (int i = 0; i<tam; i++){
        if (vetor_fat16[i]==32){
            hexa[i] = '\0';
            coordf = i;
            break;
        }
        switch(vetor_fat16[i]){
            case 10:
                hexa[i] = 'A';
                break;
            case 11:
                hexa[i] = 'B';
                break;
            case 12:
                hexa[i] = 'C';
                break;
            case 13:
                hexa[i] = 'D';
                break;
            case 14:
                hexa[i] = 'E';
                break;
            case 15:
                hexa[i] = 'F';
                break;
            default:
                hexa[i] = (char)vetor_fat16[i]+48;
                break;
        }
    }

    reverse(hexa, coordf);
}

void catch_factors16(int num, int vetor[]){

    /*
    como lidar?
    a mod 16 = r
    a = b*16 + r
    armazenar r
    realizar b mod 16
    enquanto o termo a esquerda de mod não for 0
    */
    int mod, a = num;
    for (int i = 0; i<tam; i++){
        if (a==0){
            vetor[i] = 32;
            break;
        }
        mod = (a%16);
        vetor[i]=mod;
        a /= 16;
    }
}

void reverse(char vetor[], int final){
    
    char vettroca[tam];
    int j = 0;

    for (int i = final-1; i>=0; i--){
        while (1){
            vettroca[j] = vetor[i];
            j++;
            break;
        }
    }

    for (int i = 0; i<final; i++){
        vetor[i] = vettroca[i];
    }

}