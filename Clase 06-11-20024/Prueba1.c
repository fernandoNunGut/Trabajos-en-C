#include <stdio.h>

void distribuirLibros(int totalLibros, int librosPorAula) { // Función para distribuir libros
    int aulasCompletas = 0; // Contador de aulas completas
    int librosRestantes = totalLibros; // Contador de libros restantes

    // Realizar restas sucesivas hasta que no queden suficientes libros para un aula completa
    while (librosRestantes >= librosPorAula) { // Mientras queden libros suficientes para una aula completa
        librosRestantes -= librosPorAula; // Restar libros por aula
        aulasCompletas++; // Aumentar contador de aulas completas
    }

    // Mostrar los resultados
    printf("Aulas completas que se pueden abastecer: %d\n", aulasCompletas); // Imprimir aulas completas
    printf("Libros restantes sin distribuir: %d\n", librosRestantes); // Imprimir libros restantes
}

int main() {

    int totalLibros; // Variable para almacenar el total de libros
    int librosPorAula = 30; // Variable para almacenar el número de libros por aula

    printf("Ingrese el total de libros: "); // Pedir al usuario el total de libros
    scanf("%d", &totalLibros); // Leer el total de libros

    distribuirLibros(totalLibros, librosPorAula); // Llamar a la función para distribuir libros

    return 0;
}
