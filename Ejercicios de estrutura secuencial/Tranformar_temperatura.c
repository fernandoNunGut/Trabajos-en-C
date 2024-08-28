#include <stdio.h>
#include <math.h>


int main(){
  
  int Celsius, Farengate;

  printf("introduce la temperatua en celsius que quieres tranformar a farengate:");
  scanf("%d", &Celsius);

  Farengate = Celsius * 1.8 + 32;

  printf("La temperatura en farengate es de: %d", Farengate);

  return 0;
}