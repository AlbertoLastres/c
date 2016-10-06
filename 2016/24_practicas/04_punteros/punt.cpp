#include <stdio.h>
#include <stdlib.h>




int PideLosNumeros(int *Datos){
    printf("Introduce tu edad:");
    scanf("%i", Datos);
}


void PideLosNombres(char *Nombre){
    printf("Introduce tu nombre:");
    scanf("%s", Nombre);
}

int PideElNumeroDeLaSuerte(int *Suerte){
    printf("Introduce tu numero de la suerte:");
    scanf("%i", Suerte);
}

void MuestraElNombre(char Nombre){
    printf("\nTe llamas: %s", &Nombre);
}

int MuestraElNumero(int Numero){
    printf("\nTu edad es: %i", Numero);
}

int MuestraElNumeroDeLaSuerte(int Numero){
    printf("\nTu numero de la suerte es: %i\n", Numero);
}

int main(int argc, char **argv){

    int Numero;
    char Nombre;
    int Suerte;

    PideLosNumeros(&Numero);
    PideLosNombres(&Nombre);
    PideElNumeroDeLaSuerte(&Suerte);

    MuestraElNombre(Nombre);
    MuestraElNumero(Numero);
    MuestraElNumeroDeLaSuerte(Suerte); 
    //MuestralosNombres(&Alberto);



    return EXIT_SUCCESS;


}
