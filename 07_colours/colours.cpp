#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Esto es un ejemplo con printf.\n");

	puts("Esto es un ejemplo con puts.\n");

	char comando[100];
	char mi_nombre[20];

	system("toilet --metal -f ascii9 'nombre' ");

	/*Bloque de entrada de datos*/
	printf("NOmbre: ");
	scanf(" %s", mi_nombre);
	printf("Te llamas %s. \n", mi_nombre);
	/* Opción clçasica */
	//printf("Te llamas %s. \n", mi_nombre);
	/* Opción emo */
	sprintf(comando, "toilet --metal -f ascii12 '%s'", mi_nombre);
	
	system(comando);
		


    return EXIT_SUCCESS;
    }
