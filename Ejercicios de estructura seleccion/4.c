
#include <stdio.h>

int main() {
    float numero, resultado;

    // Leer el número ingresado por el usuario
    printf("Ingrese un número: ");
    scanf("%f", &numero);

    // Evaluar si el número es mayor o igual a 10
    if (numero >= 10) {
        // Calcular el triple si es mayor o igual a 10
        resultado = numero * 3;
    } else {
        // Calcular la cuarta parte si es menor a 10
        resultado = numero / 4;
    }

    // Mostrar el resultado
    printf("El resultado es: %.2f\n", resultado);

    return 0;
}
