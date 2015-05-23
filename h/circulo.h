#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "gameObject.h"
#include<allegro5/allegro5.h>



    class Circulo: public GameObject{

    float raio;
    float ponto_x;
    float ponto_y;
    float espessura;
    ALLEGRO_COLOR cor;


    public:
    float getRaio();
    void setRaio(float);
    float getPosicao();
    void setPosicao(float , float);
    float getEspessura();
    void setEspessura(float);

    void Render();



    };





#endif
