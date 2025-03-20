#ifndef __COLA_H__
#define __COLA_H__
#include <stdio.h>
#include <stdbool.h>
#include "nodo.h"

typedef int DATO;

struct _cola{
    NODO* frente;
    NODO* fin;

};

typedef struct _cola COLA;

bool es_vacia(COLA);
COLA* crear_cola();
void encolar(COLA*, DATO);
void desencolar(COLA*);
void print_cola(COLA);
void borrar_cola(COLA*);

#endif