#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#define N 0x10

int sacar(int datos[N], int *cima){
    *cima--;
    return datos[*cima];

}
void meter(int nuevo, int pila[n], int *cima){
pila[*cima]=nuevo;
(*cima)++;


}
void mostrar_estado()

int main(int argc, const char **argv){
    int pila[N];
    int primera_pos_libre;
    int entrada, salida;
    while(1){
        entrada = -1;
        printf(": ");
        scanf(" %i", &entrada);
        __fpurge(stdin);
        printf("entrada = %i\n", entrada);
        if (entrada < 0)
            salida = sacar(pila, &primera_pos_libre);
        else
            meter(entrada, pila,&primera_pos_libre);
    }
    return EXIT_SUCCESS;
}
