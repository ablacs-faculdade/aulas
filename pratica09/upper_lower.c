#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    char string [11];
    char upper [11];
    char lower [11];
    printf("Digite a string: \n");
    fgets(string,sizeof(string),stdin);
    memset(upper,'\0',sizeof(upper));
    memset(lower,'\0',sizeof(lower));
    for (int i = 0; i<strlen(string);i++){
        upper[i]= toupper(string[i]);
        lower[i]= tolower(string[i]);
    }
}