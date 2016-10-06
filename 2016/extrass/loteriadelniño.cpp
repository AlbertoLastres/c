#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	int main(int argc, const char **argv){
		
	    	int navidad;
		int suerte;
		int numero;
		int loteria;
	printf("Generador de números para la lotería del niño.\n");
	printf("Numero con el que jugaste en El Gordo.\n");
	printf("NAVIDAD(0-99999): ");
	scanf("%i", &navidad);

	if(navidad>99999){
		printf("Tu número es demasiado grande. Ya lo has hecho mal joder. así nunca va a tocarte.\n");
	return EXIT_FAILURE;
	}
	else if(navidad<0){
		printf("Tu número es negativo, no me jodas que has ido a pillar, por que un negativo no sale así por que si joder. \n No te va a tocar en la puta vida la lotería ya te lo voy avisando.\n");
	return EXIT_FAILURE;
	}

	else
	printf("Ahora vas a introducir tu número de la suerte. Da igual cual sea, pero como mucho ponemos dos cifras.\n");
	printf("SUERTE(0-99): ");
	scanf("%i", &suerte);

	if(suerte>99){
		printf("Tu número es demasiado grande. Ahora te vuelvo a mandar al principio, por tocapelotas, si estás viendo que te he puesto hasta 99 joder.\n");
	return EXIT_FAILURE;	
	}
	else if(suerte<0){
	    printf("¿Negativo? ¿Me lo dices en serio? Venga, vete a trabajar que teniendo un número negativo favorito no te va a tocar ni la nómina.\n");
	return EXIT_FAILURE;
	}

	printf("Ahora quiero que me introduzcas el número de tu casa, si vives en un portal, pues el número del portal, solo el número, sin piso ni escalera ni ascensor ni nada que no tenga nada que ver con el número de la calle.\n");
	printf("NÚMERO(0-999): ");
	scanf("%i", &numero);

	if(numero>999){
	    printf("Lo siento, nunca le ha tocado la lotería a nadie que viva en un número mayor al 999...");
	    return EXIT_FAILURE;
	}
	else if(numero<0){
	    printf("A mi no me la lías, no puedes vivir en un número negativo.");

	    return EXIT_FAILURE;
	}
	
	loteria = navidad * 222;
	suerte = 332 * suerte;
	loteria = loteria + suerte;

	printf("Ya hemos terminado. Ahora, con esos tres números que has introducido, vamos a generar un nuevo número, el número que te va a tocar este año en la lotería del niño. Lo presiento, lo se, se que el número que te va a tocar es el siguiente:\n");
	
	printf("\t%i\n", loteria % 100000);
	return EXIT_SUCCESS;


}
