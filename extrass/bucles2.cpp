#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	int main(){
			
	


	for (int segundo = 0; segundo <60; segundo++)
	{	
	printf("%i \r\r", segundo);
	fflush(stdout);
	sleep(1);
	}


	return EXIT_SUCCESS;


}
