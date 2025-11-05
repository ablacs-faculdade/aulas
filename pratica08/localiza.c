#include <stdio.h>
int main (){
    int numeros [10];
    int achou = -1;
    int numero;
    for (int i =0;i<9;i++){
        printf("Digite o numero\n");
        scanf("%i",&numeros[i]);
    }   
    printf("Escolha o numero: \n");
    scanf("%i", &numero);
    for (int i =0;i<9;i++){
        if (numeros[i]==numero){
            achou =i;
        }
        else{
            printf("O numero nao foi encontrado");
        }
    }   
}