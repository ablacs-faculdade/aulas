#include <stdio.h>
int main (){
    const int LIMITE = 10;
    struct aluno_t{
        int matricula;
        char email[31];
    };
    struct aluno_t aluno[LIMITE];
    for (int i =0; i<LIMITE;i++){
        scanf("%i %s",&aluno->matricula,&aluno->email);
    };
    int matricula;
    printf("Digite a matricula:");
    scanf("%i",&matricula);
    int achou =-1;
    for ( int i =0; i<LIMITE;i++){
        if (matricula==aluno[i].matricula){
            achou = i; break;
        }
    };
    if (achou<0){
        printf("Matricula invalida");
    }
    else{
        printf("O email do aluno matricula %i e %s",aluno[achou].email);
    }
}