#include <stdio.h>
#include <stdlib.h>

	int main(){
        char name[20];
        char a[1100];
        char ander;
        double anadir;
        double total[100];
        double fin;
        double cartera;
        double cartera2;

        
        printf("Qué desea hacer.\n");
        printf("a. Añadir Dinero a mi cartera.\n");
        printf("b. Retirar Dinero de mi cartera.\n");
        printf("c. Consultar Dinero\n");
        printf("Introduce una opción: ");
        
        fflush(stdin);
        scanf(" %c", &ander);
        
        switch(ander){
                
                
            case 'a':
                printf("Introduce cuanto dinero quieres añadir:");
                scanf("%lf", &anadir);
                
                
              
                pf = fopen(".cartera.txt", "r+");
                fscanf (pf, "%lf", &cartera); //Gracias Oscar
                
                fin = (anadir + cartera);
                
                system("rm -fr .cartera.txt");
                
                pf = fopen(".cartera.txt", "w");
        
                fprintf(pf,"%lf", fin);
        
                
                printf("En total tienes: %lf€", fin);
                printf("\n\n\n");
                fclose(pf);
                
                break;
                
            case 'b':
                
                printf("Introduce cuanto dinero quieres retirar:");
                scanf("%lf", &anadir);
                
            
                pf = fopen(".cartera.txt", "r+");
                fscanf (pf, "%lf", &cartera);
                
                fin = (cartera - anadir);
                
                system("rm -fr .cartera.txt");
                
                pf = fopen(".cartera.txt", "w");
                
                fprintf(pf,"%lf", *&fin);
                
                
                printf("Te quedan: %lf€", *&fin);
                printf("\n\n\n");
                fclose(pf);
                
                break;
                
                
                
          
                
            case 'c':
                
               
                pf = fopen(".cartera.txt", "r");
                fscanf (pf, "%lf", &cartera);
        
                
                printf("Te quedan: %lf€", *&cartera);
                printf("\n\n\n");
                fclose(pf);
                
                break;
                
        }
        

        
        

	return EXIT_SUCCESS;


}
