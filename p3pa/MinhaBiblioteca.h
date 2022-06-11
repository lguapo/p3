#ifndef __MINHABIBLIOTECA_H
#define __MINHABIBLIOTECA_H

typedef struct mxmn{
    int max;
    int min;
    int sizevet;
}tMaximos;

tMaximos tm;

void vetornumeros(int v[tm.sizevet], int size,int* maior, int* menor);

#endif