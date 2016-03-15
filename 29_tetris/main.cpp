#include <stdio.h>
#include <allegro5/allegro.h>

#define ANCHURA 800
#define ALTURA  600
#define FPS 60
enum MYKEYS {
    S, A, D, W
};

int main(int argc, char **argv){

    //////VARIABLES///////

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *eventos = NULL;
    ALLEGRO_TIMER *reloj = NULL;
    ALLEGRO_BITMAP *Cuadrado = NULL;
    ALLEGRO_BITMAP *Palo = NULL;
    ALLEGRO_BITMAP *Ele = NULL;
    ALLEGRO_BITMAP *Zeta = NULL;
    bool key[4] = { false, false, false, false  };
    bool redraw = true;
    bool doexit = false;
    int tamcuadradox = 30;
    int tamcuadradoy = 30;

    ///////CHEQUEOS///////

    if(!al_init()) {
        fprintf(stderr, "Error al iniciar allegro!\n");
        return -1;
    }

    if(!al_install_keyboard()) {
        fprintf(stderr, "Error al iniciar el teclado!\n");
        return -1;
    }

    reloj = al_create_timer(1.0 /FPS);
    if(!reloj) {
        fprintf(stderr, "Error al crear el Reloj!\n");
    }

    display = al_create_display(ANCHURA, ALTURA);
    if(!display) {
        fprintf(stderr, "Error al crear el display!\n");
        return -1;
        al_destroy_timer(reloj);
    }

    Cuadrado = al_create_bitmap(tamcuadradox, tamcuadradoy);
    if(!Cuadrado) {
        fprintf(stderr, "Error al crear el Cuadrado!\n");
        al_destroy_display(display);
        al_destroy_timer(reloj);
        return -1;
    }

    /////////////////

    al_set_target_bitmap(Cuadrado);
    al_clear_to_color(al_map_rgb(255,0,255));
    al_set_target_bitmap(al_get_backbuffer(display));
    eventos = al_create_event_queue();
    if(!eventos) {
        fprintf(stderr, "Error al crear la cola de eventos!\n");
        al_destroy_bitmap(Cuadrado);
        al_destroy_timer(reloj);
        al_destroy_display(display);
        return -1;
    }

    al_register_event_source(eventos, al_get_display_event_source(display));
    al_register_event_source(eventos, al_get_timer_event_source(reloj));
    al_register_event_source(eventos, al_get_keyboard_event_source());
    al_clear_to_color(al_map_rgb(0,0,0));
    al_flip_display();
    al_start_timer(reloj);
    /////////////// BUCLE //////////////////
    while(!doexit)
    {
        ALLEGRO_EVENT ev;
        al_wait_for_event(eventos, &ev);

        if(ev.type == ALLEGRO_EVENT_TIMER) {
            if(key[A]) tamcuadradox++;
            if(key[D]) tamcuadradoy--;
            redraw = true;
        }
        else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }
        else if(ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_A:
                    key[A] = true;
                    break;

                case ALLEGRO_KEY_D:
                    key[D] = true;
                    break;
            }
        }
        else if(ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_A:
                    key[A] = false;
                    break;
                case ALLEGRO_KEY_D:
                    key[D] = false;
                    break;
                case ALLEGRO_KEY_ESCAPE:
                    doexit = true;
                    break;
            }
        }
        if(redraw && al_is_event_queue_empty(eventos)) {
            redraw = false;

            al_clear_to_color(al_map_rgb(0,0,0));
            al_draw_bitmap(Cuadrado, tamcuadradox, tamcuadradoy, 0);
            al_flip_display();
        }
    }
    al_destroy_bitmap(Cuadrado);
    al_destroy_timer(reloj);
    al_destroy_display(display);
    al_destroy_event_queue(eventos);
    al_rest(10.0);

    al_destroy_display(display);

    return 0;
}
