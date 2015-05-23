#include "circulo.h"

#include<allegro5/allegro5.h>
#include<allegro5/allegro_primitives.h>
#include<allegro5/drawing.h>

float Circulo::getRaio(){

    return this->raio;
}
    void Circulo::setRaio(float raio){
        this->raio = raio;

    }
    float Circulo::getPosicao(){
        return this->ponto_x;
        return this->ponto_y;

    }
    void Circulo::setPosicao(float ponto_x, float ponto_y){
       this->ponto_x = ponto_x;
       this->ponto_y = ponto_y;

    }

    float Circulo::getEspessura(){
        return this->espessura;
    }

    void Circulo::setEspessura(float espessura){
        this->espessura = espessura;

    }





void Circulo::Render(){

    al_draw_circle(ponto_x, ponto_y, raio, cor, espessura);


}


