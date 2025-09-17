#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"");
    float ICMS =17/100;
    float CONFIS = 7.6/100;
    float PIS_PASEP = 1.65/100;
    float initial_price;
    printf("Digite o preço inicial: ");
    scanf("%f",&initial_price);
    float valor_icms = ICMS * initial_price;
    printf("%f",initial_price);
    printf("\n%f",valor_icms);

    float valor_confis = CONFIS * initial_price;
    float valor_pis_pasep = PIS_PASEP * initial_price;
    float total = initial_price -valor_confis-valor_icms-valor_pis_pasep;
    printf("Preço inicial..........: R$ %.2f\n",initial_price);
    printf("Valor ICMS (17%%).......: R$ %.2f\n",valor_icms);
    printf("Valor CONFIS (7,6%%)....: R$ %.2f\n",valor_confis);
    printf("Valor PIS/PASEP (1,65%%): R$ %.2f\n",valor_pis_pasep);
    printf("Preço final............:%.2f",total);

    return 0;
}