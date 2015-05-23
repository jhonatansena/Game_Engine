
#include"gameObject.h"
#include<string>

using namespace std;


 string GameObject::getNome(){
        return this->Nome;
    }

void GameObject::setNome(string Nome){
        this->Nome = Nome;
    }

float  GameObject::getPosicao(){

    return this->Posicao_x;
    return this->Posicao_y;
}

void  GameObject::setPosicao(float Posicao_x, float Posicao_y){

    this->Posicao_x = Posicao_x;
    this->Posicao_y = Posicao_y;
}

float  GameObject::getVelocidade(){
        return this->Velocidade_x;
        return this->Velocidade_y;

}

void   GameObject::setVelocidade(float Velocidade_x, float Velocidade_y){
        this->Velocidade_x = Velocidade_x;
        this->Velocidade_y = Velocidade_y;

}

float  GameObject::getAtrito(){

        return this->Atrito;
}

void   GameObject::setAtrito(float Atrito){
        this->Atrito = Atrito;
}
