#include <stdio.h>

int main() {
  
    int energia[7];

    const char *diasSemana[7] = {"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"};
    
    // Leer la energía de cada día de la semana
    printf("Ingresa los niveles de energía para cada día de la semana (7 valores):\n"); 

    for (int i = 0; i < 7; i++) { // Leer cada valor de energía

        scanf("%d", &energia[i]); // Leer el valor de energía para cada día de la semana

    }

    // Encontrar el día de máxima energía
    int maxEnergia = energia[0]; // Inicia con el nivel de energía del primer día de la semana

    int diaMax = 0; // Inicia con el día de máxima energía

    for (int i = 1; i < 7; i++) { // Recorrer cada día de la semana

        if (energia[i] > maxEnergia) { // Si el nivel de energía del día es mayor que el máximo

            maxEnergia = energia[i]; // Actualizar el nivel de energía máximo

            diaMax = i; // Actualizar el día de máxima energía

        }
    }

    // Imprimir el resultado
    printf("La energía máxima es %d y %s es un día para un Golpe Trueno.\n", maxEnergia, diasSemana[diaMax]);

    return 0;
}
