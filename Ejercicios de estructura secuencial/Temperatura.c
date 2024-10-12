#include <stdio.h>

int main() {

  int c,f;

  printf("Ingrese la tempratura en Farengates:\n");
  scanf("%d", &f);

  f = (f-32)/1.8;

  printf("Su temperatura es de: %d", f);
}