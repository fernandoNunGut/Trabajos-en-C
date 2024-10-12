#include <stdio.h>

int main () {

  int a,b;

  printf("Ingrese el primer numero:\n");
  scanf("%d", &a);

  printf("Ingrese el segundo numero:\n");
  scanf("%d", &b);

  a = a + b;

  printf("El resultado es:%d", a);
}