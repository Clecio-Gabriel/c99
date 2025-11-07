#include <stdio.h>
#include <string.h>

#define t 100002
#define ip 100000
#define q 5

int cmp(char str[], char in[], int sizeA, int sizeB, int lim);
int smaller(int vet[], int res[2]);

int main(){

    char strini [t];
    int leno, lepi;
    do{
        fgets(strini, ip, stdin);
        leno = strlen(strini);
    } while (leno<1);

    int k;
    do{
        scanf("%i", &k);
    } while((k<1)||(k>100));
    getchar();

    int arr_comp[q] = {0};
    char in[t];
    char mat_in[q][t];
    for (int i = 0; i < q; i++){
        fgets(in, ip, stdin);
        lepi = strlen(in);
        arr_comp[i] = cmp(strini, in, lepi, leno, k);
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

void const_base(int m, int n ,int mat[m][n]);
int min(int vet[3]);

int cmp(char str[], char in[], int sizeA, int sizeB, int lim){
    int mat[sizeA][sizeB];
    const_base(sizeA, sizeB, mat);
    int A = sizeA-1, B = sizeB-1;
    int cmp, cond;

    //construção do restante da matriz, tal que o termo de index final será o retorno
    for (int i = 0; i<A; i++){
        for (int j = 0; j<B; j++){
            if (str[j]==in[i]){
                mat[i+1][j+1] = mat[i][j];
            }
            else{
                int lista[] = {mat[i][j], mat[i][j+1], mat[i+1][j]};
                mat[i+1][j+1] = min(lista) + 1;
            }
        }
    }

    if (cond==0){
        int res_mat = mat[A][B];
        if (res_mat>lim) cmp = -1;
        else cmp = res_mat;
    }
    else cmp = -1;
    return cmp;
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

void const_base(int A, int B ,int mat[A][B]){
    //constuir a coluna
    for (int i = 0; i<A; i++){
        mat[i][0] = i;
    }

    //construir a linha
    for (int j = 1; j<B; j++){
        mat[0][j] = j;
    }

}

int min(int vet[3]){
    int min = vet[0];
    for (int i = 1; i<3; i++){
        if (min>vet[i]){
            min = vet[i];
        }
    }
    
    return min;
}