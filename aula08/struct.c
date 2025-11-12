#include <stdio.h>
#include <string.h>
int main (){
    struct endereco{
        char uf[2];
        char cidade[30];
    };
    struct endereco meu_endereco;
    fgets(meu_endereco.uf,2,stdin);
    fgets(meu_endereco.cidade,30,stdin);

    struct contato{
        long int telefone;
        char nome [30];
        struct endereco endereco;
    };
    struct contato new_contato;
    fgets(new_contato.nome,30,stdin);
    scanf("%ld",&new_contato.telefone);
    strcpy(new_contato.endereco.uf, meu_endereco.uf);
    strcpy(new_contato.endereco.cidade, meu_endereco.cidade);
    printf("o contato %s mora na cidade %s",new_contato.nome,new_contato.endereco.cidade);


    struct contato agenda[10];
}