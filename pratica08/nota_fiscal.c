#include <stdio.h>
int main (){
    float total = 0.0;
    float nota_fiscal[5][3];
    for (int i=0;i<5;i++){
        printf("Digite o valor da posicao");
        scanf("%f",&nota_fiscal[i][0]);
        printf("Digite o valor da posicao");
        scanf("%f",&nota_fiscal[i][1]);
        nota_fiscal[i][2]=nota_fiscal[i][0]*nota_fiscal[i][1];
        total=total+nota_fiscal[1][2];
    }
    for (int i =0;i<5;i++){
        for (int j=0;j<3;j++){
            printf("o valor e %f",nota_fiscal[i][j]);
        }
    }

}