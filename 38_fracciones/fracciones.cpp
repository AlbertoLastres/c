#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, const char **argv){

    //Declarar la variable cima con memoria variable y resultado.
    double *dato = NULL;
    int cima = 0;
    double resultado = 0;
    dato = (double*) malloc(sizeof(double));
    bzero(dato, sizeof(double));

    while(1){
        //Pide un numero al usuario y metelo en el espacio reservado..
        printf("Introduce un número: ");
        scanf("%lf", &dato[cima]);

        //Si es 0, deja de introducir numeros y reduce la cima
        if(dato[cima] == 0){
            cima--;
            break;
        }

        //Incrementa la cima
        cima++;

        //Incrementa en uno el espacio reservado.
        dato = (double*) realloc((dato), (cima+1)*sizeof(double));

    }

    //Realiza la división de 1 entre la cima de los datos y guardalo en el resultado
    resultado = 1/dato[cima];

    // Realiza un bucle para llegar hasta el principio de cima/
    do{

        //Reduce en uno el valor de cima para la siguiente operación
        cima--;

        //Suma el dato al resultado anterior
        resultado += dato[cima];

        //Realiza la divisiñon de 1 entre la cima de los datos y guardalo en resultado
        resultado = 1/resultado;
    }while(cima>=0);

    //Imprime el resultado
    printf("Resultado: %lf\n", resultado);
    free(dato);


    return EXIT_SUCCESS;


}
