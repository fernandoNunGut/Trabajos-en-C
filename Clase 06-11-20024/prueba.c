#include <stdio.h>

int main() {
    int energia[7];
    const char *diasSemana[7] = {"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"};
    
    // Leer la energía de cada día de la semana
    printf("Ingresa los niveles de energía para cada día de la semana (7 valores):\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &energia[i]);
    }

    // Encontrar el día de máxima energía
    int maxEnergia = energia[0];
    int diaMax = 0;

    for (int i = 1; i < 7; i++) {
        if (energia[i] > maxEnergia) {
            maxEnergia = energia[i];
            diaMax = i;
        }
    }

    // Imprimir el resultado
    printf("La energía máxima es %d y %s es un día para un Golpe Trueno.\n", maxEnergia, diasSemana[diaMax]);

    return 0;
}
