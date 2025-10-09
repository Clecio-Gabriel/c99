#include <stdio.h>

//vamos construir a base primeiro, para depois criar os múltiplos testes

void redirect(int n_f1, int d_f1, char op, int n_f2, int d_f2, int res[4]); //FUNÇÃO PRINCIPAL

int main(){ 

    int n1, d1; //frac.1
    int n2, d2; //frac.2
    char op;    //operator

    int t;
    do{
        scanf("%i", &t);
    }while((t<1)||(t>10000));

    for (int i = 0; i<t; i++){
        scanf("%i / %i %c %i / %i", &n1, &d1, &op, &n2, &d2);
        int result [4];
        redirect (n1, d1, op, n2, d2, result);
        printf("%i/%i = %i/%i\n", result[0], result[1], result[2], result[3]);
    }

}

void sum_sub(int n1, int d1, char op, int n2, int d2, int res[4]); //irei me aproveitar das similaridades dessas duas para utilzar a mesma função
void mult(int n1, int d1, int n2, int d2, int res[4]); //vou me aproveitar do conceito de div em frações
int mdc(int a,int b); //para auxiliar na simplificação
void simplify(int res[4]);

//DONE
void redirect(int n_f1, int d_f1, char op, int n_f2, int d_f2, int res[4]){

/*
primeiro passo:
    aproveitar dos argumentos para encaminhar para as operações corretas(acho que vou fazer uma cadeia de if mesmo)
segundo passo:
    após aplicar a função de operação e atribuir a res[0] e res[1] a resposta inicial, encaminhar esse vetor para a simplify
*/

if (op=='*'){
    mult(n_f1, d_f1, n_f2, d_f2, res);
}
else if (op=='/'){
    mult(n_f1, d_f1, d_f2, n_f2, res);
}
else{
    sum_sub(n_f1, d_f1, op, n_f2, d_f2, res);
}

simplify(res);

}

//DONE
void sum_sub(int n1, int d1, char op, int n2, int d2, int res[4]){
    if (op=='-') n2=-n2;
    res[0] = (n1*d2)+(n2*d1);
    res[1] = (d1*d2);
}

//DONE
void mult(int n1, int d1, int n2, int d2, int res[4]){
    //serei sucinto, deixarei a parte mais pegada para a func de sum_sub
    res[0] = (n1*n2);
    res[1] = (d1*d2);
}


//DONE
void simplify(int res[4]){
    int n = res[0]; int d = res[1];
    int div = mdc(n, d);

    int c = 2;
    for (int i = 0; i<2; i++){
        while (c<4){
            res[c] = res[i]/div;
            break;
        }
        c++;
    }
    
}

//DONE
int mdc(int a,int b){
    if (b==0){
        (a<0) ? (a=-a) : (a=a); //kinda like the module func
        return a;
    }

    else{
        return mdc(b, a%b);
    }
}