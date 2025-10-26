#ifndef coletor_H
#define coletor_H

#include <stddef.h>

typedef struct controle {

    int cont; // Quantidade De Ponteiros Apontando Para a Memória.
    void* mem; // Endereço De Memória.

}Controle;

extern Controle bmem[100]; // Variável Global Da Estrutura "Controle", Usada Para Armazenar Até 100 Registros.
extern int top; // Variável Global Para Percorrer o Vetor "bmem".

void* malloc2(size_t size); // Esta Função Realiza a Alocação Dinâmica e Retorna o Endereço Da Área Criada.

void atrib2(void** a, void* b); // Esta Função Realiza a Atribuição De Ponteiros Em C.


#endif


