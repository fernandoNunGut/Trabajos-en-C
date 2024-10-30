#include <stdio.h>
#include <string.h>

// Función para desencriptar una palabra
void desencriptar(char palabra[]) {
    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == 'u') {
            palabra[i] = 'n';
        } else if (palabra[i] == '!') {
            palabra[i] = 'i';
        } else if (palabra[i] == 'X') {
            palabra[i] = 'G';
        }
    }
}

int main() {
    char palabra[50];  // Declaramos una variable para almacenar la palabra encriptada
    printf("Ingrese la palabra a desencriptar: ");
    scanf("%s", palabra);  // Pedimos al usuario que ingrese la palabra a desencriptar

    desencriptar(palabra);  // Llamamos a la función de desencriptación

    printf("El mensaje descifrado es: %s\n", palabra);  // Mostramos la palabra desencriptada
    return 0;
}
