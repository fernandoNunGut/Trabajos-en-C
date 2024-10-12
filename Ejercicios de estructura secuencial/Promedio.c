#include <stdio.h>

int main() {
    float notas[5];  
    float suma = 0.0, promedio;
    
    // Solicitar las 5 notas mediante siclo for
    for(int i = 0; i < 5; i++) {
        printf("Ingrese la nota %d: ", i + 1); // Aca se utiliza i +1 para facilitar la secuencia del siclo i=0 en primer caso en segundo caso i=1;
        scanf("%f", &notas[i]);
        suma += notas[i];  // Acumular la suma de las notas
    }
    
    // Calcular el promedio
    promedio = suma / 5;
    
    // Mostrar el resultado
    printf("El promedio de las 5 notas es: %.2f\n", promedio);
    
    return 0;
}
