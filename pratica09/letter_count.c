#include <stdio.h>
#include <string.h>
int main (){
    char frase [31];
    printf("Digite a frase:\n");
    fgets(frase,sizeof(frase),stdin);
    printf("Digite a letra:\n");
    char letra;
    scanf("%c",&letra);
    int quant=0;
    for (int i = 0; i<strlen(frase);i++){
        if (frase[i]==letra){
            quant++;
        }
    }
    if (quant>0){
        printf("%i",quant);
    }else{
        printf("A frase nao contem a letra!");
    }
}