#include <stdio.h>
int main(){
    char tecla;
    char nome[31];
    printf("Digite uma tecla: ");
    scanf("%c",&tecla);
    printf("\nVocê digitou a tecla: ",tecla);
    printf("\nDigite seu nome: ");
    scanf("%[^\n]s",&nome);
    printf("Você digitou %s\n",nome);
    return 0;
}
