#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

	int main(int argc, const char **argv){
	    char pared; //Variable para la pared :D
	    pared = 95; // Valor en ascii de la pared ( _ )

	initscr(); //Inicia la pantalla, parecido a System Clear
	printw("test"); // Printw para saber que modo tengo
	refresh();
	for (int i=1; i<=50; i++){ //Bucle para crear la pared del techo
	    move(1,i);
	    printw("%c", pared);
	    move(30,i);
	    printw("%c", pared);
	}
	pared = 124;
	for (int i=2; i<=30; i++){ //Bucle para crear la pared de los lados
	    move(i,1);
	    printw("%c", pared);
	    move(i,50);
	    printw("%c", pared);
	}
	refresh();
	getch();
	// sleep(2);
	endwin();  //Cierra "freezea" initscr.

	return EXIT_SUCCESS;
	//"g++ <archivo.cpp> -lnurses" para compilar

}
