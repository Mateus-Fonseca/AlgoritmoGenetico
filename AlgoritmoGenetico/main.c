#include <stdio.h>
#include <stdlib.h>
#include "individuo.c"
#include "transa.c"


int main()
{
    iniciaPopulacao();
    int i=0;
    while(i!=10){
        avaliaPopulacao();      //fitness
        epocaDaReproducao();           //seleciona individuos para trasar e bota eles para transar
        printaPopulação();
        i++;
    }

    return 0;
}
