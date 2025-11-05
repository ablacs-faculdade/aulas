#include <stdio.h>
int main (){
    int numeros [] = {
        1,2,3,4,5,6,7,8,9,10,11,12,13
    };
    int totalSize = sizeof(numeros) / sizeof(numeros[0]);
    for (int i =0 ; i< totalSize ;i++){
        printf("%i ", numeros[i]);
    }
    for (int i =0; i<10; i++){
        printf("Digite o numero da %i posicao: " , i+1);
        scanf("%i", &numeros[i]);
    }
    for (int i =0 ; i<10;i++){
        printf("%i ", numeros[i]);
    }
}