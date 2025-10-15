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

    for (int i = 0; i<N; i++){
        fgets(s, 1000, stdin);
        encryption(s, i, res);
    }

    for (int i = 0; i<N; i++){
        printf("%s\n", res[i]);
    }

}

void reverse(char string [M], int len);
void ascii(char string[M], int len, int ini, int key, int op);

void encryption(char s[M], int c, char res[][M]){
    int size = strlen(s) - 1;

    ascii(s, size, 0, 3, 1);
    reverse(s, size);
    ascii(s, size, (size/2), 1, 2);

    strcpy(res[c], s);  //não vai precisar mais da passresults
}

void ascii(char string[M], int len, int ini, int key, int op){

    int ascii_num;
    for (int i = ini; i<len; i++){
        ascii_num = string[i];
        switch(op){
            case 1:
            if (((ascii_num>=65)&&(ascii_num<=90))||((ascii_num>=97)&&ascii_num<=122)) string[i] += key;
            break;
            case 2:
            string[i] -= key;
        }
    }   

}

void reverse(char string[M], int len){
    char rev[M];

    int j = len-1;
    for (int i = 0; i<len; i++){
        rev[i] = string[j];
        j--;
    }
    rev[len] = '\0';

    strcpy(string, rev);
}