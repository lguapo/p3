/*
                    PROGRAMAÇÃO APLICADA
                    EXAME AVALIATIVO 03


Nomes: Lucas da Silva Nunes(id 27) e Renata Ribeiro(id 45)

*/
#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int i;
    tMaximos * maior,* menor;

    maior = (tMaximos*) malloc(sizeof(tMaximos));
    menor = (tMaximos*) malloc(sizeof(tMaximos));

    printf("Digite a lista de numeros:\n");
    scanf("%d",&i);
    getchar();

    int nv[i];

    vetornumeros(nv,i,maior,menor);
    
    printf("\nMax = %d, Min = %d\n", maior->max, menor->min);

    system("pause");
    return 0;
}    