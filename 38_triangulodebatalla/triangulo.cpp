#include <stdio.h>
#include <stdlib.h>

      int main(int argc, const char **argv){

        int numero;
        int asterisco = 0;
        int espacio;
        int bandera = 0;

        printf("Introduce un número par: ");
        scanf("%d", &numero);

        if((numero % 2) == 0){
            espacio = numero;

            while(!(numero == asterisco)){

                  asterisco++; asterisco++;
                  for(int i = 0; i<espacio; i++)
                      printf(" ");
                  for(int i = 0; i<asterisco; i++)
                      printf("*");
                  for(int i = 0; i<espacio; i++)
                      printf(" ");
                  espacio--;
                  printf("\n");

            }
        }
/*        if((numero % 2) != 0){
            espacio = numero;
            while(!(numero == asterisco)){
                asterisco++;
                for(int i = 0; i<espacio; i++)
                    printf(" ");
                for(int i = 0; i<asterisco; i++)
                    printf("*");
                for(int i = 0; i<espacio; i++)
                    printf(" ");
                espacio--;
                if((bandera % 2) == 0){
                    printf("\n");
                    bandera++;
                }
                else
                    bandera++;

                
            }
        }
  */      else
            printf("He dicho que tiene que ser Par. \n");






	return EXIT_SUCCESS;


}
