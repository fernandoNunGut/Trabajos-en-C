/* Confeccionar un algoritmo que permita leer una cantidad variable de números, hasta que se haya ingresado 70 números pares, y que finalmente indique de la serie de números lo siguiente.

- Total de números pares e impares.
- Promedio de los números pares, impares y el general.

*/

#include <stdio.h>


int main() {

  int num, pares = 0, impares = 0;
  int suma_pares = 0, suma_impares = 0;
  int total_numeros = 0;

  //restriccion para que mientras no se ingresen 70 números pares no termine el ciclo

  while (pares < 70) 
  {
    printf("Ingrese un número: ");
    scanf("%d", num);

    // ahora si el numero es par se tiene que 

    if (num % 2 == 0)
    {
      pares++;
      suma_pares += num;
    }else
    {
      impares++;
      suma_impares += num;
    }

    total_numeros++;
    
  }

  //ahora mostraremos el resultado

  printf("\nTotal de números pares: %d", pares);
  printf("\nTotal de números impares: %d", impares);


  //ahora calcularesmos el promedio de los números 

  float promedio_pares = (pares > 0) ? (float)suma_pares / pares : 0;
  float promedio_impares = (impares > 0) ? (float)suma_impares / impares : 0;
  float promedio_general = (float)(suma_pares + suma_impares) / total_numeros;

  printf("\nPromedio de los números pares : %.2f", promedio_pares);
  printf("\nPromedio de los números impares: %.2f", promedio_impares);
  printf("\nPromedio general : %.2f\n", promedio_general);

  return 0;
  
}