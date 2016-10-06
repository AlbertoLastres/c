#include <stdio.h>
#include <stdlib.h>

	int main(int argc, const char **argv){

        int Multiplicador = 0;
        int Multiplicando = 0;
        int Resultado = 0;

        //Interfaz gráfica (já):
        printf("Introduce los valores [int]x[int]:");
        scanf("%dx%d", &Multiplicador, &Multiplicando);


        //Evitar entrar en el bucle para que no se quede forever pensando:
        if (Multiplicando == 1) {
            printf("Resultado: %d\n", Multiplicador);
            return EXIT_SUCCESS;
        }

        //Bucle principal:
        do{
            if(Multiplicando % 2 == 1) Resultado = Multiplicador + Resultado;
            Multiplicador = Multiplicador * 2;
            Multiplicando = Multiplicando / 2;
          } while (Multiplicando != 1);
        //Último dígito:
        if (Multiplicando == 1) Resultado = Multiplicador + Resultado;

        //Resultado:
        printf("Resultado: %d\n", Resultado);





        //A la puta todo:
	return EXIT_SUCCESS;


}
