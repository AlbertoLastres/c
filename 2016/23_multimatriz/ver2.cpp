#include <stdio.h>
#include <stdlib.h>

//C[i][j]=A[i][k]xb[k][j]
//#define A 4
//#define B 3
//#define C 3
//#define D 5
//#define E 4
//#define F 5

int main(int argc, char **argv){
//Declaración variables para las matrices.
    int A,
        B,
        C,
        D;

//Pregunta al Usuario los valores:
        printf("Introduce el tamaño de la primera matriz:\n");
        printf("\tFilas: ");
        scanf("%i", &A);
        printf("\tColumnas: ");
        scanf("%i", &B);
        printf("Introduce el tamaño de la segunda matriz:\n");
        printf("\tFilas: ");
        scanf("%i", &C);
        printf("\tColumnas: ");
        scanf("%i", &D);

        if(B == C){
         int MatrizA[A][B];
         int MatrizB[C][D];
         int MatrizC[A][D] = {0, 0};




                printf("Valores de la matriz de tamaño %ix%i:\n ", A, B);
    for(int i = 0; i<A; i++)
        for(int ii = 0; ii<B; ii++){
            printf("Introduce el valor %i,%i: ", i, ii);
            scanf("%i", &MatrizA[i][ii]);
        }
                printf("Valores de la matriz de tamaño %ix%i:\n ", C, D);
    for(int i = 0; i<C; i++)
        for(int ii = 0; ii<D; ii++){
            printf("Introduce el valor %i,%i: ", i, ii);
            scanf("%i", &MatrizB[i][ii]);
        }
                printf("Los resultados son: ");
    for(int i = 0; i<A; i++){
        for(int j = 0; j<D; j++){
                MatrizC[i][j] = 0;
            for(int k = 0; k<B+0; k++){
                MatrizC[i][j] = (MatrizA[i][k] * MatrizB[k][j]) + MatrizC[i][j];
            }
        }
    }

    for(int ff = 0; ff<A; ff++){
        printf("\n\t");
        for (int cm = 0; cm<D; cm++){
            printf("%i\t ", MatrizC[ff][cm]);
        }
            printf("\n");

    }


    return EXIT_SUCCESS;


}       printf("La matriz no se puede calcular.\n");
        return EXIT_FAILURE;
}
