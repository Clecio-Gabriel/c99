#include <stdio.h>

int sum_rec(int a, int b);

int main(){

    int A, B, res;
    scanf("%i %i", &A, &B);
    res = sum_rec(A,B);
    printf("%i\n", res);

}

int sum_rec(int a, int b){

    if (b==0){
        return a;
    }
    else if (b<0){
        return sum_rec(a-1, b+1);
    }
    else{
        return sum_rec(a+1, b-1);
    }
}