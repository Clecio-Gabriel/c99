#include <stdio.h>

long long int fact(int a);

int main(){
    
    int M, N;
    long long int sum;
    while ((scanf("%i", &M)!=EOF)&&(scanf("%i", &N)!=EOF)){
        sum = fact(M) + fact(N);
        printf("%lld\n", sum);
    }

}

long long int fact(int a){
    long long int fat_a;
    if (a==0){
        fat_a = 1;
    }
    else{
        fat_a = a;
        for (int i = a; i>1; i--){
            fat_a *= (i - 1);
        }   
    }
    
    return fat_a;
}