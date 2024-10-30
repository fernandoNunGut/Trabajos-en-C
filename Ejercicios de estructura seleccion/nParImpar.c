#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  printf("Ingrese un numero: ");
  scanf("%d", &n);
  if (n % 2 == 0)
    printf("El numero %d es par\n", n);
  else
    printf("El numero %d es impar\n", n);
  return 0;
}