#include <stdio.h>
#include <string.h>

// Definición de la estructura Usuario
typedef struct {
    char nombre[50];
    char correo[50];
    char fechaNacimiento[11];  // Formato de fecha: "dd/mm/yyyy"
    char telefono[15];
} Usuario;

// Función para registrar un nuevo usuario
void registrarUsuario(Usuario usuarios[], int *totalUsuarios) {
    Usuario nuevoUsuario;

    printf("Ingrese el nombre del usuario: ");
    scanf(" %[^\n]s", nuevoUsuario.nombre);

    printf("Ingrese el correo electronico: ");
    scanf(" %[^\n]s", nuevoUsuario.correo);

    printf("Ingrese la fecha de nacimiento (dd/mm/yyyy): ");
    scanf(" %[^\n]s", nuevoUsuario.fechaNacimiento);

    printf("Ingrese el numero de telefono: ");
    scanf(" %[^\n]s", nuevoUsuario.telefono);

    // Guardar el nuevo usuario en el array
    usuarios[*totalUsuarios] = nuevoUsuario;
    (*totalUsuarios)++;

    printf("Usuario registrado con exito!\n\n");
}

// Función para mostrar todos los usuarios registrados
void mostrarUsuarios(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("No hay usuarios registrados.\n");
        return;
    }

    printf("Lista de usuarios registrados:\n");
    for (int i = 0; i < totalUsuarios; i++) {
        printf("Usuario %d:\n", i + 1);
        printf("Nombre: %s\n", usuarios[i].nombre);
        printf("Correo: %s\n", usuarios[i].correo);
        printf("Fecha de Nacimiento: %s\n", usuarios[i].fechaNacimiento);
        printf("Telefono: %s\n\n", usuarios[i].telefono);
    }
}

int main() {
    Usuario usuarios[100];  // Array para almacenar hasta 100 usuarios
    int totalUsuarios = 0;
    int opcion;

    do {
        printf("Sistema de Registro de Usuarios\n");
        printf("1. Registrar nuevo usuario\n");
        printf("2. Mostrar todos los usuarios\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrarUsuario(usuarios, &totalUsuarios);
                break;
            case 2:
                mostrarUsuarios(usuarios, totalUsuarios);
                break;
            case 3:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, intente de nuevo.\n");
        }

        printf("\n");

    } while (opcion != 3);

    return 0;
}
