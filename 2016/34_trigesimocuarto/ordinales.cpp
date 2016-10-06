#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


#define MAX 1000
#define ORDINALES "ordinales.txt"
struct Informacion{
    char Numero[4];
    char Ordinal[MAX];
};

int main(int argc, const char **argv){

    char *p; //Puntero de paso
    int num; //Valor obtenido del argv convertido a int
	FILE *pf; //Abrir el archivo
    struct Informacion Datos[MAX]; //Abrir la estructura :D

    bzero(Datos, MAX * sizeof(struct Informacion)); //Poner a Cero la estructura :D
    //Comprobar errores :D
    if (argc < 2){
        fprintf(stderr, "Uso: ./ordinal <Numero> \n");
        exit(EXIT_FAILURE);
    }

    if (!(pf = fopen(ORDINALES, "r+"))){
        fprintf(stderr, "Falta el archivo ORDINALES \n");
        exit(EXIT_FAILURE);
    }

    for (int i=0; i<MAX; i++)
        fscanf(pf, "%s\t%s", Datos[i].Numero, Datos[i].Ordinal);
    fclose(pf);
	
    long conv = strtol(argv[1], &p, 10); //Conversor de char** a int
    num = conv;
    num --;

	if (num > MAX){
		fprintf(stderr, "El número máximo es 1000.\n");
		exit(EXIT_FAILURE);
	}

	else printf("La respuesta es: %s\n", Datos[num].Ordinal);
        
	return EXIT_SUCCESS;


}
