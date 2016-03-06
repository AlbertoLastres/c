#include <stdio.h>
#include <stdlib.h>

	int main(int argc, char **argv){

        // Vamos a multiplicar dos valores de un mismo array.

            int array[5] = {1, 2, 3, 4, 5};
            printf("%d\n", array[0]);
            printf("%d\n", array[1]);
            printf("%d\n", array[2]);
            printf("%d\n", array[3]);
            printf("%d\n", array[4]);

                array[0] = 0;
                array[0] = array[2] * array[4];
            printf("%d\n", array[0]);
            printf("%d\n", array[1]);
            printf("%d\n", array[2]);
            printf("%d\n", array[3]);
            printf("%d\n", array[4]);

	return EXIT_SUCCESS;


}
