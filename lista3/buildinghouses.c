#include <stdio.h>

int sqrrootint(int x){

    int raiz;
    for (int i=0; (i*i)<=x; i++){
        raiz = i;
        
    };
    
    return raiz;

}

int main(){

    int A, B, C, areabase, areatotal, lado;
    while (1){
        scanf("%i",&A);
        if (A==0){
            break;
        }
        scanf(" %i %i",&B, &C);

        areabase = (A*B);
        areatotal = (areabase*100)/C;
        lado = sqrrootint(areatotal);

        printf("%i\n",lado);

    
    }

    return 0;
}