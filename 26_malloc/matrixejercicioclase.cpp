#include <stdio.h>
#include <stdlib.h>

void set(int *matriz, int fila, int col, int dato){
    int posicion;
    matriz[posicion] = dato;
    posicion++;
}

int get(int *matriz, int fila, int col){
    int posicion = 0;
    printf("El resultado es:\n");
    for (int f=0; f<fila; f++)
        for(int c=0; c<col; c++){

    printf("En la posición %i,%i: %i\n", f+1, c+1, matriz[posicion]);
    posicion++;
}

}

int main(int argc, const char **argv){

    int *a = NULL;
    int filas, col; // Preguntar al usuario.
        int buffer;


        printf("Introduce las filas: ");
        scanf("%i", &filas);
        printf("Introduce las columnas: ");
        scanf("%i", &col);

    // reservar espacio para a
        a = (int *) malloc(filas*col*sizeof(int));



    for (int f=0; f<filas; f++)
        for (int c=0; c<col; c++){
            printf("(%i, %i): ", f+1, c+1);
            scanf(" %i", &buffer);
            set(a, f+1, c+1, buffer);
        }


    // Imprimir la matriz usando get
        //printf("Que dato quieres mostrar: ");
        //printf("\nFila:");
        //scanf("%i", &filas);
        //printf("\nColumna:");
        //scanf("%i", &col);
        get(a, filas, col);
    // Liberar espacio para a
        free(a);
    return EXIT_SUCCESS;
}
