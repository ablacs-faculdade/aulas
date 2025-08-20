#include <stdio.h>

int main (){

    printf("Hello World");
    printf("----------------\n\n");
    printf("N O T A  L E G A L\n");
    printf("Carderno    1   10.00\n");
    printf("Lápis       2   5.00\n");
    printf("Borracha    1   7.50\n");
    printf("%s %i %.2f\n", "Caderno",1,10.0);
    printf("--------------------\n");
    printf("Total ......:  22.50\n");

    printf("%-15s %03i %6.2f \n", "Lápis", 2,5.0);
    printf("%-15s %03i %6.2f \n", "Caderno", 1,100.0);
    return 0;

}