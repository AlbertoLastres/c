#include <stdio.h>
#include <stdlib.h>

	int main(){
        int valor;
        int hexdecimal;

        printf("Introduce el numero que quieres convertir: ");
        scanf(" %d", &valor);
        
        printf("%d en Hexadecimal es: %X\n",valor, valor);
        printf("%d en Octal es: %o\n", valor, valor);
        printf("%d en Binario aun no lo sé, pero pronto lo sabré.\n", valor);



	return EXIT_SUCCESS;


}
