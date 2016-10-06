#include <stdio.h>
#include <stdlib.h>

#define N 10


        int escanear(int *valor){
        printf("Introduce un valor(1-4): ");
        printf("\n 1. Leer \n 2. Introducir \n 3. Sacar \n 4. Borrar \n");      
        scanf("%i", valor);
        }

        int introducir_datos(int *Array){
            for(int i = 0; i<N; i++){
                printf("Introduce el %i valor.", i);
                      scanf("%i", &Array[i]);
                };
        }

        int leer_datos(int *Array){
            printf("Estos son los datos: ");
            for(int i = 0; i<N; i++){
                printf("\n %i", Array[i]);
                };
        }

        int sacar_datos(int *Array){
            printf("Introduce el dato que quieres sacar: ");
                for(int i = 0, n = 0; i<N; i++ && n++){
                    printf("La posicion %i es %i.\n", n, Array[i]);
                };
                int n;
                printf("Seleccióna una posición: ");
                    scanf("%i", &n);
                    Array[n] = 0;
                for(int i = 0, n = 0; i<N; i++, n++){
                    printf("La posición actualizada de %i es %i.\n", n, Array[i]);
                };
        }

	int main(int argc, const char **argv){

        int valor;
        int Array[N];

        escanear(&valor);
        if(valor == 1) leer_datos(&Array[N]);
        if(valor == 2) introducir_datos(&Array[N]);
        if(valor == 3) sacar_datos(&Array[N]);
        //if(valor == 4) borrar_datos;
        else{ 
           printf("Numero erroneo");
           escanear(&valor);
        };
        printf("%i\n", valor);


	return EXIT_SUCCESS;


}
