#include <stdio.h>
#include <string.h>

#define t 100000
#define q 5

int cmp(char str[], char in[], int size, int lim);
int smaller(int vet[], int res[2]);

int main(){

    char strini [t];
    int leni;
    do{
        scanf("%[^\n]", strini);
        leni = strlen(strini);
    } while (leni<1);
    
    int k;
    do{
        scanf("%i", &k);
    } while((k<1)||(k>100));
    getchar();

    int arr_comp[q] = {0};
    char in[t+2];
    char mat_in[q][t];
    for (int i = 0; i < q; i++){
        fgets(in, t+2, stdin);
        arr_comp[i] = cmp(strini, in, leni, k);
        strcpy(mat_in[i], in);
    }

    int vet_res[2], cond;
    cond = smaller(arr_comp, vet_res);
    switch(cond){
        case 0:
        printf("%i\n", vet_res[0]);
        break;

        case 1:
        printf("%i\n%i\n", vet_res[0], vet_res[1]);
        break;
    }
    
}

int cmp(char str[], char in[], int size, int lim){
    int cmp_n = 0;
    for (int i = 0; i<size; i++){
        if (in[i]!=str[i]){
            cmp_n++;
        }
        if (cmp_n>lim){
            cmp_n = -1;
            break;
        }
    }

    return cmp_n;

}

int smaller(int vet[], int res[2]){
    int ind = 0, small = vet[0];
    for (int i = 1; i<q; i++){
        if ((small==-1)&&(vet[i]!=-1)){
            small = vet[i];
            ind = i;
            continue;
        }
        if ((vet[i]<small)&&(vet[i]!=-1)){
            small = vet[i];
            ind = i;
        }
    }

    res[0] = ind+1;

    if (small==-1){
        return 0;
    }
    else{
        res[1] = small;
        return 1;
    }

}