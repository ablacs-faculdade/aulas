#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int numero1;
    int numero2;
    printf("Digite o primeiro número: ");
    printf("\nDigite o segundo número: ");
    scanf("%i",numero1);
    scanf("%i",numero2);
    printf("%i é igual a %i? %i\n",numero1,numero2,numero1== numero2);
    printf("%i é menor que %i? %i\n",numero1,numero2,numero1<numero2);
    printf("%i é menor ou igual a %i? %i\n",numero1,numero2,numero1<=numero2);
    printf("%i é maior que %i? %i\n",numero1,numero2,numero1>numero2);
    printf("%i é maior ou igual a %i? %i\n",numero1,numero2,numero1>=numero2);
    
    
    return 0;
}