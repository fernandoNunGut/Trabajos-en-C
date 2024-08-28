#include <stdio.h>

int main() {
    float notas[5]; // Array para almacenar las 5 notas
    float suma = 0.0; // Variable para calcular la suma de las notas
    float promedio; // Variable para calcular el promedio

    // Pedir las 5 notas al usuario con restricciones
    for (int i = 0; i < 5; i++) {
        float nota;
        do {
            printf("Ingrese la nota %d (con máximo 2 decimales, entre 0 y 7): ", i + 1);
            scanf("%f", &nota);
            if (nota < 0 || nota > 7) {
                printf("Nota inválida. Por favor, ingrese una nota entre 0 y 7.\n");
            }
        } while (nota < 0 || nota > 7);
        notas[i] = nota;
    }

    // Calcular la suma de las notas
    for (int i = 0; i < 5; i++) {
        suma += notas[i];
    }

    // Calcular el promedio
    promedio = suma / 5.0;

    // Mostrar el promedio
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}