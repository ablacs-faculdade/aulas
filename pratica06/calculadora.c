#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    int operacao;
    printf("Digite a operacao: 1 para soma, 2 para subtracao, 3 para divisao e 4 para multiplicacao ");
    scanf("%i", &operacao);
    float numero1;
    float numero2;
    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    switch (operacao)
    {
    case 1:
        printf("%.2f + %.2f = %.2f",numero1,numero2,numero1+numero2);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f",numero1,numero2,numero1-numero2);
        break;
    case 3:
        printf("%.2f / %.2f = %.2f",numero1,numero2,numero1/numero2);
        break;
    case 4:
        printf("%.2f * %.2f = %.2f",numero1,numero2,numero1*numero2);
        break;

    
    default:
        printf("Operacao invalida");
        break;
    }
    

    
    return 0;
}