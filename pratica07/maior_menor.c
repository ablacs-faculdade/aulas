#include <stdio.h>
int main (){
    int numero;
    int maior;
    int menor;
    printf("Digite o numero\n");
    scanf("%i",&numero);
    maior = numero;
    menor = numero;
    while (!numero){
        if (numero> maior){
            maior = numero;
        }
        else if (numero < menor){
            menor = numero;
        }
        scanf("%i",&numero);
        printf("%i",maior);
        printf("%i",menor);
    }
    return 0;
}