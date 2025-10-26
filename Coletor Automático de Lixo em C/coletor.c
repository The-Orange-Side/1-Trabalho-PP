#include "coletor.h"
#include <stdlib.h>
#include <stdio.h>

void* malloc2(size_t size){

    void*x = malloc(size);

    bmem[top].cont = 1;
    bmem[top].mem = x;

    top++;

    return x;

}

void atrib2(void** a, void* b){

    int temp_i = -1;

    for(int i=0; i<top; i++){
        if(bmem[i].mem == *a){
            temp_i = i;
            bmem[i].cont --;
            break;
        }
    }

    for(int j=0; j<top; j++){
        if(bmem[j].mem == b){

            *a = b;
            bmem[j].cont ++;

            if (temp_i != -1 && bmem[temp_i].cont == 0) {
                free(bmem[temp_i].mem);
                bmem[temp_i].mem = NULL;
            }
            break;
        }
    }
}




