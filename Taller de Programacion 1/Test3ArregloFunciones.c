/*Enunciado
Un profesor requiere un sistema para gestionar las calificaciones de los estudiantes de su asignatura. Se
pide desarrollar un programa en Lenguaje C que permita ingresar las notas y calcular el promedio de
calificaciones para cada estudiante, además de identificar la mejor nota de cada estudiante y al estudiante
con mejor promedio.*/

/* Requerimientos
1. Crear un programa en C que utilice matrices y funciones para gestionar las calificaciones de un curso.
2. El programa debe permitir ingresar el número de estudiantes (2 <= n <= 20), en número calificaciones
(2 <= m <= 10), las calificaciones para cada estudiante en una matriz de NxM.
3. Crear una función para calcule y muestre el promedio de calificaciones para cada estudiante.
4. Crear una función que muestre la mejor nota de cada estudiante.
5. Crear una función que muestre al estudiante con mejor promedio de la asignatura.
*/

/* Entradas:
Cantidad de estudiantes (n): Entero positivo.
Cantidad de calificaciones por estudiante (m): Entero positivo.
Calificaciones de cada estudiante en la asignatura: Matriz de tamaño n x m.
*/

/* Salida Esperada:
1. Para cada estudiante, muestra su nombre, calificaciones en cada asignatura, el promedio y su mejor
nota. Luego, muestra al estudiante con mejor promedio. 
*/

// tiene que pedir el nombre del estudiante antes de pedir las calificaciones


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m; // Variables para almacenar el número de estudiantes y calificaciones
    float promedio, nota, mejorNota; // Variables para almacenar el promedio y la nota más alta
    char nombres[100][100];  // Arreglo bidimensional para los nombres
    float notas[100][100]; // Arreglo bidimensional para las calificaciones

    printf("Ingrese el número de estudiantes: "); // Mostrar el número de estudiantes
    scanf("%d", &n); // Obtener el número de estudiantes
    printf("Ingrese el número de calificaciones: "); // Mostrar el número de calificaciones
    scanf("%d", &m); // Obtener el número de calificaciones

    // Ingresar nombres y calificaciones
    for (int i = 0; i < n; i++) // Recorrer cada estudiante
    {
        printf("Ingrese el nombre del estudiante %d: ", i + 1); // Mostrar el número del estudiante
        scanf("%s", nombres[i]);  // Guardar el nombre en el arreglo de nombres
        printf("Ingrese las calificaciones de estudiante %s: ", nombres[i]); // Mostrar el nombre del estudiante
        for (int j = 0; j < m; j++) // Recorrer cada asignatura
        {
            scanf("%f", &notas[i][j]); // Ingresar las calificaciones de cada asignatura
        }
    }

    // Calcular el promedio de cada estudiante
    for (int i = 0; i < n; i++) // Recorrer cada estudiante
    {
        promedio = 0; // Inicializar el promedio
        for (int j = 0; j < m; j++) // Recorrer cada asignatura
        {
            promedio += notas[i][j]; // Sumar las calificaciones de cada asignatura
        }
        promedio /= m; // Calcular el promedio
        printf("El promedio de las calificaciones de los estudiante %s es: %.2f\n", nombres[i], promedio); // Mostrar el promedio de calificaciones del estudiante
    }

    // Identificar la mejor nota de cada estudiante
    for (int i = 0; i < n; i++) // Recorrer cada estudiante
    {
        mejorNota = 0; // Inicializar la nota más alta
        for (int j = 0; j < m; j++) // Recorrer cada asignatura
        {
            if (notas[i][j] > mejorNota) // Comprobar si la nota actual es mayor que la nota más alta
            {
                mejorNota = notas[i][j]; // Actualizar la nota más alta
            }
        }
        nota = mejorNota; // Actualizar la nota más alta
        printf("El estudiante Destacado %s es: %.2f\n", nombres[i], nota); // Mostrar la mejor nota del estudiante
    }

    // Identificar al estudiante con mejor promedio
    float mejorPromedio = 0;  // Variable para almacenar el promedio más alto
    int mejorEstudiante = 0; // Variable para almacenar el estudiante con el promedio más alto
    for (int i = 0; i < n; i++) // Recorrer cada estudiante
    {
        promedio = 0; // Inicializar el promedio
        for (int j = 0; j < m; j++) // Recorrer cada asignatura
        {
            promedio += notas[i][j]; // Sumar las calificaciones de cada asignatura
        }
        promedio /= m; // Calcular el promedio
        
        if (promedio > mejorPromedio) // Comprobar si el promedio actual es mayor que el promedio más alto
        {
            mejorPromedio = promedio; // Actualizar el promedio más alto
            mejorEstudiante = i; // Actualizar el estudiante con el promedio más alto
        }
    }
    printf("El estudiante con mejor promedio es: %s\n", nombres[mejorEstudiante]); // Mostrar el nombre del estudiante con el promedio más alto

    return 0; // Terminar el programa
}
