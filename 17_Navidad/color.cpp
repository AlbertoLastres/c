#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

	int main(int argc, const char **argv){
	
	initscr(); //Inicia la pantalla, parecido a System Clear
	printw("This is my fucking test of ncurses."); //Printf convertido en PrintW
	refresh(); //No necesario pero refresca por si hace calor
	move(2, 15);
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLUE);
	attron(COLOR_PAIR(1));
	printw("I still thinking about my game.");
	attroff(COLOR_PAIR(1));
	move(16,13); //mueve el cursor a ese lado de la pantalla
	attron(A_STANDOUT | A_UNDERLINE);
	printw("FUCKING SUCCESS");
	attroff(A_STANDOUT | A_UNDERLINE);
	getch();



	endwin();  //Cierra "freezea" initscr.

	return EXIT_SUCCESS;
	//"g++ <archivo.cpp> -lnurses" para compilar

}
