/*  Pikachu se prepara para un batalla y necesita ayuda para gestionar sus niveles de electricidad para asegurarase de que puede lanzar el choque Trueno mas fuerte posible, Pikachu carga su energia electrica en una bateria por cada dia de la semana, distribuidas en un arreglo de 7 posiciones. Para estar bien preparado, Pikachu requiere saber cual es el dia de maxima electricidad que puede encontrar en las baterias almacenadas para lanzar Golpe Trueno


- Lea un arreglo de enteros donde cada entero representa la energia electrica cargada en una bateria, una por cada dia de la semana.
- Identifique la posicion y valor de la energia maxima de cualquier bateria en el arreglo.
- Muestre la energia maxima y el correspondiente dia de la semana en palabras agregando el subfijo "es un dia para un golpe trueno".

Restricciones:
- El arreglo puede contener numeros enteros positivos o negativos. Los numero negativos representan dias de perdida de energia respecto a la semana anterior.
- Los dias empiezan el lunes (0 = lunes, 1 = martes, 2 = miercoles, etc.)

Entrada:
- Un array de 7 enteros que reprentan la energia de cada bacteria diariamente.

Salida:
- Un unico entero para la energia maxima que pikachu puede recoger de una bateria, y el dia correspondiente en palabras con el sufijo "de Golpe Trueno".
.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dia, energia, i, maximo, maximoDia;
  int arreglo[7];
  printf("Ingrese el numero de dias de la semana: ");
  scanf("%d", &dia);
  printf("Ingrese el numero de energia de cada dia: ");
  for (i = 0; i < dia; i++)
  {
    scanf("%d", &energia);
    arreglo[i] = energia;
  }
  maximo = 0;
  maximoDia = 0;
  for (i = 0; i < dia; i++)
  {
    if (arreglo[i] > maximo)
    {      
      maximo = arreglo[i];
      maximoDia = i;
    }
  }
  if (maximoDia == 0)
  {
    printf("La energia maxima es %d de Golpe Trueno", maximo);
  }
  else
  {
    printf("La energia maxima es %d de Golpe Trueno", maximo);
  }
  return 0;
} 