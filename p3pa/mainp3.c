#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,nv[i];
    int* mx, *mn;

    tMaximos nMax;

    printf("Digite a lista de numeros:\n");
    scanf("%d\n",i);

    vetornumeros(nv,i,mx,mn);
    
    mx = &nMax.max;
    mn = &nMax.min;

    printf("maximo: %d", *mx);
    printf("minimo: %d", *mn);

}    