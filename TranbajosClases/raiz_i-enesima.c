#include <stdio.h>
#include <math.h>

int main()
{
  float n, i, resultado;
  printf("escribe un numero\n");
  scanf("\n%f%f", &n, &i);

  if(n<0){
    printf("Error, debe ser >=0");
  } else
  {
    if (i<= 0)
    {
      printf("Error, divicion por 0 o negativo");
    }else 
    {
      resultado = pow (n, (1/i));
      printf("%f",resultado);
    }
  }
  return 0;
}