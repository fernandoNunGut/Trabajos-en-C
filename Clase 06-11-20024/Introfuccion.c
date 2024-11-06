/*  Una escuela necesita distribuir libros de manera que cada aula reciba exactamente 30 libros. Con un total de 720 libros disponibles, cree un metodo para deternimar cuantas aulas completas se pueden abastecer y cuantaos libros quedarian sin distribuir si no es posible una divicion exacta, todo ello sin uitlizar operadores de divicion o modulo*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int libros, librosPorAulas, aulas, i, j, k;
  printf("Ingrese el numero de libros: ");
  scanf("%d", &libros);
  printf("Ingrese el numero de libros a distribuir: ");
  scanf("%d", &librosPorAulas);
  if (libros > 0 && librosPorAulas > 0)
  {
    libros = libros - librosPorAulas;
    librosPorAulas = librosPorAulas - 1 ;
    printf("En total %d aulas tienen %d libros\n", librosPorAulas, libros);
  }
  
  /*for (i = 0; i < aulas; i++)
  {
    for (j = 0; j < 30; j++)
    {
      for (k = 0; k < libros; k++)
      {
        if (k == libros - 1)
        {
          printf("Libro %d\n", k + 1);
        }
        else
        {
          printf("Libro %d ", k + 1);
        }
      }
    }
    libros = libros - 30;
    aulas = aulas - 1;
  }*/
}

