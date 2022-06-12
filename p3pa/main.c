#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int i,nv[i];
    tMaximos nMax,* maior,* menor;

    printf("Digite a lista de numeros:\n");
    scanf("%d\n",&i);

    vetornumeros(nv,i,maior,menor);
    
    printf("maximo: %d", maior->max);
    printf("minimo: %d", menor->min);

    return 0;
}    