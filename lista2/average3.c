#include <stdio.h>

int main(){

    double n1, n2, n3, n4, media,prova_rec;
    const int p1 = 2, p2 = 3, p3 = 4, p4 = 1, sumpesos = p1+p2+p3+p4;
    int cond;

    //ENTRADA
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    media = (n1*p1+n2*p2+n3*p3+n4*p4)/sumpesos;

    //SAIDA
    printf("Media: %.1lf\n",media);
    /*
    Condições:
    Média>=7.0 = Aprovado
    Média>=5 = Aluno em Exame
    Média<5.0 = Reprovado
    */
   if (media>=7.0){
    printf("Aluno aprovado.\n");
   }
   else if(media>=5.0){
    printf("Aluno em exame.\n");

    /*Nova entrada*/
    scanf("%lf",&prova_rec);
    printf("Nota do exame: %.1lf",prova_rec);
    media = (media + prova_rec)/2;
    
        cond = (media<5.0);
        switch(cond){
            case 0: //FALSO, media>=5.0
                printf("\nAluno aprovado.\n");
                break;
            case 1: //VERDADEIRO, media<5.0
                printf("\nAluno reprovado.\n");
                break;
        }
        printf("Media final: %.1lf\n",media);
   }
   else{
    printf("Aluno reprovado.\n");
   }


    return 0;
}