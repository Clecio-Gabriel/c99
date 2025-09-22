#include <stdio.h>

void fibonacci(int n, unsigned long long int numfib[]);

int main(){

    int T;
    scanf("%i\n", &T);

    int N, maior=0;
    int pos[T];
    for (int i = 0; i<T; i++){
        scanf("%d", &N);
        pos[i] = N;
        if (N>maior){
            maior=N;
        }
    }
    
    unsigned long long int fib[maior+1];

    fibonacci(maior, fib);
    for (int i = 0; i<T; i++){
        printf("Fib(%i) = %llu\n", pos[i], fib[pos[i]]);
    }

    return 0;
}

void fibonacci(int n, unsigned long long int numfib[]){
    numfib[0] = 0; 
    numfib[1] = 1;
    //criar um for para posições
    for (int i = 2; i<=n; i++){
        numfib[i] = numfib[i-1]+numfib[i-2];
    }
}