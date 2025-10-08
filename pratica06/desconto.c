#include <stdio.h>
int main (){
    float valor_bruto;
    float valor_desconto;
    printf("Digite o valor bruto :");
    scanf("%f",&valor_bruto);
    if (valor_bruto<100.00){
        valor_desconto = valor_bruto*0.01;
    }else{
        if(valor_bruto<=500.00){
            valor_desconto = valor_bruto * 0.05;
        }
        else{
            valor_desconto = valor_bruto * 0.01;
        }
    }
    return 0;
}