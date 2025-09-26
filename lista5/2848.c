#include <stdio.h>

void proc_q(int vet_res[5], int tam, int vet_ori[tam], int l);
void ord_vet(int tam, int vet[tam]);
int ext_menor(int coord, int tam, int vet[tam]);
int module(int a);

int main(){

    int N, Q;
    scanf("%i %i\n", &N, &Q);
    int vet[N];
    for (int i = 0; i<N; i++){
        scanf("%i", &vet[i]);
    }
    getchar();
    
    int vet_ent[Q][5];
    for (int i = 0; i<Q; i++){
        for (int j = 0; j<5; j++){
            scanf("%i", &vet_ent[i][j]);
        }
    }

    //PRINT
    for (int i = 0; i<Q; i++){ 
        proc_q(vet_ent[i], N, vet, i);
    }
    
    return 0;
}

void proc_q(int vet_res[5], int tam, int vet_ori[tam], int l){
    int L = vet_res[0]-1; int R = vet_res[1]-1; 
    int K = vet_res[2]; //Coordenada do menor termo
    int G = vet_res[3]; int D = vet_res[4];
    
    //1º passo
    int Ttemp = (R-L)+1; 
    int vet_temp[Ttemp];
    int j = 0;
    for (int i = L; i<=R; i++){
        vet_temp[j] = vet_ori[i];
        j++;
    }
    
    //2º passo
    int kmenor = ext_menor(K, Ttemp, vet_temp); //ISSO VAI ORDENAR O vet_temp
    int count = 0;
    for (int i = 0; i<Ttemp; i++){
        if (vet_temp[i]==kmenor){
            count++;
        }
    }

    //3º passo
    int dG = module(G-count);
    int dD = module(D-count);
    char win;
    if (dG<dD){
        win = 'G';
    }
    else if (dD<dG){
        win = 'D';
    }
    else{
        win = 'E' ;
    }

    //4º passo
    /*
    O QUE PRECISA PRO PRINT:
    kmenor - count - vencedor
    */
    printf("%i %i %c\n", kmenor, count, win);

    /*
    1 - CRIAR vetor_temp;✓
    2 - EXTRAIR O K-ENÉSIMO MENOR TERMO E FAZER SUA CONTAGEM;✓
    3 - VER QUEM FICA MAIS PRÓXIMO E DETERMINAR O VENCEDOR;✓
    4 - PREPARAR O result E PASSAR PARA MATRIZ;✓
    */
}

//FINALIZADO
int module(int a){
    if (a<0){
        a*=-1;
    }
    return a;
}

//FINALIZADA
int ext_menor(int coord, int tam, int vet[tam]){
    
    ord_vet(tam, vet);
    int menor = vet[coord-1];
    return menor;

}

//FINALIZADA
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