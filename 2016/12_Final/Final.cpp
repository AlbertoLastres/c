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
        char levelOne[150];
        char levelOneBad;
        char levelOnePassed;
        char levelTwo[150];
        char levelTwoPassed;
        char levelTwoBad;
        char finallevel[150];
        char felicidades;
        char clave[15];
        char halloffame[256];
        char newname[30];
    
        system("clear");
        system("toilet --metal -f pagga \"M\"");
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
        system("toilet --metal -f pagga \"MECANOGRAFIA\"");
        
        printf("Bienvenido al mejor juego de mecanografía!\n");
        printf("\tSelecciona una opción!\n");
        
        
        printf("\t\t\t\E[1m A \E[m para jugar.\n");
        printf("\t\t\t\E[1m B \E[m para elegir nivel.\n");
        printf("\t\t\t\E[1m C \E[m para ver la tabla de puntuaciones.\n");
        scanf(" %c", &menu);
        
        
    switch (menu){
            
                case 'a': // JUGAR
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
                fflush(stdin);
                fflush(stderr);
                printf("Escribe aquí: ");
                scanf(" %[^\n]s", levelOne);
            
            
            
            
            
            if (strcmp(levelOne, "Hoy se celebra un día muy especial donde todos nosotros debemos entregar algo que demuestre lo que sabemos sobre programación a Txema Gonzalez.") == 0){
                system("clear");
                system("toilet --metal -f pagga \"CORRECTO\"");
                fflush(stdout);
                sleep(1);
                system("clear");
                system("toilet --gay -f pagga \"CORRECTO\"");
                fflush(stdout);
                sleep(1);
                system("clear");
                system("toilet --metal -f pagga \"CORRECTO\"");
                fflush(stdout);
                sleep(1);
                system("clear");
                system("toilet --gay -f pagga \"CORRECTO\"");
                fflush(stdout);
                sleep(1);
                system("clear");
                printf("Guarda esta contraseña!\f");
                printf("\E[1m SoyLaHostia \E[m\n");
                fflush(stdout);
                sleep(3);
                printf("\n¿Seguimos?");
                scanf(" %s", &levelOnePassed);
                switch (levelOnePassed){ //Menu nivel dos
                case 's':
                            system("clear");
                            system("toilet --metal -f pagga \"Nivel 2\"");
                            fflush(stdout);
                            sleep(1);
                            printf("\n\n\n");
                            printf("The world Is a Vampire.\n\n");
                            fflush(stdout);
                            sleep(2);
                            system("toilet --metal -f pagga 3");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"Nivel 2\"");
                            printf("\n\n\n");
                            printf("The world Is a Vampire.\n\n");
                            system("toilet --metal -f pagga 2");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"Nivel 2\"");
                            printf("\n\n\n");
                            printf("The world is a Vampire.\n\n");
                            system("toilet --metal -f pagga 1");
                            fflush(stdout);
                            sleep(1);
                            fflush(stdin);
                            fflush(stderr);
                            printf("Escribe aquí: ");
                            scanf(" %[^\n]s", levelTwo);
                            
                        if (strcmp(levelTwo, "The world is a Vampire.") == 0){ //Acierto Nivel dos
                                system("clear");
                                system("toilet --metal -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --gay -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --metal -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --gay -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                
                                printf("Guarda esta contraseña!\f");
                                printf("\E[1m ImTheMotherFucker \E[m\n");
                                fflush(stdout);
                                sleep(3);
                                printf("\n¿Seguimos?");
                                scanf(" %s", &levelTwoPassed);
                                
                            switch (levelTwoPassed){ //Menu nivel 3
                                    case 's':
                                        system("clear");
                                        system("toilet --metal -f pagga \"NIVEL FINAL\"");
                                        fflush(stdout);
                                        sleep(1);
                                        printf("\n\n\n");
                                        printf("MANDAMIENTOS:\n\n-Entender el enunciado hasta sus últimas consecuencias.\n\n-Hacer 5 veces ejemplos a mano como si no existiese el ordenador.\n\n-Escribir el algoritmo.\n\n-Codificar el algoritmo.\n\n-Hacer un seguimiento.\n\n");
                                        fflush(stdout);
                                        sleep(2);
                                        system("toilet --metal -f pagga 3");
                                        fflush(stdout);
                                        sleep(1);
                                        system("clear");
                                        system("toilet --metal -f pagga \"NIVEL FINAL\"");
                                        printf("\n\n\n");
                                        printf("MANDAMIENTOS:\n\n-ENTENDER el enunciado hasta sus últimas consecuencias.\n\n-HACER 5 veces EJEMPLOS a mano como si no existiese el ordenador.\n\n-Escribir el ALGORITMO.\n\n-CODIFICAR el algoritmo.\n\n-Hacer un SEGUIMIENTO.\n\n");
                                        system("toilet --metal -f pagga 2");
                                        fflush(stdout);
                                        sleep(1);
                                        system("clear");
                                        system("toilet --metal -f pagga \"NIVEL FINAL\"");
                                        printf("\n\n\n");
                                        printf("Escribe SOLO las palabras en mayúsculas y acaba con un punto.\n\n");
                                        system("toilet --metal -f pagga 1");
                                        fflush(stdout);
                                        sleep(1);
                                        fflush(stdin);
                                        fflush(stderr);
                                        printf("Escribe aquí: ");
                                        scanf(" %[^\n]s", finallevel);
                                        
                                    if (strcmp(finallevel, "ENTENDER HACER EJEMPLOS ALGORITMO CODIFICAR SEGUIMIENTO.") == 0){ //Acierto Nivel 3
                                            system("clear");
                                            system("toilet --metal -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            system("toilet --gay -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            system("toilet --metal -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            system("toilet --gay -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            
                                            printf("¡FELICIDADES!\f");
                                        
                                          pf = fopen(".hof.txt", "w+");
                                            fscanf (pf, " %[^\n]s", halloffame);
                                             fclose(pf);
                                        
                                        system("toilet --gay -f pagga \"HALL OF FAME\"");
                                        printf("Este es nuestro hall of fame: \n\n%s\n\n", halloffame);
                                        
                                        printf("¿Quieres añadir tu nombre a la lista? Escribe tu nombre o pon que no.\n");
                                        fflush(stdout);
                                        sleep(1);
                                        scanf(" %[^\n]s", newname);
                                        
                                        if (strcmp(newname, "no") || strcmp(newname, "NO") || strcmp(newname, "No") || strcmp(newname, "nO") == 0){
                                            printf("Vale, no te añado.");
                                            
                                            do{ //Bucle
                                                system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                felicidades += 1;
                                                system("clear");
                                                printf("Créditos:");
                                                system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                system("clear");
                                                printf("Créditos:");
                                                system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                felicidades += 1;
                                                system("clear");
                                                printf("Dirección:");
                                                system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                system("clear");
                                                printf("Alberto Lastres");
                                                system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                felicidades += 1;
                                                system("clear");
                                                printf("Programación:");
                                                system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                system("clear");
                                                printf("Alberto Lastres");
                                                system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                felicidades += 1;
                                                system("clear");
                                                printf("Todo lo demas:");
                                                system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                system("clear");
                                                printf("Alberto Lastres");
                                                system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                felicidades += 1;
                                                system("clear");
                                                printf("Apoyo moral:");
                                                system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                system("clear");
                                                printf("Andrés el que se sienta a mi lado en clase.");
                                                
                                            }while (felicidades < 100); //Bucle
                                        }
                                        
                                        else {
                                            
                                            printf("A partir de ahora %s, estará en nuestro Hall of Fame.", newname);

                                                fprintf(pf, " %s", newname);
                                                   
                                                   do{ //Bucle
                                                       system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                       felicidades += 1;
                                                       system("clear");
                                                       printf("Créditos:");
                                                       system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                       system("clear");
                                                       printf("Créditos:");
                                                       system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                       felicidades += 1;
                                                       system("clear");
                                                       printf("Dirección:");
                                                       system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                       system("clear");
                                                       printf("Alberto Lastres");
                                                       system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                       felicidades += 1;
                                                       system("clear");
                                                       printf("Programación:");
                                                       system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                       system("clear");
                                                       printf("Alberto Lastres");
                                                       system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                       felicidades += 1;
                                                       system("clear");
                                                       printf("Todo lo demas:");
                                                       system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                       system("clear");
                                                       printf("Alberto Lastres");
                                                       system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                       felicidades += 1;
                                                       system("clear");
                                                       printf("Apoyo moral:");
                                                       system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                       system("clear");
                                                       printf("Andrés el que se sienta a mi lado en clase.");
                                                       
                                                   }while (felicidades < 100); //Bucle
                                        }

                                         
                                        
                                    } //Acierto Nivel 3

                                    else{ //Fallo nivel 3
                                                printf("has perdido pringado\n");
                                    } //Fallo nivel 3

                                    
                                        
                                        
                                
                                        case 'n':
                                                printf("Gracias por jugar\n");
                            
                                                break;
                                        
                                        default:
                                        
                                        printf("No te he entendido. Saliendo\n");
                                                break;
                                    
                            } //Menu nivel 3


                        } //Acierto Nivel 2
                        
                        else{ //Fallo nivel 2
                            system("clear");
                            system("toilet --metal -f pagga \"FALLASTE\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --gay -f pagga \"FALLASTE\"");
                            fflush(stdout);
                            sleep(1);

                        } // Fallo nivel 2
                        
                          case 'n':
                            system("clear");
                            system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            break;
                } //Menu nivel dos



            } //Nivel Uno Acierto
            else{ //Nivel Uno Fallo
                    system("clear");
                    system("toilet --metal -f pagga \"ERROR\"");
                    fflush(stdout);
                    sleep(1);
                    system("clear");
                    system("toilet --gay -f pagga \"ERROR\"");
                    fflush(stdout);
                    sleep(1);
                    system("clear");
                    system("toilet --metal -f pagga \"ERROR\"");
                    fflush(stdout);
                    sleep(1);
                    system("clear");
                    system("toilet --gay -f pagga \"ERROR\"");
                    fflush(stdout);
                    sleep(1);
                    printf("¡Has fallado! ¿Quiéres volver a intentarlo?");
                    scanf("%s", &levelOneBad);
                switch (levelOneBad){ //Nivel Uno Fallo Menu
                    
                            case 's':
                    
                                system("./final");
                    
                                break;
                    
                            case 'n':
                            system("clear");
                            system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                            fflush(stdout);
                            sleep(1);
                            break;
                } //Nivel Uno Fallo Menú
            } //Nivel Uno Fallo


                break;
                
                case 'b':
                printf("Introduce una contraseña: ");
                scanf("%s", clave);
            
                if (strcmp(clave, "SoyLaHostia") == 0){
                    
                   
                    printf("\n¿Seguimos?");
                    scanf(" %s", &levelOnePassed);
                    switch (levelOnePassed){ //Menu nivel dos
                        case 's':
                            system("clear");
                            system("toilet --metal -f pagga \"Nivel 2\"");
                            fflush(stdout);
                            sleep(1);
                            printf("\n\n\n");
                            printf("The world Is a Vampire.\n\n");
                            fflush(stdout);
                            sleep(2);
                            system("toilet --metal -f pagga 3");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"Nivel 2\"");
                            printf("\n\n\n");
                            printf("The world Is a Vampire.\n\n");
                            system("toilet --metal -f pagga 2");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"Nivel 2\"");
                            printf("\n\n\n");
                            printf("The world is a Vampire.\n\n");
                            system("toilet --metal -f pagga 1");
                            fflush(stdout);
                            sleep(1);
                            fflush(stdin);
                            fflush(stderr);
                            printf("Escribe aquí: ");
                            scanf(" %[^\n]s", levelTwo);
                            
                            if (strcmp(levelTwo, "The world is a Vampire.") == 0){ //Acierto Nivel dos
                                system("clear");
                                system("toilet --metal -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --gay -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --metal -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --gay -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                
                                printf("Guarda esta contraseña!\f");
                                printf("\E[1m ImTheMotherFucker \E[m\n");
                                fflush(stdout);
                                sleep(3);
                                printf("\n¿Seguimos?");
                                scanf(" %s", &levelTwoPassed);
                                
                                switch (levelTwoPassed){ //Menu nivel 3
                                    case 's':
                                        system("clear");
                                        system("toilet --metal -f pagga \"NIVEL FINAL\"");
                                        fflush(stdout);
                                        sleep(1);
                                        printf("\n\n\n");
                                        printf("MANDAMIENTOS:\n\n-Entender el enunciado hasta sus últimas consecuencias.\n\n-Hacer 5 veces ejemplos a mano como si no existiese el ordenador.\n\n-Escribir el algoritmo.\n\n-Codificar el algoritmo.\n\n-Hacer un seguimiento.\n\n");
                                        fflush(stdout);
                                        sleep(2);
                                        system("toilet --metal -f pagga 3");
                                        fflush(stdout);
                                        sleep(1);
                                        system("clear");
                                        system("toilet --metal -f pagga \"NIVEL FINAL\"");
                                        printf("\n\n\n");
                                        printf("MANDAMIENTOS:\n\n-ENTENDER el enunciado hasta sus últimas consecuencias.\n\n-HACER 5 veces EJEMPLOS a mano como si no existiese el ordenador.\n\n-Escribir el ALGORITMO.\n\n-CODIFICAR el algoritmo.\n\n-Hacer un SEGUIMIENTO.\n\n");
                                        system("toilet --metal -f pagga 2");
                                        fflush(stdout);
                                        sleep(1);
                                        system("clear");
                                        system("toilet --metal -f pagga \"NIVEL FINAL\"");
                                        printf("\n\n\n");
                                        printf("Escribe SOLO las palabras en mayúsculas y acaba con un punto.\n\n");
                                        system("toilet --metal -f pagga 1");
                                        fflush(stdout);
                                        sleep(1);
                                        fflush(stdin);
                                        fflush(stderr);
                                        printf("Escribe aquí: ");
                                        scanf(" %[^\n]s", finallevel);
                                        
                                        if (strcmp(finallevel, "ENTENDER HACER EJEMPLOS ALGORITMO CODIFICAR SEGUIMIENTO.") == 0){ //Acierto Nivel 3
                                            system("clear");
                                            system("toilet --metal -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            system("toilet --gay -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            system("toilet --metal -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            system("toilet --gay -f pagga \"CORRECTO\"");
                                            fflush(stdout);
                                            sleep(1);
                                            system("clear");
                                            
                                            printf("¡FELICIDADES!\f");
                                            
                                            pf = fopen(".hof.txt", "w+");
                                            fscanf (pf, " %[^\n]s", halloffame);
                                             fclose(pf);
                                            
                                            system("toilet --gay -f pagga \"HALL OF FAME\"");
                                            printf("Este es nuestro hall of fame: \n\n%s\n\n", halloffame);
                                            
                                            printf("¿Quieres añadir tu nombre a la lista?Pon tu nombre o pon que no.\n");
                                            fflush(stdout);
                                            sleep(1);
                                            scanf(" %[^\n]s", newname);
                                            
                                            if (strcmp(newname, "no") || strcmp(newname, "NO") || strcmp(newname, "No") || strcmp(newname, "nO") == 0){
                                                printf("Vale, no te añado.");
                                                
                                                do{ //Bucle
                                                    system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                    felicidades += 1;
                                                    system("clear");
                                                    printf("Créditos:");
                                                    system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                    system("clear");
                                                    printf("Créditos:");
                                                    system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                    felicidades += 1;
                                                    system("clear");
                                                    printf("Dirección:");
                                                    system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                    system("clear");
                                                    printf("Alberto Lastres");
                                                    system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                    felicidades += 1;
                                                    system("clear");
                                                    printf("Programación:");
                                                    system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                    system("clear");
                                                    printf("Alberto Lastres");
                                                    system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                    felicidades += 1;
                                                    system("clear");
                                                    printf("Todo lo demas:");
                                                    system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                    system("clear");
                                                    printf("Alberto Lastres");
                                                    system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                    felicidades += 1;
                                                    system("clear");
                                                    printf("Apoyo moral:");
                                                    system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                    system("clear");
                                                    printf("Andrés el que se sienta a mi lado en clase.");
                                                    
                                                }while (felicidades < 100); //Bucle
                                            }
                                            
                                            else {
                                                
                                                printf("A partir de ahora %s, estará en nuestro Hall of Fame.", newname);
                                                       
                                                       fprintf(pf, " %s", newname);
                                                       
                                                       do{ //Bucle
                                                           system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                           felicidades += 1;
                                                           system("clear");
                                                           printf("Créditos:");
                                                           system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                           system("clear");
                                                           printf("Créditos:");
                                                           system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                           felicidades += 1;
                                                           system("clear");
                                                           printf("Dirección:");
                                                           system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                           system("clear");
                                                           printf("Alberto Lastres");
                                                           system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                           felicidades += 1;
                                                           system("clear");
                                                           printf("Programación:");
                                                           system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                           system("clear");
                                                           printf("Alberto Lastres");
                                                           system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                           felicidades += 1;
                                                           system("clear");
                                                           printf("Todo lo demas:");
                                                           system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                           system("clear");
                                                           printf("Alberto Lastres");
                                                           system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                                           felicidades += 1;
                                                           system("clear");
                                                           printf("Apoyo moral:");
                                                           system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                                           system("clear");
                                                           printf("Andrés el que se sienta a mi lado en clase.");
                                                           
                                                       }while (felicidades < 100); //Bucle
                                                       }
                                                       
                                                       
                                                       
                                                       } //Acierto Nivel 3
                                                       
                                                       else{ //Fallo nivel 3
                                                           printf("has perdido pringado\n");
                                                       } //Fallo nivel 3
                                                       
                                                       
                                                       
                                                       
                                                       
                                                       case 'n':
                                                       printf("Gracias por jugar\n");
                                                       
                                                       break;
                                                       
                                                       default:
                                                       
                                                       printf("No te he entendido. Saliendo\n");
                                                       break;
                                                       
                                                       } //Menu nivel 3
                                                       
                                                       
                                                       } //Acierto Nivel 2
                                                       
                                                       else{ //Fallo nivel 2
                                                           system("clear");
                                                           system("toilet --metal -f pagga \"FALLASTE\"");
                                                           fflush(stdout);
                                                           sleep(1);
                                                           system("clear");
                                                           system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                                                           fflush(stdout);
                                                           sleep(1);
                                                           system("clear");
                                                           system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                                                           fflush(stdout);
                                                           sleep(1);
                                                           system("clear");
                                                           system("toilet --gay -f pagga \"FALLASTE\"");
                                                           fflush(stdout);
                                                           sleep(1);
                                                           
                                                       } // Fallo nivel 2
                                                       
                                                       case 'n':
                                                       system("clear");
                                                       system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                                                       fflush(stdout);
                                                       sleep(1);
                                                       system("clear");
                                                       system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                                                       fflush(stdout);
                                                       sleep(1);
                                                       system("clear");
                                                       system("toilet --metal -f pagga \"GRACIAS POR JUGAR\"");
                                                       fflush(stdout);
                                                       sleep(1);
                                                       system("clear");
                                                       system("toilet --gay -f pagga \"GRACIAS POR JUGAR\"");
                                                       fflush(stdout);
                                                       sleep(1);
                                                       break;
                                                       } //Menu nivel dos
                    
                    
                    
                
                } //Fin Clave 2
                else if (strcmp(clave, "ImTheMotherFucker") == 0){
                
                    printf("\n¿Seguimos?");
                    scanf(" %s", &levelTwoPassed);
                    
                    switch (levelTwoPassed){ //Menu nivel 3
                        case 's':
                            system("clear");
                            system("toilet --metal -f pagga \"NIVEL FINAL\"");
                            fflush(stdout);
                            sleep(1);
                            printf("\n\n\n");
                            printf("MANDAMIENTOS:\n\n-Entender el enunciado hasta sus últimas consecuencias.\n\n-Hacer 5 veces ejemplos a mano como si no existiese el ordenador.\n\n-Escribir el algoritmo.\n\n-Codificar el algoritmo.\n\n-Hacer un seguimiento.\n\n");
                            fflush(stdout);
                            sleep(2);
                            system("toilet --metal -f pagga 3");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"NIVEL FINAL\"");
                            printf("\n\n\n");
                            printf("MANDAMIENTOS:\n\n-ENTENDER el enunciado hasta sus últimas consecuencias.\n\n-HACER 5 veces EJEMPLOS a mano como si no existiese el ordenador.\n\n-Escribir el ALGORITMO.\n\n-CODIFICAR el algoritmo.\n\n-Hacer un SEGUIMIENTO.\n\n");
                            system("toilet --metal -f pagga 2");
                            fflush(stdout);
                            sleep(1);
                            system("clear");
                            system("toilet --metal -f pagga \"NIVEL FINAL\"");
                            printf("\n\n\n");
                            printf("Escribe SOLO las palabras en mayúsculas y acaba con un punto.\n\n");
                            system("toilet --metal -f pagga 1");
                            fflush(stdout);
                            sleep(1);
                            fflush(stdin);
                            fflush(stderr);
                            printf("Escribe aquí: ");
                            scanf(" %[^\n]s", finallevel);
                            
                            if (strcmp(finallevel, "ENTENDER HACER EJEMPLOS ALGORITMO CODIFICAR SEGUIMIENTO.") == 0){ //Acierto Nivel 3
                                system("clear");
                                system("toilet --metal -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --gay -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --metal -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                system("toilet --gay -f pagga \"CORRECTO\"");
                                fflush(stdout);
                                sleep(1);
                                system("clear");
                                
                                printf("¡FELICIDADES!\f");
                                
                                pf = fopen(".hof.txt", "w+");
                                fscanf (pf, " %[^\n]s", halloffame);
                                 fclose(pf);
                                
                                system("toilet --gay -f pagga \"HALL OF FAME\"");
                                printf("Este es nuestro hall of fame: \n\n%s\n\n", halloffame);
                                
                                printf("¿Quieres añadir tu nombre a la lista? Escribe tu nombre y di que no.\n");
                                fflush(stdout);
                                sleep(1);
                                scanf(" %[^\n]s", newname);
                                
                                if (strcmp(newname, "no") || strcmp(newname, "NO") || strcmp(newname, "No") || strcmp(newname, "nO") == 0){
                                    printf("Vale, no te añado.");
                                    
                                    do{ //Bucle
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("TAlberto Lastres /");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres /");
                                        
                                    }while (felicidades < 100); //Bucle
                                }
                                
                                else {
                                    
                                    printf("A partir de ahora %s, estará en nuestro Hall of Fame.", newname);
                                    
                                    fprintf(pf, " %s", newname);
                                    
                                    do{ //Bucle
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Créditos:");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Créditos:");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Dirección:");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Programación:");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Todo lo demas:");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Alberto Lastres");
                                        system("toilet --gay -f pagga \"ERES EL MEJOR\"");
                                        felicidades += 1;
                                        system("clear");
                                        printf("Apoyo moral:");
                                        system("toilet --metal -f pagga \"ERES EL MEJOR\"");
                                        system("clear");
                                        printf("Andrés el que se sienta a mi lado en clase.");
                                        
                                    }while (felicidades < 100); //Bucle
                                }
                                
                                
                                
                            } //Acierto Nivel 3
                            
                            else{ //Fallo nivel 3
                                printf("has perdido pringado\n");
                            } //Fallo nivel 3
                            
                            
                            
                            
                            
                        case 'n':
                            printf("Gracias por jugar\n");
                            
                            break;
                            
                        default:
                            
                            printf("No te he entendido. Saliendo\n");
                            break;
                            
                    } //Menu nivel 3
                    
                    
                } //Fin Clave 3
            
                break;
            
                case 'c':
                system("clear");
                system("toilet --gay -f pagga \"HALL OF FAME\"");
                fflush(stdout);
                sleep(1);
                pf = fopen(".hof.txt", "r");
                fscanf (pf,  " %[^\n]s", halloffame);
            
            
                printf("%s\n", halloffame);
                sleep(1);
            
                fscanf (pf,  " %[^\n]s", halloffame);
                printf("%s\n", halloffame);
                sleep(1);
            
                fscanf (pf,  " %[^\n]s", halloffame);
                printf("%s\n", halloffame);
                printf("\n\n\n");
            
                fclose(pf);
                sleep(2);
                system("clear");
                system("./final");
                break;
            
        default:
            
            printf("No te he entendido.");
            system("clear");
            system("./final");
            
            

        
    } //Fin menú
	return EXIT_SUCCESS;


} //Fin Main
