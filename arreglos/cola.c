#include "cola.h"

bool es_vacia(COLA c){
    if (c.fin == -1){
    return true;
    }
    return false;
}

COLA crear_cola(){
    COLA c;
    c.fin = -1;
    return c;
}

void encolar(COLA* c, DATO d){
    if(es_vacia(c)){
        c->frente = c->fin = 0;
        c->datos[c->frente] = d;
        return;
    }

    if (c->fin < TAM-1){
        c->fin++;
        c->datos[c->fin] = d;
    }
    printf("No hay mas espacios");
    return;
}

void desencolar(COLA* c){
    if(!es_vacia(*c)){
        for(int i = 1; i <=c->fin; i++){
            c->datos[i-1] = c->datos[i];
        }
    }
    printf("La cola esta vacia");

}


void print_cola(COLA c){
    printf("Los elementos contenidos en la cola ingresada son: \n");
        if (es_vacia){
            printf("no hay elementos dentro de la cola");
        }else{
            for (int i = 0; i < c.datos[c.fin]; i++){
            printf("%i", c.datos[i]);
            }
        }

    return;
}

