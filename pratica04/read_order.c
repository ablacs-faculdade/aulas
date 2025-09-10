#include <stdio.h>
int main(){
    char produto[21];
    int quantidade;
    float valor;
    printf("Digite o produto, a quantidade e o valor: ");
    scanf("%s %d %f",&produto,&quantidade,&valor);
    for (int i=0;i<25; i++){
        printf("=");
    }
    printf("\nP E D I D O\n");
    for (int i=0;i<25; i++){
        printf("=");
    }
    printf("\n%-10s %5s %8s\n","Produto","Qtd","Valor");
    printf("%-10s %05i %8.2f\n",produto,quantidade,valor);
    for (int i=0;i<25; i++){
        printf("=");
    }
    return 0;
}