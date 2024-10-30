#include <stdio.h>

int main(void){

    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    if(n > 0){
        printf("Positivo\n");
    }
    else if(n < 0){
        printf("Negativo\n");
    }
    else{
        printf("Número nulo\n");
    }
    return 0;
}