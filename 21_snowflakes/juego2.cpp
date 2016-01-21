#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

	
	typedef struct {
	    int posX;
	    int posY;
	} punto;

	void calcula(punto lugar[3], int X, int Y){
	    if(getch() == 'w'){
		lugar->posX = X + 10;
	   	 }
	    else if(getch() == 's'){
		X = X - 10;
	    }
	    else if(getch() == 'a'){
		Y = Y - 10;
	    }
	    else if(getch() == 'd'){
		Y = Y + 10;
	    }
	    else
		printw("Pulsa un número");
	    
	}


	void dibuja(punto pinta[3]){
		clear();
		mvprintw(10, 10, "+");
		refresh();


	}






	int main(int argc, const char **argv){
	initscr();
	int width, height;
	punto punto[3];

	getmaxyx(stdscr, width, height);

	calcula(punto, width, height);
	dibuja(punto);




	endwin();
	return EXIT_SUCCESS;


}
