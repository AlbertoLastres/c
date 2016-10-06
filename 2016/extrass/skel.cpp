#include <stdio.h>  \\Esto siempre se pone. Sirve para que el printf y el scanf funcionen.
#include <stdlib.h>  \\Este hace que el EXIT_SUCCESS tambien funcione

	int main(){     //Esto sirve para indicar que es el cuerpo del programa, fuera puedes escribir pero no es recomendable, esto es lo importante.

        int x; // Tu variable, siempre hay que ponerlas aqui, al principio del programa.
        
        printf("Introduce un numero: "); //Le pide al usuario que introduzca un numero.
        scanf(" %i", &x); //Esto paraliza el ordenador hasta que el usuario escribe un numero y le da al ENTER.
        
        x = x + 5; //La operación que quieres hacer, realmente convierte la variable en lo que tu quieras, aqui es donde hay que poner lo de dividir multiplicar o lo que sea.
        
        printf("Tu numero es %i", x); //Esto vuelve a imprimir en la pantalla lo que tu quieras, para decirle que ponga lo de la variable X, tienes que decirle que tipo de palabra es (un numero o una palabra) poniendole el "%i" donde tu quieras que muestre la variable, y al final
                                                                                                                                                                                                        //de la frase, decirle la variable que es.






	return EXIT_SUCCESS; //Esto es una mierda que no sirve para tomar por culo, solo para decirle al ordenador que ha acabado el programa.


} //Aqui acaba el "MAIN" de arriba.
