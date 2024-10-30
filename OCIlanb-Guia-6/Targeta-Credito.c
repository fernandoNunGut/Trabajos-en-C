#include <stdio.h>
#include <string.h>

/*  Aca usamos la función "" strcmp "" para comparar dos cadenas de caracteres.
    strcmp devuelve 0 si las cadenas son iguales, menor que 0 si la cadena
    de caracteres de la izquierda es menor que la de la derecha y mayor que 0
    si la cadena de caracteres de la izquierda es mayor que la de la derecha.
*/

// Función principal
int main() {
    char pinCorrecto[] = "H0l4";  // Pin de la tarjeta que se usará para validar
    char pinIngresado[20];        // Variable para almacenar el pin ingresado por el usuario
    int cantidadCompras, monto, totalGastado = 0, fallos = 0;
    
    // Pedir al usuario la cantidad de compras que desea procesar
    printf("Ingrese la cantidad de compras a procesar: ");
    scanf("%d", &cantidadCompras); // mientras el usuario no ingrese todas las compras a realizar no finaliza el codigo.

    // Bucle para procesar cada compra
    for (int i = 0; i < cantidadCompras; i++) {
        printf("\nIngrese el monto de la compra: ");
        scanf("%d", &monto);
        
        // Solicitar el pin al usuario
        printf("Ingrese el pin para validar su compra: ");
        scanf("%s", pinIngresado);

        // Validación del pin
        if (strcmp(pinIngresado, pinCorrecto) == 0) {
            printf("La compra fue validada.\n");
            totalGastado += monto;  // Sumar el monto al total gastado solo si el pin es correcto
        } else {
            printf("Pin incorrecto!\n");
            fallos++;  // Incrementar el contador de fallos si el pin es incorrecto
        }
    }

    // Resultado final
    printf("\nEl monto total gastado fue: %d\n", totalGastado);
    printf("La cantidad de pagos fallidos fue: %d\n", fallos);

    return 0;
}
