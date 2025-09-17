#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");
    int p;
    int q;
    printf("Digite o valor de p");
    printf("Digite o valor de q");
    scanf("%i",p);
    scanf("%i",q);
    printf("%i && %i = %i\n",p,q, p&&q);
    printf("%i !! %i = %i\n", p, q, p || q);
    printf("!%i = %i\n", p, !p);
    printf("!%i = %i\n", q, !q);

    return 0;
}