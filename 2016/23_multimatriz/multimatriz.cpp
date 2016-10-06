#include <stdio.h>
#include <stdlib.h>

//C[i][j]=A[i][k]xb[k][j]
#define A 4
#define B 3
#define C 3
#define D 5
#define E 4
#define F 5

	int main(int argc, char **argv){

        int MatrizA[A][B] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
        int MatrizB[C][D] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
        int MatrizC[E][F] = {0, 0};


        for(int i = 0; i<A; i++){
            for(int j = 0; j<F; j++){
                for(int x = 0; x<B; x++){
                    MatrizC[i][j] = (MatrizA[i][x] * MatrizB[x][j]) + MatrizC[i][j];
                }
            }
        }

        for(int ff = 0; ff<E; ff++){
            printf("\n");
            for (int cm = 0; cm<F; cm++){
                        printf("%i", MatrizC[ff][cm]);
            printf("\n" );
        }
        }


              return EXIT_SUCCESS;


}
