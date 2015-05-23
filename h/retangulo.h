#ifndef _RETANGULO_H
#define _RETANGULO_H
#include "gameObject.h"
#include"retangulo.h"
#include<allegro5/allegro5.h>



class Retangulo: public GameObject {
public:
    float p1_x;
    float p1_y;
    float p2_x;
    float p2_y;
    float espessura;
    ALLEGRO_COLOR cor;


    public:
    float getPosicao();
    void setPosicao(float, float, float, float);
    float getEspessura();
    void setEspessura(float espessura);


    void Render();
};

#endif
