/* Confeccionar un algoritmo que genere la siguiente serie: 1010, 1020, 1030, 1040, 1050, ......., 10000.*/


#include <stdio.h>

int main() {

  //Definicion de valiable
  int i;

  // Cliclo para generar los números desde 1010 hasta 10000 de 10 en 10

  for ( i = 1010; i <= 10000; i+= 10)
  {
    printf("%d. \n", i);
  }

  return 0;
  

}