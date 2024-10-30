/*  Obtener el IVA de una venta, si esta es superior a $150000 aplicar un descuento del 25% */

#include <stdio.h>

int main(void) {
  float venta, iva;
  printf("Ingrese la venta: ");
  scanf("%f", &venta);
  if (venta < 150000) {
    iva = venta * 0.19;
    printf("El IVA es: %.2f\n", iva);
  } else if (venta >= 150000) 
  {
    venta = venta*0.25;
    iva = venta * 0.19;
    printf("El IVA es: %.2f\n", iva);
  }
}