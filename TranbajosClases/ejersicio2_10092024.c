/* Confeccione un algoritmo que permit determinar el precio con IVA = 19% de un apasaje de avión sabiendo que: (neto es valor sin IVA)*/

// valor por kilometro recorrido ($47 valor neto)
// sobre los 100km de vuelo el valor del kilometro es de $25 valor neto

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void main() {

  int kilometro, precioN1, precioN2, IVA;
    printf("Escribe la cantidad de kilometros de tu vuelo\n");
    scanf("%d", &kilometro);
    precioN1 = kilometro<=1000?47:25;
    printf("precio base(%d)", kilometro);
    precioN2 = precioN1 * kilometro;
    printf
  
}