#include <stdio.h>
#include <string.h>

int main() {
    char emoticon[10];
    int n;

    // Solicitar al usuario el emoticono y el número de repeticiones
    printf("Ingrese el emoticono: ");
    scanf("%s", emoticon);
    
    printf("Ingrese el número de repeticiones: ");
    scanf("%d", &n);

    // Determinar el significado del emoticono
    if (strcmp(emoticon, ":)") == 0) {
        printf("%d %s Feliz\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":(") == 0) {
        printf("%d %s Triste\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":D") == 0) {
        printf("%d %s Muy feliz\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":O") == 0) {
        printf("%d %s Sorprendido\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ";)") == 0) {
        printf("%d %s Guiñando un ojo\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":P") == 0) {
        printf("%d %s Sacando la lengua\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":’(") == 0) {
        printf("%d %s Llorando\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":|") == 0) {
        printf("%d %s Neutral\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":/") == 0) {
        printf("%d %s Indeciso o dudoso\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":3") == 0) {
        printf("%d %s Coqueto\n", n, n > 1 ? "veces" : "vez");
    } else if (strcmp(emoticon, ":*") == 0) {
        printf("%d %s Besucón\n", n, n > 1 ? "veces" : "vez");
    } else {
        printf("Emoticono no reconocido.\n");
    }

    return 0;
}
