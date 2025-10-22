#include <stdio.h>
int main (){
    int numero;
    printf("Digite o numero: \n");
    scanf("%i", &numero);
    for (int i=0; i<100; i++){
        if ( i% numero == 0){
            printf("%i",i);
        }
    }
    return 0;
}