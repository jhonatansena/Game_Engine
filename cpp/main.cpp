
#include <iostream>
#include<allegro5/allegro5.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_native_dialog.h>
#include "gameObject.h"
#include "circulo.h"



using namespace std;

int main(){

     /**Variáveis do Jogo**/
    const int largura = 640;
    const int altura = 480;

    /**Inicialização da Allegro e do Display**/
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_EVENT_QUEUE *evt_queue = NULL;
    ALLEGRO_KEYBOARD_STATE state_key;

    bool finalizar = false;
    bool draw = true;
    int tecla = 0;

    Circulo *p = new Circulo();

    if(!al_init()){
        al_show_native_message_box(NULL,"AVISO","ERRO!","ERRO AO INICIALIZAR A ALLEGRO", NULL, ALLEGRO_MESSAGEBOX_ERROR);
		return -1;
    }

    display = al_create_display(largura,altura);
	if(!display) {
		al_show_native_message_box(NULL,"AVISO","ERRO!","ERRO AO CRIAR DISPLAY", NULL, ALLEGRO_MESSAGEBOX_ERROR);
		return -1;
	}


	al_set_window_position(display,100,100);

    /**Inicialização de Addon e instalações**/
    al_init_primitives_addon();
	al_install_keyboard();

	timer = al_create_timer(1.0/ 15);

	/**Criação da Fila e Demais Dispositivos**/
	evt_queue = al_create_event_queue();

	/**Registro de Sources**/
	al_register_event_source(evt_queue,al_get_keyboard_event_source());
	al_register_event_source(evt_queue,al_get_timer_event_source(timer));

	al_start_timer(timer);
	 /**Loop Principal**/
	while(!finalizar){


    ALLEGRO_EVENT evt;
		al_wait_for_event(evt_queue,&evt);
		al_get_keyboard_state(&state_key);

            /**Eventos e Lógica do jogo**/
		if(evt.type == ALLEGRO_EVENT_KEY_DOWN){
            if(evt.keyboard.keycode == ALLEGRO_KEY_ESCAPE){
                finalizar = true;
            }
            switch(evt.keyboard.keycode){
            case ALLEGRO_KEY_UP:
                tecla = 1;
                break;
            case ALLEGRO_KEY_DOWN:
                  tecla = 2;
                break;
            case ALLEGRO_KEY_RIGHT:
                  tecla = 3;
                break;
            case ALLEGRO_KEY_LEFT:
                  tecla = 4;
                break;
            }
}

		if(evt.type == ALLEGRO_EVENT_TIMER){

			draw = true;
			p->Render();

        }
		if(draw){

		al_flip_display();
		al_clear_to_color(al_map_rgb(0,0,0));
		draw = false;
		}
}

    /**Finalização do Programa**/
	al_destroy_event_queue(evt_queue);
    al_destroy_display(display);





    return 0;
}
