#include <stdio.h>
#include <stdlib.h>
int main (){
    int opcao = 0;
    while (opcao != 3){
        system("clear");
        printf("1 novo jogo\n");
        printf("2 ranking\n");
        printf("3 sair\n");
        printf("Escolha uma opcao\n");
        scanf("%i",&opcao);
        while (getchar()!= '\n');


    }
    return 0;
}