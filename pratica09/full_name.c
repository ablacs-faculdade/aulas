#include <stdio.h>
#include <string.h>
int main (){
    char first_name [11];
    char last_name [11];
    printf("Digite o primeiro nome:\n");
    fgets(first_name,sizeof(first_name),stdin);
    printf("Digite o ultimo nome:\n");
    fgets(last_name,sizeof(first_name),stdin);
    char nome[31];
    strcpy(nome,first_name);
    strcat(nome," ");
    strcat(nome, last_name);
    printf("o nome e :%s",nome);
}