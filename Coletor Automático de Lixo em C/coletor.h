#ifndef coletor_H
#define coletor_H

#include <stddef.h>


typedef struct controle {

    int cont; // contar quantos ponteiros estão apontados

    void* mem; // guardar as quantidades cont referente a memoria

}Controle;

extern Controle bmem[100];
extern int top;

void* malloc2(size_t size); // chama na main: malloc2(sizeof(int))

void atrib2(void** a, void* b);


#endif

