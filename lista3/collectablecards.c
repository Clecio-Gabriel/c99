#include <stdio.h>

/*ALGORITMO USADO EM MDC:
dado um MDC(a,b) = m
MDC(a,b) = MDC(b,r)     --R=RESTO DE A%B
até que
MDC(O,m) = m -> MDC(a,b) = m
*/
int mdc(int x, int y){ //MINHA PRIMEIRA FUNÇÃO RECURSIVA EM C :D
    if (y==0){  //CASO BASE
        return x;
    }
    else{
        return mdc(y,x%y);
    }
}

int main(){

    int n, f1, f2, maxstacksize;
    scanf("%i",&n);

    for (int i = 0; i<n; i++){
        scanf("%i %i",&f1,&f2);
        maxstacksize = mdc(f1,f2);
        printf("%i\n",maxstacksize);
    }

    return 0;
}