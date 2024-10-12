#include <stdio.h>

int main(){

  int a,b,diametro, areaR, areaC, area;

  printf("ingrese dos valores para el rectangulo deseado:");
  scanf("%d\t", &a);
  scanf("%d", &b);

  areaR = a*b;
  printf("area rectangulo: %d\n", areaR);

  printf("ingrese el diametro del circulo:");
  scanf("%d", &diametro);

  diametro = diametro/2;

  areaC = diametro*diametro;
  printf("area circulo: %d\n", areaC);

  area = areaR-areaC;

  printf("el area del rectangulo menos la del circulo es de %d", area);
}