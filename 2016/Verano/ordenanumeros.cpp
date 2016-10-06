#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int main(int argc, const char **argv){

    int numero[MAX];
    int resultado;
    int check = 2;
    int r = 0;
    int bandera = 0;
    int fin[MAX];


    printf("ESTE PROGRAMA HACE AGUAS.\n SOLO FUNCIONA CUANDO LE DA LA PUTA GANA\n Y CUANDO LO PONES DESORDENADO.\n");
    for(int i = 0; i<MAX-1; i++){
        printf("Introduce Valor %i: ", i+1);
        scanf("%i", &numero[i]);
    }

    //    if(numero[0] < numero[1]) resultado = numero[0];
    //    if(numero[1] < numero[0]) resultado = numero[1];

    /*    for(int i = 3; i<MAX; i++){
          if(resultado[i-3] < numero[i]) resultado[i-2] = numero[i+1]
          }*/

    while(r != MAX+1){
        if(bandera == 0){
            if(numero[0] < numero[1]) resultado = numero[0];
            else resultado = numero[1];
            bandera++;
        }
        if(numero[check] < resultado) resultado = numero[check];
        check++;
        if(check == MAX){
            fin[r] = resultado;
            for(int i=0; i<MAX; i++) if(numero[i] == resultado) numero[i] = 99999;
            check = 0;
            r++;
            bandera--;
        }

    }
    printf("Resultado: ");
    for(int i = 0; i<MAX-1; i++){
        printf("%i", fin[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("SI LE QUITAS LOS ARRAYS QUEDA\n UN BONITO PROGRAMA QUE TE DICE\n CUAL ES EL NÚMERO INTRODUCIDO\n MÁS PEQUEÑO. :D\n");




    return EXIT_SUCCESS;


}
