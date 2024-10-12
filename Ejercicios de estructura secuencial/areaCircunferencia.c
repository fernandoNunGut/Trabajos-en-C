#include <stdio.h>

int main(){
  int area, diametro, diametro2;

  printf("Ingrese el diamtro de el circulo para calcular el area de este:\n");
  scanf("%d", &diametro);

  diametro2 = diametro/2;

  area  = diametro2*diametro2;

  printf("El area del circulo es de: PI%d", area);
}