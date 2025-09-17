#include<stdio.h>
#include<locale.h>
int main(){
     setlocale(LC_ALL,"");
    int numero1;
    int numero2;
    float numero3;
    printf("Digite um número inteiro: ");
    scanf("%i",&numero1);
    printf("Digite o segundo inteiro: ");
    scanf("%i",&numero2);
    printf("Digite o número flutuante: ");
    scanf("%f",&numero3);
    int soma = numero1+numero2;
    printf("A soma de %i com %i é igual a %i\n",numero1,numero2,soma);
    printf("O número flutuante é %.2f\n",numero3);
    int sub = numero1-numero2;
    printf("A subtração de %i menos %i é igual a %i\n",numero1,numero2,sub);
    int multi = numero1*numero2;
    printf("A multiplicação de %i com %i é igual a %i\n",numero1,numero2,multi);
    int divisao = numero1 / numero2;
    printf("A divisão de %i por %i é igual a %i\n",numero1,numero2,divisao);
    int resto_divisao = numero1 % numero2;
    printf("A divisão de %i por %i é igual a %i\n",numero1,numero2,resto_divisao);
    float divisao_fracionada = numero1 / numero3;
    printf("A divisão fracionada de %i por %f é igual a %f\n",numero1,numero3,divisao_fracionada);

    

    return 0;
}