#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"");
    int numero;
    printf("Digite o número: ");
    scanf("%i",&numero);
    int milhares = numero /1000;
    int centenas = (numero % 1000)/100;
    int dezenas = (numero % 100)/10;
    int unidades = (numero % 10);
    printf("O número %i é decomposto em %i milhar(es), %i centena(s), %i dezena(s) e %i unidade(s)",numero,milhares,centenas,dezenas,unidades);
    return 0;
}