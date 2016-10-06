#include <stdio.h>
#include <stdlib.h>
	
	struct TCurriculo {
	    char nombre[20];
	    int programacion;
	    int bases;
	    int fol;

	};

	void muestra(struct TCurriculo notas){
	printf("Las notas de %s\n", notas.nombre);
	printf("\n");
	    printf("Programación: %i\n", notas.programacion);
	    printf("Bases: %i\n", notas.bases);
	    printf("Empresa %i\n", notas.fol);


	}

	int main(int argc, const char **argv){

	    struct TCurriculo Alberto = {"Alberto", 9, 8, 5};
	    struct TCurriculo Victor = {"Victor", 4, 6, 8};


	    muestra(Alberto);
	    muestra(Victor);
	



	return EXIT_SUCCESS;


}
