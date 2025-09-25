#include <stdio.h>

void proc_q(int vet_res[5], int tam, int vet_ori[tam], int l, char mat_res[][3]);
void ord_vet(int tam, int vet[tam]);
int ext_menor(int coord, int tam, int vet[tam]);
void pass_res(char vet[3], int l, char mat[][3]);

int main(){

    int N, Q;
    scanf("%i %i\n", &N, &Q);
    int vet[N];
    for (int i = 0; i<N; i++){
        scanf("%i", &vet[i]);
    }
    char result[Q][3];
    
    int vet_ent[5];
    for (int i = 0; i<Q; i++){
        for (int j = 0; j<5; j++){
            scanf("%i", &vet_ent[i]);
        }
        proc_q(vet_ent, N, vet, i, result);
    }
    


    
    return 0;
}

void proc_q(int vet_res[5], int tam, int vet_ori[tam], int l, char mat_res[][3]){
    int L = vet_res[0]-1; int R = vet_res[1]-1; 
    int K = vet_res[2]; //Coordenada do menor termo
    int G = vet_res[3]; int D = vet_res[4];
    
    int kmenor = ext_menor(K, tam, vet_ori);



    /*
    1 - ORDENAR TERMO DE FORMA CRESCENTE(para usar o K como coordenada no vetor original);
    2 - EXTRAIR O K-ENÉSIMO MENOR TERMO;
    */

    char result[3];
    
    pass_res(result, l, mat_res);
}

int ext_menor(int coord, int tam, int vet[tam]){
    ord_vet(tam, vet);
    int menor, count;
    /*
    1 - CHECAR QUAL É O K-nésimo termo
    */
}

void pass_res(char vet[3], int l, char mat[][3]){
    for (int i = 0; i<3; i++){
        mat[l][i] = vet[i];
    }
}

void ord_vet(int tam, int vet[tam]){
    
    int temp;
    for (int i = 0; i<tam; i++){
        for (int j = i+1; j<tam; j++){
            if (vet[i]>vet[j]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
    
}