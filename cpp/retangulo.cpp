#include "retangulo.h"

#include<allegro5/allegro5.h>
#include<allegro5/allegro_primitives.h>

float Retangulo::getPosicao(){
    return this->p1_x;
    return this->p1_y;
    return this->p2_x;
    return this->p1_y;

}
void Retangulo::setPosicao(float p1_x, float p1_y, float p2_x, float p2_y){

    this->p1_x = p1_x;
    this->p1_y = p1_y;
    this->p2_x = p2_x;
    this->p1_y = p1_y;
}

void Retangulo::Render(){

    al_draw_rectangle(p1_x, p1_y, p2_x, p2_y, cor, espessura);
}


