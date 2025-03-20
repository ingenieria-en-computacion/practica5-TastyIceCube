#include "nodo.h"

NODO *crear_nodo(DATO d){
    NODO *nuevo = (NODO*)malloc(sizeof(NODO));
    nuevo->sig = NULL;
    nuevo->dato = ;

    return NODO;
}

void borrar_nodo(NODO *n){
    if (n->sig==NULL)
    {
        free(n);
    }
    return;
}

void print_nodo(NODO *n){
    printf("Dato: %i \n Sig %p \n", n->dato, n->sig);

    return;
}