#include <stdio.h>
#include <string.h>

/* Aca usamos la función "" strlen "" para obtener la longitud de una cadena de caracteres.
    strlen devuelve la longitud de una cadena de caracteres.
*/

int main() {
    char dominio[50];  // Variable para almacenar el dominio con un maximo de 50 caracteres
    int asistentes = 0;  // Contador de personas con acceso permitido

    while (1) {
        printf("Ingrese el dominio a analizar (o escriba 'Salir' para finalizar): "); 
        scanf("%s", dominio);  // Leer el dominio ingresado por el usuario

        // Verificar si el usuario quiere salir del programa  
        if (strcmp(dominio, "Salir") == 0) {
            break;
        }

        // Verificar que el dominio comience con '@' y no exceda los 15 caracteres 
        if (dominio[0] == '@' && strlen(dominio) <= 15) {
            printf("Dominio válido, acceso permitido.\n");
            asistentes++;  // Aumentar el contador de personas con acceso permitido 
        } else {
            printf("Acceso denegado.\n");  // Si el dominio no es válido, muestra un mensaje de error
        }
    }

    // Mostrar el total de asistentes que ingresaron a la reunión 
    printf("\nUn total de %d personas asistieron a la reunión.\n", asistentes);

    return 0;
}
