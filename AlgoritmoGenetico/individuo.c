#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include "individuo.h"

#define range 10
#define taxaMutacao 5 // a mutação dos genes de um individuo é mutado em 5%

typedef struct individuo{
    parametros parametroInterno;
    float valorFuncao;
};

typedef struct parametros{
    float x;
    float y;
};

Individuo individuoCria(){
    Individuo t = (Individuo)malloc(sizeof(struct individuo));
    t.parametroInterno.x = rand()%range;
    t.parametroInterno.y = rand()%range;
    t.valor funcao = NULL;
    return t;
}

void individuoMata(Individuo I){


}

Individuo transa(Individuo I1, Individuo I2);
parametros CrossingOver(Individuo I1, Individuo I2);
parametros Mutacao(Individuo I);
