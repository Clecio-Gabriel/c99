#include <stdio.h>

int main(){

    int num, highest, position;
    for (int i = 1; i <= 100; i++){
        scanf("%i",&num);
        switch(i){
            case 1:
                highest = num;

            default:
                if (num>highest){
                    highest = num;
                    position = i;
                }
        }
    }

    printf("%i\n%i\n",highest, position);

    return 0;
}