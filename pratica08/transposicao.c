#include <stdio.h>
int main (){
    char frase[31];
    scanf("%c",&frase);
    char matriz[6][5];
    int k =0;
    for(int i =0;i<5;i++){
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] =k;
            k++;
        }
        
    }   
    printf("A transposicao eh ");
}