#include <stdio.h>

void check_bigger(unsigned long long int a, unsigned long long int b, unsigned long long int order[2]);

int main(){

    unsigned long long int sh, si, diff;
    while ((scanf("%llu", &sh)!=EOF)&&(scanf("%llu", &si)!=EOF)){
        unsigned long long int order[2];
        check_bigger(sh, si, order);
        diff = order[0] - order[1];
        printf("%llu\n", diff);
    }
}

void check_bigger(unsigned long long int a, unsigned long long int b, unsigned long long int order[2]){
    unsigned long long int trade;
    if ((a>b)==0){
        trade = a;
        a = b;
        b = trade;
    }

    order[0] = a;
    order[1] = b;

}