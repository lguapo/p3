#ifndef __BIBLIOTECA_H
#define __BIBLIOTECA_H

typedef struct mxmn{
    int max;
    int min;
    int qtd;
}tMaximos;

void vetor(int* p, int tam, int* mx, int* mn);

#endif
//no arquivo fonte os valores são mandados para struct
//no main devemos endereçar ponteiros para tMaximos para depois passar como endereço 
//nos parametros de entrada.
