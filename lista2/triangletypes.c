#include <stdio.h>

int main(){

    double A, B, C, troca, A2, B2, C2;
    int naoexistetriangulo, tri_retangulo, tri_obtusangulo,tri_acutangulo,tri_equilatero, tri_isosceles;

    //ENTRADA
    scanf("%lf %lf %lf",&A,&B,&C);
/*PARA GARANTIR QUE (A>B)&&(A>C)*/
    if ((A>B)==0){
        troca=B;
        B=A;
        A=troca;
    }
    if ((A>C)==0){
        troca=C;
        C=A;
        A=troca;
    }
    A2 = (A*A);
    B2 = (B*B);
    C2 = (C*C);

    //DEFINIÇÕES
    naoexistetriangulo = ((A)>=(B+C));
    tri_retangulo = ((A2)==(B2+C2));
    tri_obtusangulo = ((A2)>(B2+C2));
    tri_acutangulo = ((A2)<(B2+C2));
    tri_equilatero = (A==B&&A==C);
    tri_isosceles = (((A==C)||(A==B)||(B==C))&&(tri_equilatero==0)); 

    //ALGORITMO
    if (naoexistetriangulo){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (tri_retangulo){
            printf("TRIANGULO RETANGULO\n");
        }
        if(tri_obtusangulo){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(tri_acutangulo){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(tri_equilatero){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(tri_isosceles){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}