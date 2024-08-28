/*
Desarrolle un programa que lea de teclado un numero real (n), entre 0 y 10 y clasifique la entrada según:

n = 10 => Matricula de Honor
9 <= n < 10 => Sobresaliente
7 <= n < 9 => Notable
5 <= n < 7 => Aprobado
0 <= n < 5 => Suspenso
En otro caso => Error de entrada
*/

#include <stdio.h>

int main() {
    float n;  // Variable para almacenar el número real ingresado

    // Solicita al usuario que ingrese un número real
    printf("Introduce un número real entre 0 y 10: ");
    scanf("%f", &n);

    // Clasificación según el valor de n
    if (n == 10) {
        printf("Matricula de Honor\n");
    } else if (n >= 9 && n < 10) {
        printf("Sobresaliente\n");
    } else if (n >= 7 && n < 9) {
        printf("Notable\n");
    } else if (n >= 5 && n < 7) {
        printf("Aprobado\n");
    } else if (n >= 0 && n < 5) {
        printf("Suspenso\n");
    } else {
        printf("Error de entrada\n");  // Caso en que el número no está en el rango permitido
    }

    return 0;
}
