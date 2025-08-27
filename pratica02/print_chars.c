#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "");
    printf("%c\n",'A');
    printf("%i\n",'A');
    printf("%s\n","Eu estou aprendendo a programar em C!");
    printf("%20s\n","Café");
    printf("%-20s\n","Café");
    return 0;
}