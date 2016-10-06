#include <stdio.h>
#include <stdlib.h>

	int main(){

		int numero;
		int total=0;
	
		system("clear");
		printf("\t\tMEAN CALCULATOR");
		printf("\n");
		for(int contador=1; contador<11; contador++){
			printf("\tIntroduce el valor número %i: ", contador);
			scanf("%i", &numero);
			total = total + numero;
		}
			total = total / 10;
		printf("\t\tLa media es %i\n", total);





	return EXIT_SUCCESS;


}
