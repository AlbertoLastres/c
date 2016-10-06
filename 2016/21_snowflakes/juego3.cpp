#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>

#define retraso 3000

	int main(int argc, const char **argv){
	int i = 0;
	int y = 0;
	int maxy = 0,
	    maxx = 0;
	int siguientex = 0;
	int direccion = 1;


	initscr();
	noecho();
	curs_set(0);
	getmaxyx(stdscr, maxy, maxx);
		while(1){
		    clear();
		    mvprintw(i, i, "O");
		    refresh();
		    usleep(retraso);

		    siguientex = i + direccion;

		    if (siguientex >= maxx || siguientex < 0){
			direccion*= -1;
		    } else {
			i+= direccion;
		    }
		}


	endwin(); 

	return EXIT_SUCCESS;
	//"g++ <archivo.cpp> -lnurses" para compilar

}
