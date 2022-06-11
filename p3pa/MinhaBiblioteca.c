#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vetornumeros(int* vn, int szv,int* maior, int* menor){

    int n, auxn , vetnum[szv];
    tMaximos tNum;

    for(int j = 0; j<szv ; j++){
        
        scanf("\n%d", n);
        vetnum[j] = n;
        auxn = n;
        if((auxn =! vetnum[j-1])&&(j>0)){
           
            if(auxn < vetnum[j-1]){

                maior = &vetnum[j-1];
                printf("max = %d\n", *maior);
            }
            else{
                if(auxn > vetnum[j-1]){

                    menor = &vetnum[j-1];
                    printf("min = %d\n", *menor);
                }
            }

        } 
        printf("\n%d",vetnum[j]);   
    }

}