#include <stdio.h>
#include <stdlib.h>


#define MAX 4294967295

struct Datos {
    int Tipo;
    int Tamano;
    int Reservado1;
    int Reservado2;
    int Datos;
    int Cabecera;
    int Anchura;
    int Altura;
    int Planos;
    int TamanoPuntos;
    int Compresion;
    int Tamanoimagen;
    int ResolucionHorizontal;
    int ResolucionVertical;
    int TamanoTablaColor;
    int ContadorColores;
};


	int main(int argc, const char **argv){

            FILE *pf = NULL;


            pf = fopen(argv[1], "r");

            if (!pf){
                printf("No puedo leer el archivo %s\n", argv[1]);
                return EXIT_FAILURE;
            }

            


            fclose(pf);
	return EXIT_SUCCESS;


}
