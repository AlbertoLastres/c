#include <stdio.h>
#include <stdlib.h>
	
	const char *lista[] = {

	    "Estás gordo no comas más.",
	    "Helado de vainilla.",
	    "Natillas.",
	    "Una cuajada.",
	    "Un mero.",
	    "Entrecot.",
	    "Huevos rotos.",
	    "Ensalada Mixta.",
	    "Un poco de pan.",
	    "Un tente en pié.",
	    "Unos donuts."

	};

	int main(int argc, const char **argv){

	    int cuanto;

	    printf("Cuánto quieres comer hoy?(1-10)\n");
	    scanf("%i", &cuanto);

		if(cuanto<1){
			printf("Por favor solo puedes introducir números del 1 al 10.\n");
	    		return EXIT_FAILURE;
			}
		if(cuanto>10){
		    printf("Por favor solo puedes introducir números del 1 al 10.\n");
			return EXIT_FAILURE;
				}
			
		for(int contador=0; contador<cuanto; contador++){
		
		    printf("%s.\n", lista[cuanto]);
		    cuanto = cuanto - 1;


			}


	return EXIT_SUCCESS;


}
