#include <stdio.h>
#include <stdlib.h>

	int main(int argc, const char **argv){
	// Vamos a hacer que se repita 10 veces lo que introduzcas en el bash despues del nombre del programa.
	for(int i=0; i<10; i++) //Se hace un bucle para que repita 10 veces lo siguiente:
	    printf("%s\n", argv[1]); //Imprime ARGV (Lo que entra por la pantalla despues del programa y el 1 significa que es la palabra numero 1, el 0 significa el nombre del programa y el 2 la segunda palabra.
	
	return EXIT_SUCCESS;


}
