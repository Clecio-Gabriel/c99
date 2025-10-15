#include <stdio.h>
#include <string.h>

#define t 52

void secret_reader(char string[t]);

int main(){
    int N;
    scanf("%i", &N);
    getchar();

    char s[t] = {0};
    char mat[N][t];

    for (int i = 0; i<N; i++){
        scanf("%[^\n]", s);
        getchar();
        secret_reader(s);
        strcpy(mat[i], s);
    }

    for (int i = 0; i<N; i++){
        printf("%s\n", mat[i]);
    }
}

void secret_reader(char string[t]){
    int size = strlen(string);
    char secret[t] = {0};

    int ascii_num, j = 0, c = 0;
    for (int i = 0; i<size; i++){
        ascii_num = string[i];
        if (((ascii_num>=97)&&(ascii_num<=122)&&(c==0))){
            secret[j] = string[i];
            j++;
            c++;
        }
        if (string[i]==' ') c = 0;
    }

    strcpy(string, secret);

}