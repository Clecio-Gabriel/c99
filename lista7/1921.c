#include <stdio.h>

int main(){

    unsigned long long int n, diag;
    do{
        scanf("%llu",&n);
    } while((n<3)||(n>100000));
    diag = (n * (n-3))/2;

    printf("%llu\n", diag);

}