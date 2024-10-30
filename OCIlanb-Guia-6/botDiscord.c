#include <stdio.h>
#include <string.h>

/*  Aca usamos la función "" strcmp "" para comparar dos cadenas de caracteres.
    strcmp devuelve 0 si las cadenas son iguales, menor que 0 si la cadena
    de caracteres de la izquierda es menor que la de la derecha y mayor que 0
    si la cadena de caracteres de la izquierda es mayor que la de la derecha.
*/

int main() {
    int n_comandos, invalidos = 0, pizzas_pedidas = 0;
    
    // Pedir la cantidad de comandos a analizar
    printf("Ingrese la cantidad de comandos a analizar: ");
    scanf("%d", &n_comandos);
    
    for (int i = 0; i < n_comandos; i++) {
        char comando[50];  // Declarar una variable para almacenar el comando con un maximo de 50 caracteres
        printf("Ingrese el comando a analizar: "); // se el pide al usuario que ingrese un comando para analizar
        scanf("%s", comando);  // Leer el comando ingresado por el usuario
        
        // Finalizar la entrada del comando
         if (strcmp(comando, "Fin") == 0) {
            break;
        }
        // Verificar si el comando es válido
        if (comando[0] != '!' || strlen(comando) >= 20) {
            printf("Comando inválido!\n");
            invalidos++;
        } else if (strcmp(comando, "!crear_paralelo") == 0) {
            printf("Bot conoce este comando!\n");
        } else if (strcmp(comando, "!pedir_pizza") == 0) {
            printf("Bot conoce este comando!\n");
            pizzas_pedidas++;
        } else { 
            printf("Bot no conoce este comando!\n");
        }
    }
    
    // Mostrar los resultados finales
    printf("Cantidad de comandos inválidos recibidos fue: %d\n", invalidos);
    printf("Cantidad de pizzas pedidas fue: %d\n", pizzas_pedidas);
    
    return 0;
}
