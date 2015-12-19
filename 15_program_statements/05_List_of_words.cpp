#include <stdio.h>
#include <stdlib.h>
	
	const char *lista[] = {

	    "pan",
	    "tostadas",
	    "bacon",
	    "tortilla",
	    "cipotes",
	    "deja de comer ya"

	};

	int main(int argc, const char **argv){

	    int cuanto;

	    printf("Cuánto quieres comer hoy?\n");
	    scanf("%i", &cuanto);

		printf("%s.\n", lista[cuanto]);




	return EXIT_SUCCESS;


}
