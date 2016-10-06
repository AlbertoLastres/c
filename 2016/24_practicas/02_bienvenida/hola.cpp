#include <stdio.h>
#include <stdlib.h>


        struct Tarjeta{
            char Nombre[20];
            int Edad[2];
            int Peso[3];
            int telefono[9];
        };

       int main(int argc, const char **argv){

            struct Tarjeta usuario;
                int resultado;
        printf("Introduce tu nombre:");
        scanf("%s", usuario.Nombre);
        printf("\nTu nombre es %s\n", usuario.Nombre);
        printf("\nEscribe tu edad:");
        scanf("%i", usuario.Edad);
        printf("\nEscribe tu peso:");
        scanf("%i", usuario.Peso);
        printf("\n Escribe tu telefono: ");
        scanf("%i", usuario.telefono);

       // calcula(usuario, resultado);
        printf("Datos: %s\n%d\n%d\n%d\n", usuario.Nombre, usuario.Edad, usuario.Peso, usuario.telefono);

	return EXIT_SUCCESS;


}
