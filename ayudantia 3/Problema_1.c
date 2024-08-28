/* Obten el area de un rectangulo de lados conocidos a y b menos el área de una circinferencia completamente contenida en él de diámetro d. 

ANALICIS: 

*/

#include <stdio.h>
#include <math.h>


int main () {
  int num1, num2, diam,area, areadiam ;
  printf("Escribre la medida del largo de tu rectangulo:\n");
  scanf("%d", &num1);
  printf("Escribe la segunda medida del ancho de tu rectangulo:\n");
  scanf("%d", &num2);
  printf("Escribe el diamretro del circulo:\n");
  scanf("%d", &diam);

  area = num1 * num2;

  areadiam = diam / 2;

  areadiam = areadiam * areadiam;

  printf("El area de tu rectangulo es:%d\n", area);
  printf("El area de tu circulo es:PI%d", areadiam);

  return 0;
}