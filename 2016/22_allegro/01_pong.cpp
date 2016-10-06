#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <time.h>

#define SW 800
#define SH 600
#define NW 32
#define NH 32

#define N 1
#define VMAX 5
#define BARRAS 1
struct Barra2 {
    double bar2x;
    double bar2y;
    double velbar2x;
    double velbar2y;
    double bar2width;
    double bar2height;
    ALLEGRO_BITMAP *bar2img;
};

struct Barra {
    double barx;
    double bary;
    double velbarx;
    double velbary;
    double barwidth;
    double barheight;
    ALLEGRO_BITMAP *barimg;
};

struct Nave {
    double navx;
    double navy;
    double velnavx;
    double velnavy;
    double navwidth;
    double navheight;
    ALLEGRO_BITMAP *navimg;
};
void posiciones_barra(struct Barra barra[BARRAS]){
    for (int i=0; i<1; i++){

        if ( barra[i].barx + barra[i].velbarx + barra[i].barwidth > SW ||
                barra[i].barx + barra[i].velbarx < 0){
            barra[i].velbarx *= -1;
    }
        if ( barra[i].bary + barra[i].velbary + barra[i].barheight > SH ||
                barra[i].bary + barra[i].velbary < 0){
            barra[i].velbary *= -1;
    }
        barra[i].barx += barra[i].velbarx;
        barra[i].bary += barra[i].velbary;
    }
}
void posiciones_barra2(struct Barra2 barra2[BARRAS]){
    for (int i=0; i<1; i++){

        if ( barra2[i].bar2x + barra2[i].velbar2x + barra2[i].bar2width > SW ||
                barra2[i].bar2x + barra2[i].velbar2x < 0)
            barra2[i].velbar2x *= -1;
        if ( barra2[i].bar2y + barra2[i].velbar2y + barra2[i].bar2height > SH ||
                barra2[i].bar2y + barra2[i].velbar2y < 0)
            barra2[i].velbar2y *= -1;

        barra2[i].bar2x += barra2[i].velbar2x;
        barra2[i].bar2y += barra2[i].velbar2y;
    }
}
void recalcular_posiciones(struct Nave nave[N]){
    for (int i=0; i<N; i++){
        if ( nave[i].navx + nave[i].velnavx + nave[i].navwidth > SW ||
                nave[i].navx + nave[i].velnavx < 0)
            nave[i].velnavx *= -1;
        if ( nave[i].navy + nave[i].velnavy + nave[i].navheight > SH ||
                nave[i].navy + nave[i].velnavy < 0){
            nave[i].velnavy *= -1;
            //nave[i].velnavy *= 0.7;
            //nave[i].velnavx *= 0.7;
        }
        nave[i].navx += nave[i].velnavx;
        nave[i].navy += nave[i].velnavy;
    }
}

void iniciar(struct Nave nave[N]){
    for (int i=0; i<N; i++){
        nave[i].navx  = drand48() * SW;
        nave[i].navy  = drand48() * SH;
        nave[i].velnavx = drand48() * VMAX;
        nave[i].velnavy = drand48() * VMAX;
        nave[i].navwidth = 32;
        nave[i].navheight = 32;
        nave[i].navimg =  al_create_bitmap(nave[i].navwidth, nave[i].navheight);
        al_set_target_bitmap(nave[i].navimg);
        al_clear_to_color(al_map_rgb(255, 255, 255));

    }
}
void iniciarbarra(struct Barra barra[BARRAS]){
    for (int i=0; i<BARRAS; i++){
        barra[i].barx  = 750;
        barra[i].bary  = drand48() * SH;
        barra[i].velbarx = 0;
        barra[i].velbary = 7;
        barra[i].barwidth = 32;
        barra[i].barheight = 132;
        barra[i].barimg =  al_create_bitmap(barra[i].barwidth, barra[i].barheight);
        al_set_target_bitmap(barra[i].barimg);
        al_clear_to_color(al_map_rgb(255, 255, 255));

    }
}

void iniciarbarra2(struct Barra2 barra2[BARRAS]){
    for (int i=0; i<BARRAS; i++){
        barra2[i].bar2x  = 50;
        barra2[i].bar2y = drand48() * SH;
        barra2[i].velbar2x = 0;
        barra2[i].velbar2y = 5;
        barra2[i].bar2width = 32;
        barra2[i].bar2height = 132;
        barra2[i].bar2img =  al_create_bitmap(barra2[i].bar2width, barra2[i].bar2height);
        al_set_target_bitmap(barra2[i].bar2img);
        al_clear_to_color(al_map_rgb(255, 255, 255));

    }
}

int main(int argc, char **argv){


    // Variables
    ALLEGRO_DISPLAY *ventana = NULL;
    ALLEGRO_EVENT_QUEUE *mensajes = NULL;
    ALLEGRO_TIMER *alarma = NULL;
    bool dibujar = true;

    struct Nave nave[N];
    struct Barra barra[BARRAS];
    struct Barra2 barra2[BARRAS];

    srand(time(NULL));
    srand48(time(NULL));
    al_init();

    // Crear:
    ventana = al_create_display(SW, SH);
    mensajes = al_create_event_queue();
    alarma = al_create_timer(1/60.);

    al_register_event_source(mensajes,
            al_get_display_event_source(ventana));
    al_register_event_source(mensajes,
            al_get_timer_event_source(alarma));


    iniciar(nave);
    iniciarbarra(barra);
    iniciarbarra2(barra2);
    al_set_target_bitmap(al_get_backbuffer(ventana));
    al_start_timer(alarma);

    while(1) {
        ALLEGRO_EVENT ev;
        al_wait_for_event(mensajes, &ev);

        if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;

        if (ev.type == ALLEGRO_EVENT_TIMER)
            dibujar = true;

        if (dibujar && al_is_event_queue_empty(mensajes) ){
            dibujar = true;
            posiciones_barra(barra);
            posiciones_barra2(barra2);
            recalcular_posiciones(nave);
            al_clear_to_color(al_map_rgb(0,0,0));
            for (int i=0; i<BARRAS; i++){
                al_draw_bitmap(barra[i].barimg, barra[i].barx, barra[i].bary, 0);
                al_draw_bitmap(barra2[i].bar2img, barra2[i].bar2x, barra2[i].bar2y, 0);
                }
                for (int i=0; i<N; i++){
                al_draw_bitmap(nave[i].navimg, nave[i].navx, nave[i].navy, 0);
            }
            al_flip_display();
        
        }
        //   Miro los eventos
        //     Si cierran la ventan
        //        salgo del bucle
        //     Si se cumple el tiempo:
        //        repintar
        //   Si repintar
        //      No repintar
        //      Mover el cuadrado
        //      Pintar
    }

    al_destroy_timer(alarma);
    al_destroy_display(ventana);
    al_destroy_event_queue(mensajes);

    return EXIT_SUCCESS;
}
