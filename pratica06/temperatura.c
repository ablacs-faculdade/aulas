#include<stdio.h>
int main (){
    float temperatura;
    if (temperatura > 40.0){
        printf("Muito quente");
    }else if (temperatura>30.0 && temperatura<40.0)
    {
        printf("Quente");
    }else if (temperatura > 20.0 && temperatura < 30.0)
    {
        printf("Agradavel");
    }else{
        printf("Frio");
    }
    
    
    return 0;
}