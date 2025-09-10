#include <stdio.h>
int main(){
    int Matricula = 00000000;
    int idade = 99;
    float altura = 9.9;
    float peso = 999.0;
    char sexo = 'f';
    printf("Matricula : %08d ", Matricula);
    printf("\nIdade : %i anos", idade);
    printf("\nAltura : %.2f m", altura);
    printf("\nPeso : %.1f kg", peso);
    printf("\nSexo : %c", sexo);
    return 0;
}