#include <stdio.h>
int main(){
    int numero;
    int x;
    int y;
    printf("Digite um numero inteiro ");
    scanf("%i",&numero);
    printf("Digite as coordenadas x e y: ");
    scanf("\n%i %i",&x, &y);
    printf("Você digitou: %i e %i\n",x,y);
    printf("Você digitou: %i\n",numero);
    return 0;
}