
#ifndef _GAMEOBJECTLIST_H
#define _GAMEOBJECTLIST_H

#include "gameObject.h"

using namespace std;

class No {
public:
	GameObject * objeto;
	No * proximo;
};

class GameObjectList{

        //GameObject lista[];
        No *inicio;

        GameObjectList();

        void adicionar(GameObject *);
        void remover(GameObject *);
        No consultar(GameObject *);

};







#endif
