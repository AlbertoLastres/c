#include <stdio.h>
#include <stdlib.h>
#define MAX 10

	int main(int argc, const char **argv){
          int numero[15];
          int auxiliar = 0;

          for(int i = 0; i<(MAX-1); i++){
              numero[i] = rand() % 9;
              printf("%d", numero[i]);
        }
          printf("\n");


         for(int i; i<MAX; i++){

    
          for(int i = 0; i<(MAX-1); i++){
              printf("%d", numero[i]);
          }
          printf("\n");
          return EXIT_SUCCESS;


}
