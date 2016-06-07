#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main(int argc, const char **argv){

        char resultado[300];
        int posicion = 0;
        int numero = 0;


        for(int i = 0; i<300; i++){

        numero = rand() % 6;
          for(int i = 0; i<numero; i++){
              resultado[posicion] = 3;
              posicion++;
          }
        posicion++;
        }
        printf("%s", resultado);
        /* Generar un numero aleatorio del uno al seis
         * Añadirlos al char desde abajo y añadir un espacio
         * Repetir hasta que posicion = 300
         */








	return EXIT_SUCCESS;


}
