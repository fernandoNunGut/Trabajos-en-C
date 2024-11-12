#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, mayor = -1, posicionMayor = -1, acumulador = 0; // Variables para almacenar el promedio y la nota más alta
  float promedio;
  int arreglo[10]; 

  printf("Ingrese el numero de juegos: "); // Mostrar el número de juegos
  scanf("%d", &n);                         // Obtener el número de juegos

  if (n > 0 && n < 10)
  {
    // ingresa nombre de Games y cantidad de juegos
    for (int i = 0; i < n; i++) // Recorrer cada juego
    {
      printf("Ingrese el stock del juegos: "); // Mostrar el número de juegos
      scanf("%d", &arreglo[i]);                         // Obtener el número de juegos
      if (arreglo[i] >= 0){

      if ( arreglo[i] > mayor)
      {
        mayor = arreglo[i];
        posicionMayor = i;
      }
      acumulador += arreglo[i];
      promedio = (float)acumulador / n;  
      }else {
        printf("El stock no puede ser negativo\n");
        return 1;
      }
      
    }
    printf("Total es %d\n", acumulador);
    printf("Mayor posicion es %d, cantidad es %d\n", posicionMayor, mayor);
    printf("El proomedio %.2f\n", promedio);
  } else {
    printf("Ingrese un numero entre 0 y 10 sin tomar estos valores\n");
  }
  return 0; // Terminar el programa
}