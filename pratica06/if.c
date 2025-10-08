#include <stdio.h>
int main(){
    int nota;
    printf("Digite uma nota de 1 a 5: ");
    scanf("%i",&nota);
    switch(nota){
        case 1: printf("Sua avaliação foi de *\n");break;
        case 2: printf("Sua avaliação foi de **\n");break;
        case 3: printf("Sua avaliação foi de ***\n");break;
        case 4: printf("Sua avaliação foi de ****\n");break;
        case 5: printf("Sua avaliação foi de ******\n");break;
        default: printf("Nota invalida, tente novamente\n");
    }
    return 0;
}
