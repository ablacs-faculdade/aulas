#include <stdio.h>
int main (){
    for (int i = 0; i<35; i++){
        printf("=");
    };
    printf("\n\t%15s\n","NOTA LEGAL");
    for (int i = 0; i<35; i++){
        printf("=");
    };
    printf("\n%s \t%s \t%s","Produto","Qtd","Valor Unit");
    printf("\n%s \t%03i \t%.2f","Camiseta",2,39.99);
    printf("\n%s \t%s \t%03i \t%.2f","Calca","",1,89.99);
    printf("\n%s \t%03i \t%.2f\n","Meia Social",3,19.99);
    for (int i = 0; i<35; i++){
        printf("=");
    };
    printf("\n %s \t%s \t%.2f","Total:","",229.85);

    return 0;
}