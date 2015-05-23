#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H

#include <iostream>
#include <string>

using namespace std;

class GameObject {
public:
     string Nome;
     float Posicao_x;
     float Posicao_y;
     float Velocidade_x;
     float Velocidade_y;
     float Atrito;

public:
    string getNome();
    void   setNome(string);
    float  getPosicao();
    void   setPosicao(float, float);
    float  getVelocidade();
    void   setVelocidade(float, float);
    float  getAtrito();
    void   setAtrito(float);


     void Start();
     void Update();
     void Render();

};


#endif
