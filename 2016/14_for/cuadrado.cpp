#include <stdlib.h>
#include <stdio.h>

int main(){

    int lado = 5;

    for (int fila=0; fila<lado; fila++){
	for (int col=0; col<lado; col++)
	    if (fila>col)
		printf("0");
	    else
		printf("*");

	printf("\n");

    }

    return EXIT_SUCCESS;
}
