#include<stdio.h>
#include <math.h>
int main (){
    int a;
    int b;
    int c;
    printf("Digite as variáveis a, b e c\n");
    scanf("%d %d %d", &a, &b, &c);
    float delta = b*b - 4*a*c;
    if (delta<0){
        printf("A equacao nao tem raizes reais");

    }else{
        float x1 = (-b + sqrt(delta)) /2*a;
        float x2 = (-b - sqrt(delta)) /2*a;
        printf("a primeira raiz e %f e a segunda e %f",x1,x2);
    }
    return 0;
}