#include "gameObjectList.h"

GameObjectList::GameObjectList(){

    this->inicio = NULL;
}


void GameObjectList::adicionar(GameObject* obj){
		No *novo = new No();
		novo->objeto = obj;
		novo->proximo = NULL;
		if (this->inicio == NULL) {
			// PRIMEIRO ELEMENTO
			this->inicio = novo;
		} else {
			// NÃO É O PRIMEIRO ELEMENTO. BUSCAR ÚLTIMO
			No *atual;
			atual = this->inicio;
			while (atual->proximo != NULL) {
				atual = atual->proximo;
			}

			atual->proximo = novo;
		}

}


void GameObjectList::remover(GameObject* obj){
        No *aux = NULL;
        No *ultimo = this->inicio;

        while (ultimo->proximo!=NULL && ultimo->objeto->Nome != obj->Nome){
            aux = ultimo;
            ultimo = ultimo->proximo;

        }
        if(ultimo == NULL)
            cout<<"Elemento nao encontrado"<<endl;
        if(aux == NULL){
            ultimo  = aux->proximo;

        }else{
            aux->proximo= ultimo->proximo;

        }
        delete(ultimo);



}

No GameObjectList::consultar(GameObject* obj){

    No* p;
    p = this->inicio->proximo;

    while(p!=NULL && p->objeto->Nome != obj->Nome)
        p = p->proximo;

    return *p;
}
