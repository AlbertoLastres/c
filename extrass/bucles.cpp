#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	int main(){
		char comando[250];


	for (int segundo = 0; segundo <1000; segundo++){	
	sprintf(comando, 
		"mkdir \"Carpeta %i de 1000 :D\"", segundo);

	system(comando);
	fflush(stdout);
	sleep(0.1);
	}


	return EXIT_SUCCESS;


}
