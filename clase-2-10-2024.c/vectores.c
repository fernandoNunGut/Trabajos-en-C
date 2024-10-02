#include <stdio.h>
#include <stdlib.h>

// operaciones basicas

// funcion de limpieza o inicialización
void Limpieza(int vector[0], int largo)
{
  int i;
  for (i = 0; i < largo; i++)
    vector[i] = 0;
}

// funcion de llenado manual (usuario)
void Llenado(int vector[], int largo)
{
  int i;
  printf("Ingrese un elemento al vector\n");
  for (i = 0; i < largo; i++)
  {
    printf("\nvector[%d]=?", i);
    scanf("%d", &vector[i]);
  }
}

// funcion de despliegue o recorrido
void Despliegue(int vector[0], int largo)
{
  int i;
  for (i = 0; i < largo; i++)
    printf("vector[%d]=%d\n", i, vector[i]);
}

// aplificar vectores
void Amplificar(int vector[], int k, int largo)
{
  int i;
  for (i = 0; i < largo; i++)
    vector[i] = k * vector[i]; // aplifica el vector por k
}

// Funcion acumuladora de vector con valor de retorno
int Acumular(int vector[], int largo)
{
  int suma = 0, i;
  for (i = 0; i < largo; i++)
    suma += vector[i];

    return(suma);
}

// Funcion Principal
int main()
{
  // declaracion de variables
  int A[20];
  int B[10];
  int k;
  int sB, sA;
  // Llamadas

  printf("-----primer----vector-----\n");
  Limpieza(A, 20);
  Despliegue(A, 20);
  printf("-----segundo----vector-----\n");
  Limpieza(B, 10);
  Despliegue(B, 10);
  // llenado de vectores para B
  Llenado(B, 10);
  Despliegue(B, 10);

  // aplificar segun k
  printf("k?: ");
  scanf("%d", &k);
  Amplificar(B, k, 10);
  Despliegue(B, 10);

  //acumular vector
  
  sB=Acumular(B, 10);
  sA=Acumular(A, 20);
  printf("\acumulado de A =%d\tacumulado de B =%d", sA, sB);

  return 0;
}