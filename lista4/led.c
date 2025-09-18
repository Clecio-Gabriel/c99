#include <stdio.h>

int const max = 1000000;

int count(char vetor[]);

int main(){

    int N;
    do{ //GARANTIR 1<=N<=2000
        scanf("%i\n",&N);
    } while ((N<1)||(N>2000));

    char in_led[max];
    int res[N];
    for (int i = 0; i<N; i++){
        fgets(in_led, max, stdin);
        res[i] = count(in_led);
    }
    
    for (int i = 0; i<N; i++){
        printf("%i leds\n", res[i]);
    }

    return 0;
}

int size_vetor(char vetor[]){
    int size_cnt = 0;
    for (int i = 0; i<max; i++){
        size_cnt++;
        if (vetor[i+1]=='\0'){
            break;
        }
    }

    return size_cnt;
}

int count(char vetor[]){
    
    /*
    2 leds = 1
    3 leds = 7
    4 leds = 4
    5 leds = 2,3,5
    6 leds = 6,9,0
    7 leds = 8
    */  
    int size = size_vetor(vetor);
    int count = 0;
    int ascii_val;
    for (int i = 0; i<size; i++){
        ascii_val = vetor[i];
        if (ascii_val==49){ //2
            count+=2;
        }
        else if(ascii_val==55){ //3
            count+=3;
        }
        else if(ascii_val==52){ //4
            count+=4;
        }
        else if ((ascii_val==50)||(ascii_val==51)||(ascii_val==53)){ //5
            count+=5;
        }
        else if((ascii_val==48)||(ascii_val==54)||(ascii_val==57)){ //6
            count+=6;
        }
        else if (ascii_val==56){ //7
            count+=7;
        }
    }

    return count;
}