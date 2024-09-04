/*CLASIFICAR UN NUMERO ENTERO EN 
PAR POSITIVO
PAR NEGATIVO
IMPAR POSITIVO
IMPAR NEGATIVO
CERO
*/

#include <stdio.h>

int main() {
  //Declaracion de variables
  int numero;
  //Entrada de datos
  printf("Ingrese numero a clasificar: ");
  scanf("%d", &numero);

  //proceso de clasificación
  if (numero == 0 )
  {
    printf("%d es cero", numero);
  } else if ((numero % 2 == 0) && (numero > 0))
  {
    printf("%d es par positivo", numero);
  } else if ((numero % 2 == 0) && (numero < 0))
  {
    printf("%d es par negativo", numero);
  } else if ((numero % 2 != 0) && (numero > 0))
  {
    printf("%d es impar positivo", numero);
  };
  
}