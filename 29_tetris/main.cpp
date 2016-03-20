#include <stdlib.h>
#include <stdio.h>
#include <allegro5/allegro.h>
#include <time.h>
#include <math.h>

#define N 10
#define J 2

      struct Nave {
          double x;
          double y;
          double vx;
          double vy;
          double width;
          double height;
          ALLEGRO_BITMAP *img;

      };




      int main(int argc, char **argv){
          //Variables!
          ALLEGRO_DISPLAY *ventana = NULL;
          ALLEGRO_EVENT_QUEUE *mensajes = NULL;
          ALLEGRO_TIMER *reloj = NULL;
          bool dibujar = true;

          struct Nave nave[N];
          srand(time(NULL));
          srand48(time(NULL));
          al_init();

          //Crear:
          ventana = al_create_display(SW, SH);
          mensajes = al_create_event_queue();
          reloj = al_create_timer(1/60.);

          al_register_event_source(mensajes, al_get_display_event_source(ventana));
          al_register_event_source(mensajes, al_get_timer_event_source(reloj));

          iniciar(nave);
          al_set_target_bitmap(al_get_backbuffer(ventana));
          al_start_timer(reloj);
          

          while(1){
              ALLEGRO_EVENT ev;
              al_wait_for_event(mensajes, &ev);

              if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                  break;
          }







      }
