#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void main() {

  int acumulador = 0;

  //definir una estructura repetitiva for (para)
  //Variable++ --> variable = variable+1
  //variable+=2 --> variable = variable+2

  for (int i = 0; i <=100 ; i++)
  { 
    printf("\n(Hola --> %d\n", i );
    acumulador+=i;
    printf("%d)\n", acumulador);
  }
  
}

