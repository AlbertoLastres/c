 #include <stdio.h>
#include <stdlib.h>

int main(){

    int gasoil;
    double kilos;
    char respuesta[0x100];
    
    
       printf("Introduce los litros de Gasoil: ");
        scanf("%d", &gasoil);
    
    
        kilos = (gasoil * 0.84);
    
        printf("%dl. de gasoil, pesan %fkg.\n", gasoil, kilos);
    
    return EXIT_SUCCESS;
    }
