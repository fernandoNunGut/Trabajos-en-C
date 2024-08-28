/* En trabajo se trata de crear un menú diciochero en el cual habra comida la cual se pueda seleccionar para comprar
   Distintos tipos de alimentos patrioticos */

#include <stdio.h>
#define BLUE "\x1B[34m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define MAGENTA "\x1B[35m"
#define CIAN "\x1B[36m"
#define WHITE "\x1B[37m"
#define RESET "\x1B[0m"
#define RGB "\x1B[38;2;R;G;Bm"


int main() {
    int opcion;
    int cantidad;
    float total = 0.0;
    
    printf(RED "------------>¡Bienvenido al Menú Diciochero! <------------\n" RESET);
    printf(YELLOW "1. Empanada - $2000\n"RESET);
    printf(GREEN "2. Choripan - $1500\n"RESET);
    printf(CIAN "3. Anticucho - $3000\n"RESET);
    printf(MAGENTA "4. Chicha vaso - $1000\n"RESET);
    printf(WHITE "5. Salir\n"RESET);

    do { // Es una instrucción que permite repetir instrucción hasta que alguna sea falsa.
        printf("\nIngrese el número de la opción que desea comprar (o 5 para salir): ");
        scanf("%d", &opcion);

        switch(opcion) { // Es para tener instrucciones u opciones dentro de "case" como cantridad.
            case 1:
                printf(YELLOW "¿Cuántas empanadas desea comprar? " RESET);
                scanf("%d", &cantidad);
                total += cantidad * 2000;
                printf("Has agregado %d empanada(s) al carrito. Subtotal: $%.2f\n", cantidad, total);
                break; //Esto es para finalizar ejecución de switch(case)
            case 2:
                printf(GREEN "¿Cuántos choripanes desea comprar? " RESET);
                scanf("%d", &cantidad);
                total += cantidad * 1500;
                printf("Has agregado %d choripan(es) al carrito. Subtotal: $%.2f\n", cantidad, total);
                break; //Esto es para finalizar ejecución de switch(case)
            case 3:
                printf(CIAN "¿Cuántos anticuchos desea comprar? " RESET);
                scanf("%d", &cantidad);
                total += cantidad * 3000;
                printf("Has agregado %d anticucho(s) al carrito. Subtotal: $%.2f\n", cantidad, total);
                break; //Esto es para finalizar ejecución de switch(case)
            case 4:
                printf(MAGENTA "¿Cuántos vasos de chicha desea comprar? " RESET);
                scanf("%d", &cantidad);
                total += cantidad * 1000;
                printf("Has agregado %d vaso(s) chicha al carrito. Subtotal: $%.2f\n", cantidad, total);
                break; //Esto es para finalizar ejecución de switch(case)
            case 5:
                printf("Gracias por su compra. El total a pagar es: $%.2f\n", total);
                break; //Esto es para finalizar ejecución de switch(case)
            default:
                printf("Opción no válida. Por favor, elija una opción del 1 al 5.\n");
        }
    } while(opcion != 5); // Es la condición que valida si es falsa o verdadera para terminar las repeticiones.

    return 0;
}
