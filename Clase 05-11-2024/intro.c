#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void main() {
    // Definir arreglos que corresponden a los emoticones
    char *positivo[4] = {":)", ":D", ";)", ";3"};
    char *neutro[4] = {":|", ":/", ":P", ":O"};
    char *negativo[3] = {":(", ":'(", ":*"};

    // Contadores
    int contadorPositivo, contadorNegativo, contadorNeutro;
    contadorPositivo = contadorNegativo = contadorNeutro = 0;
    char frase[150]; // Se ajusta el tamaño para aceptar frases más largas
    fgets(frase, 150, stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Eliminar el salto de línea

    printf("La frase ingresada es: %s\n", frase);

    // Reemplazar los emoticones por sus correspondientes palabras
    for (int i = 0; i < 4; i++) {
        if (strstr(frase, positivo[i])) {
            contadorPositivo++;
            // Reemplazar el emoticono por la palabra "feliz"
            char *pos = strstr(frase, positivo[i]);
            while (pos != NULL) {
                strncpy(pos, "feliz", 5);  // Reemplaza el emoticono por "feliz"
                pos = strstr(pos + 5, positivo[i]);  // Busca otro emoticono
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (strstr(frase, neutro[i])) {
            contadorNeutro++;
            // Reemplazar el emoticono por la palabra "neutro"
            char *pos = strstr(frase, neutro[i]);
            while (pos != NULL) {
                strncpy(pos, "neutro", 6);  // Reemplaza el emoticono por "neutro"
                pos = strstr(pos + 6, neutro[i]);  // Busca otro emoticono
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (strstr(frase, negativo[i])) {
            contadorNegativo++;
            // Reemplazar el emoticono por la palabra "triste"
            char *pos = strstr(frase, negativo[i]);
            while (pos != NULL) {
                strncpy(pos, "triste", 6);  // Reemplaza el emoticono por "triste"
                pos = strstr(pos + 6, negativo[i]);  // Busca otro emoticono
            }
        }
    }

    // Imprimir la frase modificada según los emoticonos encontrados
    if (contadorPositivo > contadorNeutro && contadorPositivo > contadorNegativo) {
        printf("La frase modificada es: %s\n", frase);
        printf("La frase es feliz.\n");
    } else if (contadorNeutro > contadorPositivo && contadorNeutro > contadorNegativo) {
        printf("La frase modificada es: %s\n", frase);
        printf("La frase es neutra.\n");
    } else if (contadorNegativo > contadorNeutro && contadorNegativo > contadorPositivo) {
        printf("La frase modificada es: %s\n", frase);
        printf("La frase es triste.\n");
    } else {
        printf("La frase ingresada contiene emoticonos no reconocidos o inválidos.\n");
    }
}
