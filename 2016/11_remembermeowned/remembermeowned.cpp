#include <stdio.h>
#include <stdlib.h>

	int main(){

        int entrada;
        FILE *pf;
        char espejo;
                                                        // Esto te solicita un número y lo guarda en la variable "ENTRADA".
        printf("Introduce un número entre el 0 y el 999: ");
        scanf(" %i", &entrada);
        
                                                        // Esto abre el fichero "numero.txt" como escritura.
        pf = fopen("numero.txt", "w");
                                                        // Escribe en el fichero el primer número
        fprintf(pf,"%i", entrada % 10);
        entrada /= 10;
<<<<<<< HEAD
        
                                                        // Una vez dividido entre 10 realiza la misma operación con el segundo número.
        fprintf(pf,"%i", entrada % 10);
        entrada /= 10;
        
                                                        // Vuelve a realizarlo con el último número
        fprintf(pf,"%i", entrada % 10);
        printf("\n");
       
=======
                                                        // Una vez dividido entre 10 realiza la misma operación con el segundo número.
        fprintf(pf,"%i", entrada % 10);
        entrada /= 10;
                                                        // Vuelve a realizarlo con el último número
        fprintf(pf,"%i", entrada % 10);
        printf("\n");
>>>>>>> a92eecab98f9d36129a9f5ee610b25b4f0fd57d4
                                                        // Cierra el archivo en escritura
        fclose(pf);
                                                        // Abre el archivo en modo lectura
       
        pf = fopen("numero.txt", "r");
        espejo = fgetc(pf);
                                                        // Escribe en la pantalla el número al reves
        printf("Tu número es %c", espejo);
<<<<<<< HEAD
        
=======
>>>>>>> a92eecab98f9d36129a9f5ee610b25b4f0fd57d4

        
        espejo = fgetc(pf);                             // Iguala el archivo a la variable ESPEJO
        
        printf("%c", espejo);
<<<<<<< HEAD
       
=======
>>>>>>> a92eecab98f9d36129a9f5ee610b25b4f0fd57d4
        
        espejo = fgetc(pf);
        
        printf("%c y lo he guardado en numero.txt :)", espejo);
        
<<<<<<< HEAD
        
        printf("\n");
      
=======
        printf("\n");
>>>>>>> a92eecab98f9d36129a9f5ee610b25b4f0fd57d4
                                                        // Cierra el archivo de nuevo
         fclose(pf);
        
	return EXIT_SUCCESS;


}
