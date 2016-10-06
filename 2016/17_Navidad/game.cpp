#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

	void show(snake *snake){
	    clear()
	    
	}


	int main(int argc, const char **argv){
	    char pared; //Variable para la pared :D
	    pared = 95; // Valor en ascii de la pared ( _ )

	initscr(); //Inicia la pantalla, parecido a System Clear
	printw("test"); // Printw para saber que modo tengo
	refresh();
	keypad(stdscr, TRUE); //MOvimiento del ratón
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
	
	while((user_input = getch()) != ESC){
	    switch(tolower(user_input)){

		case 'w':
		case KEY_UP:
		    movimiento.x = 0;
		    movimiento.y = 1;
			break;
		case 's':
		case KEY_DOWN:
		    movimiento.x = 0;
		    movimiento.y = -1;
		 	break;
		case 'a':
		case KEY_LEFT:
		    movimiento.x = -1;
		    movimiento.y = 0;
		        break;
		case 'd':
		case KEY_RIGHT:
	            movimiento.x = 1;
		    movimiento.y = 0;
		        break;
	

	    }
	    move( movement, &snake);
	    show(&snake);
	}
	endwin();  //Cierra "freezea" initscr.

	return EXIT_SUCCESS;
	//"g++ <archivo.cpp> -lnurses" para compilar

}
