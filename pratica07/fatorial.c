#include <stdio.h>
int main (){
    int numero;
    int fatorial;
    printf("Digite o numero\n");
    scanf("%i",&numero);
    printf("Digite o fatorial\n");
    for (int i = numero; i>0;i--){
        fatorial = fatorial *i;
    }
    return 0;
}