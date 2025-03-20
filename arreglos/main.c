#include "cola.h"

int main(){
    COLA c;
    c = crear_cola();
    print_cola(c);
    encolar(&c,14);
    encolar(&c,12);
    encolar(&c,13);
    encolar(&c,14);
    encolar(&c,15);
    print_cola(c);
    desencolar(&c);
    desencolar(&c);
    desencolar(&c);
    print_cola(c);


    return 0;
}