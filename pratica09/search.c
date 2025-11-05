#include <stdio.h>
#include <string.h>
int main (){
    char names [10][101];
    for (int i=0; i<10;i++){
        printf("digite a posicao i da variavel nomes");
        fgets(names[i],sizeof(names),stdin);
    }
    char last_name[11];
    printf("digite o sobrenome\n");
    fgets(last_name,sizeof(last_name),stdin);
    int achou = 0;
    for (int i = 0; i<9;i++){
        if (strstr(names[i],last_name)){
            printf("%s\n",names[i]);
            achou = 1;
        }
    }
    if(achou ==0){
        printf("nenhum nome tem o sobrenome");
    }

    
}