#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

	int main(){


  /* Que vamos a hacer:
 
            - Vamos a realizar el programa maestro, ese que demuestra que nos hemos enterado de algo en el útlimo mes.
 
  / Que mandamientos vamos a seguir:
 
            - Entender el enunciado hasta sus ultimas consecuencias. (Todo lo que haga.)
        
            - Hacer 5 veces EJEMPLOS A MANO como si no existiese el ordenador. (Vamos a hacerlos, pero aún no se si a mano.)
 
            - Escribir el Algoritmo. (Venga, va, por esta vez, tambien vamos a cumplirlo.)
 
            - Hacer un seguimiento. (Tampoco va a ser en papel, pero voy a desglosar todo lo que hace y como lo hace.)
 
 
   / ALGORITMO:
   
*/
        
    
        char menu;
        FILE *pf;
        double levelone;
        double levelonegood;
        
        system("clear");
      /*  system("toilet --metal -f pagga \"M\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"ME\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MEC\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECA\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECAN\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECANO\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECANOG\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECANOGR\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECANOGRA\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECANOGRAF\"");
        sleep(1);
        system("clear");
        system("toilet --metal -f pagga \"MECANOGRAFI\"");
        sleep(1);
        system("clear");
      */  system("toilet --metal -f pagga \"MECANOGRAFIA\"");
        
        printf("Bienvenido al mejor juego de mecanografía!\n");
        printf("\tSelecciona una opción!\n"); //f significa salto de página.
        
        printf("\t\t\t\E[1m A \E[m para jugar.\n");
        printf("\t\t\t\E[1m B \E[m para elegir nivel.\n");
        printf("\t\t\t\E[1m C \E[m para ver la tabla de puntuaciones.\n");
        scanf(" %c", &menu);
        
        switch (menu){
                
                case 'a':
                system("clear");
                system("toilet --metal -f pagga \"Nivel 1\"");
                fflush(stdout);
                sleep(1);
                printf("\n\n\n");
                printf("Hoy se celebra un día muy especial donde todos nosotros debemos entregar algo que demuestre lo que sabemos sobre programación a Txema Gonzalez.\n\n");
                fflush(stdout);
                sleep(2);
                system("toilet --metal -f pagga 3");
                fflush(stdout);
                sleep(1);
                system("clear");
                system("toilet --metal -f pagga \"Nivel 1\"");
                printf("\n\n\n");
                printf("Hoy se celebra un día muy especial donde todos nosotros debemos entregar algo que demuestre lo que sabemos sobre programación a Txema Gonzalez.\n\n");
                system("toilet --metal -f pagga 2");
                fflush(stdout);
                sleep(1);
                system("clear");
                system("toilet --metal -f pagga \"Nivel 1\"");
                printf("\n\n\n");
                printf("Hoy se celebra un día muy especial donde todos nosotros debemos entregar algo que demuestre lo que sabemos sobre programación a Txema Gonzalez.\n\n");
                system("toilet --metal -f pagga 1");
                fflush(stdout);
                sleep(1);
                printf("Escribe aquí: ");
                scanf(" %lf", &levelone);
                
                pf = fopen("level/levelone.txt", "r");
                fscanf(pf, " %lf", &levelonegood);
                
                
             if (levelone == levelonegood){
               system("clear");
                 system("toilet --metal -f pagga \"CORRECTO\"");
                 fflush(stdout);
                 sleep(0.5);
                 system("clear");
                 system("toilet --gay -f pagga \"CORRECTO\"");
                 fflush(stdout);
                 sleep(0.5);
                 system("clear");
                 system("toilet --metal -f pagga \"CORRECTO\"");
                 fflush(stdout);
                 sleep(0.5);
                 system("clear");
                 system("toilet --gay -f pagga \"CORRECTO\"");
                 fflush(stdout);
                 sleep(0.5);
                 system("clear");
                 
                 printf("Guarda esta contraseña!\f");
                 printf("soylahostia\n");
                 fflush(stdout);
                 sleep(1);
                 printf("\n¿Seguimos?");
               }
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                break;
                
                case 'b':
                printf("has elegido b");
                
                break;
                
                case 'c':
                printf("has elegido c");
                break;
        }
        

	return EXIT_SUCCESS;


}
