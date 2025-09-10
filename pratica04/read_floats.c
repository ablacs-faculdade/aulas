#include <stdio.h>
int main(){
    float price;
    double fraction;
    printf("Digite um preço: ");
    scanf("%f",&price);
    printf("Você digitou : %.2f\n",price);
    printf("Digite uma fração: ");
    scanf("%lf",&fraction);
    printf("Você digitou: %.10f\n",fraction);
    return 0;
}
