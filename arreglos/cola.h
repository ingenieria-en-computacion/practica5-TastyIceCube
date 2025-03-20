#ifndef __COLA_H__
#define __COLA_H__
#define TAM 100
#include <stdio.h>
#include <stdbool.h>

typedef int DATO;

struct _cola{
    DATO datos[TAM];
    int frente;
    int fin;

};

typedef struct _cola COLA;

bool es_vacia(COLA);
COLA crear_cola();
void encolar(COLA*, DATO);
void desencolar(COLA*);
void print_cola(COLA);

#endif