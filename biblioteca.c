#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*       ----representatividade na int main----        */
        //  vetor    i         mm           mn
void vetor(int* p, int tam, int *maior, int* menor){
   
   tMaximos numMax;

    int num, aux;
    int nvet[tam];

    p = &nvet;
    maior = &numMax.max;
    menor = &numMax.min;

    for(int j=0; j<tam; j++){
        scanf("%i", &num);
         nvet[j] = num;

        aux = num;
        if(aux == num){
            
        }
        else{
            if(aux>num[j-1]){
                maior -> numMax = aux;
            }
            else{
                if(aux<num[j-1]){
                    menor -> numMax = aux;
                }
            }
        }

    } 

    printf("Vetor: %d\n",nvet[j] );
    printf("\nMaximo: %d\n",numMax.max);
    printf("\nMinimo: %d\n", numMax.min);
}