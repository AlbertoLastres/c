#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    	for (int vez=0; vez<10; vez++){ //Sirve para repetir la instrucción las veces que sea, pero siempre hasta el punto y la coma, por eso abajo falta tambien.
		printf("\r");
		for (int i=0; i<vez; i++) 
	    		printf("=");
		printf(">");
		fflush(stdout);
		sleep(0.5);
		}



    return EXIT_SUCCESS;
    }
