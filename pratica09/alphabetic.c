#include <stdio.h>
#include <string.h>
int main (){
    char palavra1 [11];
    char palavra2 [11];
    printf("Digite a primeira palavra\n");
    fgets(palavra1,sizeof(palavra1),stdin);
    printf("Digite a segunda palavra\n");
    fgets(palavra2,sizeof(palavra2),stdin);
    if (strcmp(palavra1,palavra2)>= 0){
        printf("%s eh a palavra 2",palavra2);
        printf("%s eh a palavra 1",palavra1);
    }else{
        printf("%s eh a palavra 1",palavra1);
        printf("%s eh a palavra 2",palavra2);
    }
}