#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

	int main(int argc, const char **argv){
	
	initscr(); //Inicia la pantalla, parecido a System Clear
	printw("Hello World"); //Printf convertido en PrintW
	refresh(); //No necesario pero refresca por si hace calor
	getch();



	endwin();  //Cierra "freezea" initscr.

	return EXIT_SUCCESS;
	//"g++ <archivo.cpp> -lnurses" para compilar

}
