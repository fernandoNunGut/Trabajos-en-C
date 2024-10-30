/*5. Llenar 2 arreglos de largo 10 cada uno con números enteros y a
 partir de estos datos generar:

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int tamano = 10, arreglo1[tamano], arreglo2[tamano];
    srand(time(NULL)); // truco para que la secuencia de numeros aleatorios no se repita
    // para recorrer la longitud del arreglo
    for (int i = 0; i < tamano; i++)
    {
        // llenar los arreglos con un numero aleatorio, (1-50)
        arreglo1[i] = rand() % 50 + 1;
        arreglo2[i] = rand() % 50 + 1;
    }
    // recorrer arreglo 1
    printf("ARREGLO 1:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("(%d)", arreglo1[i]);
    }
    // recorrer arreglo 1
    printf("\nARREGLO 2:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("(%d)", arreglo2[i]);
    }
    printf("\n");
    /*
    Un arreglo de largo 20 con todos los elementos
    del primer arreglo y luego los del segundo
    */
    // definir arreglo3, de tamaño 20
    int arreglo3[20];
    // primero, llenar las 10 primeras posiciones, en base al arreglo 1
    int iteradorAux = 0;
    for (int i = 0; i < 20; i++) // 0 al 19 -> 0;<20
    {
        // si la posicion i, esta en el rango del primer arreglo (0,9)
        // llenamos en base al primer arreglo

        if (i < 10)
        { // entre 0 y 9
            // llenamos arreglo 3, en base al arreglo 1
            arreglo3[i] = arreglo1[i];
        }
        else
        {
            // llenamos arreglo 3, en base al arreglo 2
            arreglo3[i] = arreglo2[iteradorAux];
            iteradorAux++;
        }
    }
    int arreglo4[20];
    // otra forma de concatenarlos
    for (int i = 0; i < 10; i++)
    {
        arreglo4[i] = arreglo1[i]; // posicion 0 a 9, lleno con el arreglo 1
    }

    for (int i = 0; i < 10; i++)
    {
        arreglo4[10 + i] = arreglo2[i]; // posicion 10 a la 19, lleno con el arreglo 2
    }

    printf("\nARREGLO 3, CONCATENADO\n");
    for (int i = 0; i < 20; i++)
    {

        printf("(%d)", arreglo3[i]);
    }

    printf("\nARREGLO 4, CONCATENADO\n");
    for (int i = 0; i < 20; i++)
    {

        printf("(%d)", arreglo4[i]);
    }
    // Un arreglo de largo 20 llamado D con los elementos de A y B pero intercalados.
    //  PENDIENTE

    /*
    Un arreglo llamado E de largo 10 con la suma de los elementos de A y B
    (E[i]=A[i]+B[i])
    */
    int e[tamano];
    // recorremos las 10 posiciones equivalente al tamaño de los 2 arreglos
    printf("\nARREGLO 3, CON SUMA DE ARREGLO 1 Y ARREGLO 2\n");
    for (int i = 0; i < 10; i++)
    {
        e[i] = arreglo1[i] + arreglo2[i];
        printf("(%d)+(%d) = (%d)\n", arreglo1[i], arreglo2[i], e[i]);
    }
    /*
    Un arreglo F con los números que se encuentren dentro de cierto rango 
    ingresado por el usuario, en el arreglo A.

    */
}