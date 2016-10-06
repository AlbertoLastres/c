#include <stdlib.h>
#include <stdio.h>
// http://GITHUB.COM/AlbertoLastres/c
// Vamos a preguntar por el lado de un triángulo y vamos a calcular lo siguiente:  Area, Perímetro y Altura

	int main(){
		double lado;
        int menu = 0;
        
// Empezamos por un menu y preguntar el lado del triángulo.
        system("clear");
        printf("\t\t\tEquilateral Triangle Helper\n");
        printf("Enter only side triangle in centimeters: ");
// Escanea el lado y lo guarda en la variable %lf que guarda numeros con decimales.
        scanf(" %lf", &lado);
// Imprime un pequeño menú preguntando por lo que quiere calcular.
        printf("\nWhat do you want to know?\n");
        printf("1.Area\n");
        printf("2.Perimeter\n");
        printf("3.Height\n");
        
        printf("Chose Only One (1/2/3): ");
// Escanea la opción seleccionada en el menú y lo guarda en un entero.
        scanf(" %d", &menu);
        
        
        switch(menu){
                
            case 1:
                
// Si selecciona Area, se aplica la formula con la raiz ya calculada para quitarle peso al sistema.
                
                lado = (lado * lado) * (1.73205080757 / 4);
                printf("\v\tTriangle's area: %lf cm²", lado);
                break;
                
            case 2:
                
// Si selecciona Area, se aplica la formula con el enroque.
                
                lado *= 3;
                printf("\t\vTriangle's perimeter: %lf cm", lado);
                break;
                
            case 3:
                
// Si selecciona Altura, se aplica la formula por partes, haciendo primero lo del paréntesis.
                lado = (1.73205080757 * lado) / 2;
                printf("\t\vTriangle's height: %lf cm", lado);
                break;
            default:
                printf("Please choose only 1, 2 or 3.\nAborting\n");
                
        }
        
// Salto de linea
        
        printf("\n\n");
        
// Exit Success :D
	return EXIT_SUCCESS;
}