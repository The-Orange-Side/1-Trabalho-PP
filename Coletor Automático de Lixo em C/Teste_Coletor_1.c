#include <stdio.h>
#include "coletor.h"

Controle bmem[100];
int top = 0;

int main() {

    void *a, *b, *c;

    a = malloc2(10);
    b = malloc2(20);
    c = malloc2(30);

    printf("Apos malloc2:\n");
    for (int i = 0; i < top; i++) {
        printf("bmem[%d]: cont = %d, mem = %p\n", i, bmem[i].cont, bmem[i].mem);
    }

    atrib2(&a, b);
    printf("\nApos atrib2(&a, b):\n");
    for (int i = 0; i < top; i++) {
        printf("bmem[%d]: cont = %d, mem = %p\n", i, bmem[i].cont, bmem[i].mem);
    }

    atrib2(&b, c);
    printf("\nApos atrib2(&b, c):\n");
    for (int i = 0; i < top; i++) {
        printf("bmem[%d]: cont = %d, mem = %p\n", i, bmem[i].cont, bmem[i].mem);
    }

    atrib2(&a, c);
    printf("\nApos atrib2(&a, c):\n");
    for (int i = 0; i < top; i++) {
        printf("bmem[%d]: cont = %d, mem = %p\n", i, bmem[i].cont, bmem[i].mem);
    }

    return 0;
}
