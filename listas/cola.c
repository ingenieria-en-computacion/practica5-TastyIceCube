#include "cola.h"

bool es_vacia(COLA *c){
    if (c->fin == NULL){
    return true;
    }
    return false;
}

COLA crear_cola(){
    COLA *c = (COLA*)malloc(sizeof(COLA));
    c->fin = NULL;
    c->frente = NULL;
    return *c;
}

void encolar(COLA* c, DATO d){
    NODO *nuevo = crear_nodo(d);

    if(es_vacia(c)){
        c->frente = c->fin = NULL;
        return;
    }

    c->fin->sig = nuevo;
    c->fin = nuevo;
    return;
}

void desencolar(COLA* c){
    if(!es_vacia(c)){
     NODO *temp = c->frente;
     c->frente = c->frente->sig
     temp->sig = NULL;
     borrar_nodo(temp);

    }


}


void print_cola(COLA c){
    for(NODO *t = c->frente; t != NULL; t = t->sig){
        printf("%d", t->sig);

    }
    return;
}

void borrar_cola(*c){

    return;
}