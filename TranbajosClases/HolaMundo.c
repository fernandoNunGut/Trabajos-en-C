#include <stdio.h>

int main() {
  char nombre[50]; //variable definida para guardar caracter definido o limitado, en este caso [50] caracteres.
  printf("hola mundo\n");
  printf("mi nombre es haloy\n");
  printf("Y tu como te llamas:\n");
  scanf("%s", &nombre);
  printf("Hola %s", nombre);

  return 0;
}