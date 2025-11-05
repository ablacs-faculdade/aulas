#include <stdio.h>
#include <string.h>
int main (){
    char nome[30];
    // ler string
    printf("Digite o nome: ");
    fgets(nome,sizeof(nome),stdin);
    // preencher string
    memset(nome,'a',sizeof(nome));
    // copiar
    strcpy(nome,"TEste");
    //concatenar
    strcat(nome,"Jose");
    // tamanho strlen(nome)

    
    // comparar strings strcmp(nome, "string para comparar") :
    //<0 sao diferentes e o primeiro nome vem antes
    // >0 diferentes e o segundo vem primeiro
    // ==0 sao iguais


    
    printf("Os nomes sao iguais %i ?",strcmp("teste","Teste"));
    // checar se tem caractere strchar(string, caractere) =0 nao existe

    // string em string strstr(primeira, string que quer checar se existe)
    //
}