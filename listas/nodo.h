#ifndef __NODO_H__
#define __NODO_H__

typedef int DATO;

struct _nodo
{
    DATO dato;
    struct nodo *sig;
    
};

typedef struct _nodo NODO;

NODO *crear_nodo(DATO d);
void borrar_nodo(NODO*);
void print_nodo(NODO*);

#endif