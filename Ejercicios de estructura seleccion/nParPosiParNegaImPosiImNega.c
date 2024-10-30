#include <stdio.h>

int main(void)
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    if (n % 2 == 0 && n > 0)
        printf("El numero %d es par positivo\n", n);
    else if (n % 2 != 0 && n > 0)
        printf("El numero %d es impar positivo\n", n);
    else if (n % 2 == 0 && n < 0)
        printf("El numero %d es par negativo\n", n);
    else if (n % 2 != 0 && n < 0)
        printf("El numero %d es impar negativo\n", n);
    else
        printf("El numero es nulo");
    return 0;
}