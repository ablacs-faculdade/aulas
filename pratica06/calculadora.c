#include <stdio.h>
int main (){
    char operacao;
    printf("Digite a operacao: ");
    scanf("%c", &operacao);
    float numero1;
    float numero2;
    if (operacao == "Somar" || operacao == "somar" || operacao == "adicao"){
        printf("%f",numero1+numero2);
    }
    return 0;
}