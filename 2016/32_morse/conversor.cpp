#include <stdio.h>
#include <stdlib.h>

#define MAX 36
#define N 5

struct Datos{
    char letra;
    char morse[N];
};


	int main(int argc, const char **argv){
        FILE *pf = NULL;
        char teclado[MAX];
        struct Datos entrada[MAX];



        if (argc < 2){
            printf("Introduce la palabra.\n");
            return EXIT_FAILURE;
        }

        pf = fopen("Morse.txt", "r+");

        if (pf == NULL){
            fprintf(stderr, "No existe el archivo \"Morse.txt\"");
            return EXIT_FAILURE;
        }

 //        for (int i=0; i<30; i++)
   //         teclado = argv[i][0];
        for (int i=0; i<MAX; i++)
            fscanf(pf, "%s\t%c", &entrada[i].letra, entrada[i].morse);

        fclose(pf);
        for (int i=0; i<10; i++)
        for (int ii=1; ii<MAX; ii++){
              printf("%s de %c\n", entrada[i].letra, entrada[i].morse);
          if (argv[i][ii] == entrada[ii].letra){
            printf("%c\n", entrada[i].morse[i]);
          }
        }
//          printf("%c\n", argv[1][2]);
//        printf("%c", argv[1][0]);

        return EXIT_SUCCESS;

        }
