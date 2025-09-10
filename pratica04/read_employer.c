#include <stdio.h>
int main(){
    int codigo;
    char nome[31];
    float salario;
    printf("Digite o codigo o nome e o salario do funcionario ");
    scanf("\n%i %s %f",&codigo,&nome,&salario);
    printf("\ncodigo: %i, nome: %s, salario: %.2f",codigo,nome,salario);
    return 0;
}