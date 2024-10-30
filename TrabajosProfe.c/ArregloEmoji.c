#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define NUM_EMOTICONOS 11
#define EMOTICONO_0 ":)"
#define EMOTICONO_1 ":("
#define EMOTICONO_2 ":D"
#define EMOTICONO_3 ":O"
#define EMOTICONO_4 ";)"
#define EMOTICONO_5 ":P"
#define EMOTICONO_6 ":'("
#define EMOTICONO_7 ":|"
#define EMOTICONO_8 ":/"
#define EMOTICONO_9 ":3"
#define EMOTICONO_10 ":*"

#define SIGNIFICADO_0 "Feliz"
#define SIGNIFICADO_1 "Triste"
#define SIGNIFICADO_2 "Muy feliz"
#define SIGNIFICADO_3 "Sorprendido"
#define SIGNIFICADO_4 "Guiñando un ojo"
#define SIGNIFICADO_5 "Sacando la lengua"
#define SIGNIFICADO_6 "Llorando"
#define SIGNIFICADO_7 "Neutral"
#define SIGNIFICADO_8 "Indeciso o dudoso"
#define SIGNIFICADO_9 "Coqueto"
#define SIGNIFICADO_10 "Besucón"

// Función para leer la entrada del usuario
void LeeCadena(char entrada_usuario[]) {
    char entrada[10];  // Asigna un tamaño mayor para capturar bien la entrada
    fgets(entrada, sizeof(entrada), stdin); // como un scanf pero más bkn
    
    // Eliminar el salto de línea si está presente
    if (entrada[strlen(entrada) - 1] == '\n') { // si el último caracter es un salto de línea
        entrada[strlen(entrada) - 1] = '\0'; // eliminar el salto de línea
    }
    
    strcpy(entrada_usuario, entrada); // Copia a entrada_usuario
}

// Procesa la cadena, separando el emoticono y el número de repeticiones
int ProcesaCadena(char entrada_usuario[], char se[]) {
    // Obtener el primer token (emoticono)
    char *token = strtok(entrada_usuario, " "); // token es el primer token de la cadena
    int n, pasada = 0;
    
    while (token != NULL) {
        pasada++; // aumentar el contador de pasadas
        if (pasada == 1) {
            strcpy(se, token);  // Copiar el emoticono en `se`
        } else if (pasada == 2) {
            n = atoi(token);  // Convertir el número de repeticiones a entero
        }
        token = strtok(NULL, " ");// pasar al siguiente token
    }
    return n;
}

// Genera la respuesta en función del emoticono y el número de repeticiones
void GeneraRespuesta(char emo[NUM_EMOTICONOS][6], char sig[NUM_EMOTICONOS][20], char se[], int n) {
    int i, pos_encontrada = -1; // i es el índice de la posición del emoticono en el arreglo

    for (i = 0; i < NUM_EMOTICONOS; i++) { // recorrer el arreglo
        if (strcmp(emo[i], se) == 0) { // si coincide el emoticono
            pos_encontrada = i; // guardar la posición del emoticono
            break; // salir del bucle
        }
    }

    // Verificación de existencia del emoticono
    if (pos_encontrada == -1) {
        printf("No existe emoji :(\n");
    } else {
        printf("%d %s %s\n", n, n == 1 ? "vez" : "veces", sig[pos_encontrada]); // imprimir el numero de veces que se repite y el significado del emoji
    }
}

int main() {

    // Solicitar entrada al usuario
    printf("Ingrese el emoticono seguido del número de repeticiones (ej. :) 2): ");

    // Arreglo de emoticonos (cada uno de 6 caracteres)
    char emoticonos[NUM_EMOTICONOS][6] = {
        EMOTICONO_0, EMOTICONO_1, EMOTICONO_2, EMOTICONO_3, EMOTICONO_4,
        EMOTICONO_5, EMOTICONO_6, EMOTICONO_7, EMOTICONO_8, EMOTICONO_9, EMOTICONO_10
    };

    // Arreglo de significados (cada uno de 20 caracteres)
    char significados[NUM_EMOTICONOS][20] = {
        SIGNIFICADO_0, SIGNIFICADO_1, SIGNIFICADO_2, SIGNIFICADO_3, SIGNIFICADO_4,
        SIGNIFICADO_5, SIGNIFICADO_6, SIGNIFICADO_7, SIGNIFICADO_8, SIGNIFICADO_9, SIGNIFICADO_10
    };

    char entrada_usuario[10] = "";  // Entrada del usuario (aumentada a 10 caracteres) 
    char soloemoji[5] = "";         // Subcadena para almacenar solo el emoji
    int num = 0;                    // Para almacenar el número de repeticiones

    // Llamada a las funciones
    LeeCadena(entrada_usuario);
    num = ProcesaCadena(entrada_usuario, soloemoji);
    GeneraRespuesta(emoticonos, significados, soloemoji, num);

    return 0;
}
