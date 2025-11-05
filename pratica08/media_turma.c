#include <stdio.h>
int main (){
    float notas[10];
    float soma;
    float media;
    int qtd;
    for (int i =0;i<10;i++){
        scanf("%f",&notas[i]);
        soma = soma+notas[i];
    }
    media = soma/10;
    for (int i=0;i<10;i++){
        if (notas[i]>media){
            qtd++;
        }
    }
    printf("%i",qtd);
    printf("%f",media);

}