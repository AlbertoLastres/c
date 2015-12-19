#include <stdio.h>
#include <stdlib.h>
//Vamos a leer una entrada del usuario desde el bash y partiendo de esa entrada vamos a crear un triangulo rectángulo del numero que ponga en la entrada.
	int main(int argc, char *argv[]){
		int op1;
		char op2 = '*';

		op1 = atoi(argv[1]);
		system("clear");	
	    	printf("TRIANGLE MAKER\n");
		printf("l = %i\n\n", op1);
		for(int linea=0; op1>linea; linea++){
		    for(int vertical=0; vertical<linea+1; vertical++)
			printf("%c", op2);
		printf("\n");
		}
		





			 
	return EXIT_SUCCESS;


}
