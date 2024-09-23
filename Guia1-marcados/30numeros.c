#include <stdio.h>

int main() {

  int numero, sumaImpares = 0, contadorImpares = 0;

  float promedioImpares;

  // Primero que todo leemos 30 numeros

  for (int i = 0; i < 30; i++) {

    printf("Ingrese in número (%d/30): ", i + 1);

    scanf("%d", &numero);

    //ahora comporbaremos lo siguiente 

    //si el número es impar

    if (numero % 2 != 0) {
      sumaImpares += numero;


      //sumar el numero impar 

      contadorImpares++;

      //contar el numero impar
    }
  }

  //verificar si se ingresaron números impares


  if (contadorImpares > 0) {

    promedioImpares = (float)sumaImpares / contadorImpares;
    
    printf("El promedio de los números impares es: %.2f\n", promedioImpares);
  } else {
    printf("No se ingresaron números impares.\n");

  }

  return 0;
}