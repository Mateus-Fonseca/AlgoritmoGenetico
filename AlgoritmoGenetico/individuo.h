
#ifndef _INDIVIDUO_H
#define _INDIVIDUO_H
typedef struct individuo * Individuo;
Individuo individuoCria();
void individuoMata(Individuo I);
Individuo transa(Individuo I1, Individuo I2);
parametros CrossingOver(Individuo I1, Individuo I2);
parametros Mutacao(Individuo I);
#endif
