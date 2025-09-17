#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int numero;
    printf("Digite um número inteiro");
    scanf("%i",&numero);
    int increase=numero;
    int decrease=numero;
    printf("O valor do número é: %i",numero);
    printf("O pre-incremento do número %i é %i\n",numero,++increase);
    printf("O pre-decremento do número %i é %i\n",numero,--decrease);
    printf("O valor do número é: %i",numero);
    printf("O pós-incremento do número %i é %i\n",numero,numero++);
    printf("O pós-decremento do número %i é %i\n",numero,numero--);
    return 0;
}
