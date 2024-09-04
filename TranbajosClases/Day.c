#include <stdio.h>



int main(){

  int day;

  printf("El dia por numeros 1-7\n");
  printf("The day with number 1-7\n");

  scanf("%d", &day);
  printf("The day with the number %d, is || ", day);
  printf("El dia con el numero %d es: ", day);

  if (day == 1)
  {
    printf("Monday/Lunes");
  } else if (day == 2 )
  {
    printf("Tuesday/Martes");
  } else if (day == 3)
  {
    printf("Wednesday/Miercoles");
  } else if (day == 4)
  {
    printf("Thursday/Jueves");
  } else if (day == 5)
  {
    printf("Friday/viernes");
  } else if (day == 6)
  {
    printf("Saturday/Sábado");
  } else if (day == 7)
  {
    printf("Sunday/Domingo");
  } else
  {
    printf("Dia Error!!");
  }
  

}