#include <stdio.h>

int main(){

    int R1, R2, R3, t, i=0;

    scanf("%i",&t);
    do{
        scanf("%i %i",&R1,&R2);
        printf("%i\n",R1+R2);
        
        i++;
    }while(i!=t);

    return 0;
}