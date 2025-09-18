#include <stdio.h>

int main(){
    
    int countnum=0, count1=0, entrada;
    char bits[101];

    scanf("%s", &bits);
    
    for (int i = 0; i<100; i++){
        if(bits[i]=='1'){
            count1+=1;
        }
        else if(bits[i]!='1'&&bits[i]!='0'){
            break;
        }
        countnum +=1;
    }

    if ((count1%2)==0){
        bits[countnum] = '0';
    }
    else{
        bits[countnum] = '1';
    }
    bits[countnum+1] = '\0';

    printf("%s\n",bits);

    return 0;
}