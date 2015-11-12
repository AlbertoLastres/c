#include <stdio.h>
#include <stdlib.h>

int main(){

    float gasoil;
    float kilos;
    char respuesta[0x100];
    
    
        system("zenity --entry --title \" Pesador de Gasoil \" --text \" Introduce los litros de Gasoil:\" ");
        scanf("%f", &gasoil);
    
    
        kilos = (gasoil * 0.84);
    
        sprintf(respuesta,
                "zenity --warning --title \" Pesador de Gasoil \" --test \" '%f' litros de Gasoil, pesan '%f' KG.", gasoil, kilos);
        system(respuesta);
    
    return EXIT_SUCCESS;
    }
