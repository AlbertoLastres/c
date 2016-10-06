#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

////// direcciones ////
#define ABAJO 80
#define ARRIBA 72
#define DERECHA 77
#define IZQUIERDA 75

int menu()
{
     int a=0,m=0,opc=0;
      do{
                system("cls");
                printf("Elige una opcion y preciona ENTER para seleccionarla:\n\n");
    
                if(a==ARRIBA&&m>0) m--;
                if(a==ABAJO&&m<2) m++;
                if(m==0)
                {
                        pprintf("     MENU     \n",BLANCO,NEGRO,28);
                        pprintf("   - Jugar -   \n",VERDE_CLARO,NEGRO,28);
                        pprintf("     Nivel    \n",VERDE,NEGRO,28);
                        pprintf("     Salir     \n",VERDE,NEGRO,28);
                        opc=1;
                }
                else if(m==1)
                {
                        pprintf("     MENU     \n",BLANCO,NEGRO,28);
                        pprintf("     Jugar    \n",VERDE,NEGRO,28);
                        pprintf("   - Nivel -  \n",VERDE_CLARO,NEGRO,28);
                        pprintf("     Salir  \n",VERDE,NEGRO,28);
                        opc=2;
                }
                else if(m==2)
                {
                        pprintf("     MENU     \n",BLANCO,NEGRO,28);
                        pprintf("     Jugar    \n",VERDE,NEGRO,28);
                        pprintf("     Nivel    \n",VERDE,NEGRO,28);
                        pprintf("   - Salir -  \n",VERDE_CLARO,NEGRO,28);
                        opc=3;
                }
                a=getch();
      }while(a!=13);
      
      return opc;
}


int main()
{
     int opc=0, 
         Nivel=220;
     do{
            opc=menu();
            if(opc==1)
            {
                system("cls");
                printf("Opcion 1");
                system("pause>nul");
            }
            else if(opc==2)
            {
                 system("cls");
                 printf("Opcion 2");
                 system("pause>nul");
            }
}
while(opc!=13);
}