/* Una maraton tiene 26 millas y 37 kilometros permita calcular la distancia del recorrido tiene 1760 yardas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
  int millas, yardas1, kilometros, yardas;
  printf("Escribre las millas y las yardas\n");
  scanf("%d %d", &millas, &yardas1);

  yardas1=(millas*1760)+yardas;
  kilometros=yardas1/1093.61329834;

  printf("son %.1d kilometros", kilometros);
}