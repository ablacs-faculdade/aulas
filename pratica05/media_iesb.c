#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");
    float nota_a1;
    float nota_a2;
    printf("Digite a nota A1: \n");
    scanf("%f",&nota_a1);
    printf("Digite a nota A2: \n");
    scanf("%f",&nota_a2);
    float media_iesb = (nota_a1 * 0.4) + (nota_a2 * 0.6);
    printf("%.2f",media_iesb);
    
    return 0;
}