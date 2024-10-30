#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define NUM_EMOTICONOS 11
#define EMOTICONO_0 ":)"
#define EMOTICONO_1 ":("
#define EMOTICONO_2 ":D"
#define EMOTICONO_3 ":O"
#define EMOTICONO_4 ";)"
#define EMOTICONO_5 ":P"
#define EMOTICONO_6 ":'("
#define EMOTICONO_7 ":|"
#define EMOTICONO_8 ":/"
#define EMOTICONO_9 ":3"
#define EMOTICONO_10 ":*"

#define SIGNIFICADO_0 "Feliz"
#define SIGNIFICADO_1 "Triste"
#define SIGNIFICADO_2 "Muy feliz"
#define SIGNIFICADO_3 "Sorprendido"
#define SIGNIFICADO_4 "Guinhando un ojo"
#define SIGNIFICADO_5 "Sacando la lengua"
#define SIGNIFICADO_6 "Llorando"
#define SIGNIFICADO_7 "Neutral"
#define SIGNIFICADO_8 "Indeciso o dudoso"
#define SIGNIFICADO_9 "Coqueto"
#define SIGNIFICADO_10 "Besucon"
/*
Considere que antes de la era de los sistemas operativos gráficos la forma
de comunicarnos vía chat era usando texto formato ASCII. Mediante los
emoticons ASCII era posible representar todo tipo de emociones. Considere
que volvemos a esa era y necesitamos que a partir de un emoticono y un
número entero n como entrada, determine como salida la cantidad de
veces que se repitió seguido de un texto que representa el significado del
emoticono.

Entrada Salida
:) 2    2 veces Feliz
:( 4    4 veces Triste
:D 1    1 vez Muy feliz
:O 1    1 vez Sorprendido
;) 1    1 vez Guiñando un ojo
:P 2    2 veces Sacando la lengua
:’( 3   3 veces Llorando
:| 3    3 veces Neutral
:/ 1    1 vez Indeciso o dudoso
:3 5    5 veces Coqueto
:* 2  2 veces Besucón
*/

void LeeCadena(char entrada_usuario[])
{
    char entrada[7];                        // cadena de entrada
    fgets(entrada, sizeof(entrada), stdin); // como un scanf pero más bkn
    printf("%s", entrada);
    strcpy(entrada_usuario, entrada); // copia de entrada a entrada_usuario
}

//          :P 7 felicidad
int ProcesaCadena(char entrada_usuario[], char se[])
{
    // Returns first token
    char *token = strtok(entrada_usuario, " ");
    int n, pasada = 0;
    while (token != NULL)
    {
        pasada++;
        // printf("%s\n", token);
        if (pasada == 1)
            strcpy(se, token);
        else if (pasada == 2)
            n = atoi(token);
        token = strtok(NULL, " ");
    }
    return (n);
}

void GeneraRespuesta(char emo[NUM_EMOTICONOS][6], char sig[NUM_EMOTICONOS][20], char se[], int n)
{

    int i, pos_encontrada = -1;

    for (i = 0; i < NUM_EMOTICONOS; i++)
    {
        if (strcmp(emo[i], se) == 0)
        {
            // printf("lo encontre en la posicion %d", i);
            pos_encontrada = i;
            break;
        }
    }

    //verificacion de existencia
    if (pos_encontrada == -1) printf("No existe emoji :(\n");
    else
    {
        if (n == 1)
            printf("%d vez %s", n, sig[pos_encontrada]);
        else
            printf("%d veces %s", n, sig[pos_encontrada]);
    }
}

int main() 
{ 
    //Modificacion para que el usuario pueda ingresar el emoji y el numero de repeticiones
    // Solicitar entrada al usuario 
    printf("Ingrese el emoticono seguido del número de repeticiones (ej. :) 2): ");

    // Arreglo de emojies
    char emoticonos[NUM_EMOTICONOS][6] = {
        EMOTICONO_0,
        EMOTICONO_1,
        EMOTICONO_2,
        EMOTICONO_3,
        EMOTICONO_4,
        EMOTICONO_5,
        EMOTICONO_6,
        EMOTICONO_7,
        EMOTICONO_8,
        EMOTICONO_9,
        EMOTICONO_10};

    // Arreglo de etiquetas
    char significados[NUM_EMOTICONOS][20] = {
        SIGNIFICADO_0,
        SIGNIFICADO_1,
        SIGNIFICADO_2,
        SIGNIFICADO_3,
        SIGNIFICADO_4,
        SIGNIFICADO_5,
        SIGNIFICADO_6,
        SIGNIFICADO_7,
        SIGNIFICADO_8,
        SIGNIFICADO_9,
        SIGNIFICADO_10};

    char entrada_usuario[6] = ""; // entrada del usuario
    char soloemoji[5] = "";       // subcadena para almacenarsolo el emoji
    int num = 0;                  // para almacenar solo el numero

    // Llamada a las funciones
    LeeCadena(entrada_usuario);
    num = ProcesaCadena(entrada_usuario, soloemoji);
    GeneraRespuesta(emoticonos, significados, soloemoji, num);

    return 0;
}
