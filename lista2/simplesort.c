#include <stdio.h>

int main(){

    int x,y,z,prim,segu,terc,troca;

    //ENTRADA
    scanf("%i %i %i",&x,&y,&z);
    
        //CASO PRINT POR ORDEM DE ENTRADA
        prim=x, segu=y, terc=z;
    
        //CASO PRINT EM ORDEM CRESCENTE
        if ((z>y)==0){
            troca=y;
            y=z;
            z=troca;
        }
        if ((z>x)==0){
            troca=x;
            x=z;
            z=troca;
        }
        if ((x<y)==0){
            troca=y;
            y=x;
            x=troca;
        }

    //SAIDA
    printf("%i\n%i\n%i\n\n%i\n%i\n%i\n",x,y,z,prim,segu,terc);

    return 0;
}