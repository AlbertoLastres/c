#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

	int main(){
        int valor;


        printf("Introduce el numero que quieres convertir: ");
        scanf(" %d", &valor);
        
        printf("%d en Hexadecimal es: %X\n",valor, valor);
        printf("%d en Octal es: %o\n", valor, valor);
        printf("%d en Binario es: %d\n", valor, valor);



	return EXIT_SUCCESS;


}
