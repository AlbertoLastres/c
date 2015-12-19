#include <stdio.h>
#include <stdlib.h>

	int main(){
		
	    	int lado;

		printf("Insert L=");
		scanf("%i", &lado);


		for(int counter=0; counter<lado; counter++)
		    printf("* ");
		printf("\n");
		for(int counter=0; counter<lado; counter++)
		    printf("*\t*\n");
		for(int counter=0; counter<lado; counter++)
		    printf("* ");
		printf("\n");
		printf("\n");



	return EXIT_SUCCESS;


}
