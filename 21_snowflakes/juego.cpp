#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

#define PERSONAJE 5
#define ENEMIGO 5

	typedef struct {
	    int posX;
	    int posY;
	    int vida;
	} Nave;

	void inicio(Nave datosprincipal[PERSONAJE], Nave datossecundaria[ENEMIGO], int ancho, int alto){
	    for (int i=0; i<10; i++){
		datosprincipal[PERSONAJE].posX = ancho/2;
		datosprincipal[PERSONAJE].posY = alto/2;
		datosprincipal[PERSONAJE].vida = 10;
		datossecundaria[ENEMIGO].posX = ancho/4;
		datossecundaria[ENEMIGO].posY = ancho/4;
		datossecundaria[ENEMIGO].posY = 5;
	    }
	}

	void naves_ataquen(Nave movimientosecundaria[ENEMIGO], Nave movimientosprincipal[PERSONAJE]) {
	    if(movimientosecundaria[ENEMIGO].posX == movimientosprincipal[ENEMIGO].posX){
		mvprintw(movimientosprincipal[ENEMIGO].posX, movimientosprincipal[ENEMIGO].posY, "PERDISTE");
	    }
}

    	void dibuja(Nave dibujoprincipal[PERSONAJE], Nave dibujosecundario[ENEMIGO],int ancho,int alto){
	    clear();
	    mvprintw( dibujoprincipal[PERSONAJE].posX, dibujoprincipal[PERSONAJE].posY, "O" );
	    mvprintw( dibujosecundario[ENEMIGO].posX, dibujosecundario[ENEMIGO].posY, "o" );
	}

	int main(int argc, const char **argv){

	srand(time(NULL));
	srand48(time(NULL));
	int ancho, alto;
	Nave principal[PERSONAJE];
	Nave secundaria[ENEMIGO];

	inicio(principal, secundaria, ancho, alto);
	initscr();
	getmaxyx(stdscr, ancho, alto);
	curs_set(0);

	while(getch() != 27){
	    naves_ataquen(secundaria, principal);
	    dibuja(principal, secundaria, ancho, alto);
	}

	curs_set(1);
	endwin();
	
	return EXIT_SUCCESS;


}
