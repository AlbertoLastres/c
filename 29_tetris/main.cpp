#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <strings.h>
#include <math.h>
#include <unistd.h>

#define FPS 60.
#define PX 1200
#define PY 700
enum KEYS {
    KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, KEY_W, KEY_S, KEY_A, KEY_D };

struct JugadorUno {
    double x;
    double y;
    double width;
    double height;
    double vx;
    double vy;
    ALLEGRO_BITMAP *img;

};

struct JugadorDos {
    double x;
    double y;
    double width;
    double height;
    double vx;
    double vy;
    ALLEGRO_BITMAP *img;

};

inicio(struct JugadorUno *JugadorUno, struct JugadorDos *JugadorDos){
    //VOY POR AQUI//
}





int main(){

      struct JugadorUno JugadorUno;
      struct JugadorDos JugadorDos;

      ALLEGRO_DISPLAY *ventana = NULL;
      ALLEGRO_BITMAP`*cuadrados = NULL;
      ALLEGRO_EVENT_QUEUE *evento = NULL;
      ALLEGRO_TIMER *reloj = NULL;
      bool key[8] = { false, false, false, false, false, false, false, false };
      bool redraw = true;
      bool doexit = false;



      if(!al_init()) {
          al_show_native_message_box(ventana, "Error", "Error", "Error al iniciar allegro.", NULL, ALLEGRO_MESSAGEBOX_ERROR);
          return EXIT_FAILURE;
      };

      if(!al_install_keyboard()){
          al_show_native_message_box(ventana, "Error", "Error", "Error al iniciar el teclado.", NULL, ALLEGRO_MESSAGEBOX_ERROR);
          return EXIT_FAILURE;
      };

      ventana = al_create_display(PX, PY);

      if(!ventana) {
          al_show_native_message_box(ventana, "Error", "Error", "Error al iniciar ventana, asegurese de que tiene una resolución minima de 1200x700", NULL, ALLEGRO_MESSAGEBOX_ERROR);
          return EXIT_FAILURE;
      };

      reloj = al_create_timer(1.0 / FPS);
      if(!reloj) {
          al_show_native_message_box(ventana, "Error", "Error", "Error al crear el reloj!\n", NULL, ALLEGRO_MESSAGEBOX_ERROR);
          al_destroy_display(ventana);
          return EXIT_FAILURE;
      };
      evento = al_create_event_queue();
      if(!evento){
          al_show_native_message_box(ventana, "Error", "Error", "Error al crear cola de eventos!\n", NULL, ALLEGRO_MESSAGEBOX_ERROR);

          al_destroy_display(ventana);
          al_destroy_timer(reloj);
          return EXIT_SUCCESS;
      };

          al_register_event_source(evento, al_get_display_event_source(ventana));
          al_register_event_source(evento, al_get_keyboard_event_source());
          al_register_event_source(evento, al_get_timer_event_source(reloj));

          inicio(&JugadorUno, &JugadorDos);
          al_set_target_bitmap(al_get_backbuffer(ventana));
          al_start_timer(reloj);

          //INICIO DEL JUEGO//


          //QUEMAR ALLEGRO, PÀRA SIEMPRE//
          al_destroy_timer(reloj);
          al_destroy_display(pantalla);
          al_destroy_event_queue(evento);
          al_destroy_bitmap(cuadrados);
      }








      }

return EXIT_SUCCESS;
