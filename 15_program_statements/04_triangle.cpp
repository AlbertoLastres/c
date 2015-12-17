#include <stdio.h>
#include <stdlib.h>

	int main(){
		int height;	
		char ascii = '*';
		
		system("clear");	
	    	printf("TRIANGLE MAKER\n");
    		printf("Insert Height: ");
		scanf("%i", &height);
		printf("l = %i\n\n", height);
		for(int linea=0; height>linea; linea++){
		    for(int vertical=0; vertical<linea+1; vertical++)
			printf("%c", ascii);
		printf("\n");
		}
		





			 
	return EXIT_SUCCESS;


}
