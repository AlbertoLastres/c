#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

	int main(){


  /* Que vamos a hacer:
 
            - Vamos a realizar el programa maestro, ese que demuestra que nos hemos enterado de algo en el útlimo mes.
 
  /* Que mandamientos vamos a seguir:
 
            - Entender el enunciado hasta sus ultimas consecuencias. (Todo lo que haga.)
        
            - Hacer 5 veces EJEMPLOS A MANO como si no existiese el ordenador. (Vamos a hacerlos, pero aún no se si a mano.)
 
            - Escribir el Algoritmo. (Venga, va, por esta vez, tambien vamos a cumplirlo.)
 
            - Hacer un seguimiento. (Tampoco va a ser en papel, pero voy a desglosar todo lo que hace y como lo hace.)
 
 
   /* ALGORITMO:
 
            - Imprimir un mensaje de bienvenida
            - Imprimir un mensaje con mi Github y mi repo.
            - Pedirle al usuario que ingrese el número de dias que le gustaría cenar fuera de casa a la semana.
            - Escanear el número de días que introduzca y guardarlo en la variable dias.
            - Lo multiplicamos por 2
            - Le sumamos 5
            - Lo multiplicamos por 50
            - Si ya ha pasado tu cumpleaños este año, súmale 1755
            - Si aun no ha pasado, le sumamos 1754
            - Le restamos el año de nacimiento del usuario.
            - El número que obtenemos siempre tendrá 3 cifras.
 
            - La primera cifra es la del principio.
            - La segunda cifra es tu edad.
 
 
  /* CODIGO:
   */   int dias;
        int siono;
        int anio;
        
      //  - Imprimir un mensaje de bienvenida:
        printf("Bienvenido, ponte cómodo mientras hacemos un truco de mágica.");
        fflush(stdout);
        sleep(1);
        
        printf("\n");
        printf("Para este truco de mágia, utilizaremos conceptos matemáticos. ¿Estás preparado?");
        printf("\n");
      //  - Imprimir un mensaje con mi Github y mi repo.
        printf("Mi GitHub es \"AlbertoLastres\" y la repo donde encontrarás este programa se llama \"c\"\! Disfrútalo!\:\)\!");
        printf("\n");
      //  - Pedirle al usuario que ingrese el número de dias que le gustaría cenar fuera de casa a la semana.
        printf("\n ¿Cuántos días a la semana trabajas?");
      //  - Escanear el número de días que introduzca y guardarlo en la variable dias.
        scanf(" %i", &dias);
      //  - Lo multiplicamos por 2
        dias *= 2;
      //  - Le sumamos 5
        dias += 5;
      //  - Lo multiplicamos por 50
        dias *= 50;
      //  - Preguntar si este año ha pasado ya su cumpleaños., súmale 1755
        printf("\n Este año, ha sido ya tu cumpleaños?");
      //  - Escanear la respuesta al cumpleaños y almacenarlo en la variable siono
        scanf(" %s", &siono)
      //  - Si la respuesta es que sí, le sumamos 1755.
        if (strcmp(&siono, "si") || strcmp(&siono, "SI") || strcmp(&siono, "Si") == 0){
            dias += 1755;
      //  - Le preguntamos al usuario en que año ha nacido.
            printf("\n¿En qué año has nacido?");
      //  - Almacenamos el año recibido en la variable anio.
            scanf(" %i", &anio);
      //  - Le restamos el año de nacimiento a la variable dias.
                dias -= anio;
      //  - Mostramos el numero obtenido. La primera cifra es el numero indicado al principio. La segunda cifra es la edad.
            printf("\nTu número de la suerte es el %i, El primer número es el que introduciste al principio, y los dos últimos son tu edad. Por cierto, felicidades atrasadas!.", dias);

            
        }
            //  - Si la respuesta es que no, le sumamos 1754.
                else if (strcmp(&siono, "no") || strcmp(&siono, "NO") || strcmp(&siono, "No") == 1){
                dias += 1754;
            //  - Le preguntamos al usuario en que año ha nacido.
                printf("\n¿En qué año has nacido?");
            //  - Almacenamos el año recibido en la variable anio.
                scanf(" %i", &anio);
            //  - Le restamos el año de nacimiento a la variable dias.
                    dias -= anio;
            //  - Mostramos el número obtenido. La primera cifra es el número indicado al principio. La segunda cifra es la edad.
                    printf("\nTu número de la suerte es el %i, El primer número es el que introduciste al principio, y los dos últimos son tu edad.", dias);
        }
        
        else {
            printf("\n No te he entendido, introduce Si o No");
    
        }

 


	return EXIT_SUCCESS;


}
