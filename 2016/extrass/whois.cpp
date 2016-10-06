#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main(){
        char genero;

    
            
            printf("Vamos a jugar a un juego. \n\n Yo te hago unas preguntas mientras que tú piensas en alguien de esta clase. \n Y yo, pienso adivinar en quien piensas. \n Actualmente tengo 2 personas registradas. \n Primera Pregunta \n\n ¿Es una chica?: ");
            scanf(" %s", &genero);
         //STRCMP sirve para convertir un argumento escrito en 0 o 1, y así poder relaccionarlo fácilmente con el if
        if (strcmp(&genero, "si") || strcmp(&genero, "Si") || strcmp(&genero, "SI") == 0){
            printf("Es cristina\n ");
            
            printf("Yo GANÉ.\n");
            
        }
        
        else{
            printf("¿Mide más de 1.60?: \n");
            scanf(" %s", &genero);
       //hasta aquí está todo correcto: apartir de aqui empiezan las hobras man.
            
            if (strcmp(&genero, "no") || strcmp(&genero, "No") || strcmp(&genero, "NO") == 0){
                printf("Es _______\n ");
                
                printf("Yo GANÉ.\n");
            }
            
            else{
                printf("Mi cipote.");
            }
            
        }


	return EXIT_SUCCESS;


}
