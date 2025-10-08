#include <stdio.h>
int main (){
    int dia;
    printf("Digite o dia da semana: ");
    switch (dia)
    {
    case 1:
        Printf(" o dia da semana %d é uma segunda");
        break;
    case 2:
        Printf(" o dia da semana %d é uma terça");
        break;
    case 3:
        Printf(" o dia da semana %d é uma quarta");
        break;
    case 4:
        Printf(" o dia da semana %d é uma quinta");
        break;
    case 5:
        Printf(" o dia da semana %d é uma sexta");
        break;
    case 6:
        Printf(" o dia da semana %d é um sabado");
        break;
    case 7:
        Printf(" o dia da semana %d é um domingo");
        break;
    
    default: printf("O dia inserido nao e valido");
        break;
    }
    return 0;
    
}