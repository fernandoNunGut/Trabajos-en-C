#include <stdio.h>
#include <stdlib.h>

// Prototipos de funciones
void mostrarMenu();
float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        // Mostrar el menú de opciones
        mostrarMenu();
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        // Validar la opción ingresada
        if (opcion < 1 || opcion > 5) {
            printf("Opcion no valida. Por favor, intente de nuevo.\n\n");
            continue;
        }

        if (opcion == 5) {
            printf("Saliendo...\n");
            break;
        }

        // Solicitar los números al usuario
        printf("Ingrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);

        // Realizar la operación seleccionada
        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = dividir(num1, num2);
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                } else {
                    printf("Error: No se puede dividir entre cero.\n");
                }
                break;
            default:
                printf("Opcion no valida. Por favor, intente de nuevo.\n");
        }

        printf("\n");

    } while (opcion != 5);

    return 0;
}

// Función para mostrar el menú de opciones
void mostrarMenu() {
    printf("Calculadora en C Mejorada\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
}

// Función para sumar dos números
float sumar(float a, float b) {
    return a + b;
}

// Función para restar dos números
float restar(float a, float b) {
    return a - b;
}

// Función para multiplicar dos números
float multiplicar(float a, float b) {
    return a * b;
}

// Función para dividir dos números
float dividir(float a, float b) {
    return a / b;
}
