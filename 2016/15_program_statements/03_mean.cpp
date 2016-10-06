#include <stdio.h>
#include <stdlib.h>

	int main(){

		int total=0;
		int contador=1;
		
		system("clear");
		printf("\t POSITIVE MEAN CALCULATOR BY AlbertoLastres");
		printf("\n");
		printf("The calculator will stop with negative number excluding it.\n\n");
			for(int numero=1; numero>-1;){
				printf("Insert Value %i: ", contador);
				scanf("%i", &numero);	
				
				if(numero>=0){
						total = total + numero;
						contador++;
					     }
			

				
				else{
						    contador--;
				                    }
			
			         		     }

		total = total / contador;
		printf("\nThe Mean of positive numbers is: %i\n", total);
		return EXIT_SUCCESS;


}












