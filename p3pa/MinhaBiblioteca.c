#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vetornumeros(int* vn, int szv,int* maior, int* menor){

    int n, auxn , vetnum[szv];
    tMaximos tNum , *psMax, *psMin;

    psMax = &maior;
    psMin = &menor;

    for(int j = 0; j<szv ; j++){
        
        scanf("\n%d", &n);
        vetnum[j] = n;

        if((n =! vetnum[j-1])&&(j>0)){
           
            if(n > vetnum[j-1]){

                psMax->max = n;
                printf("max = %d\n", );
            }
            else{
                if(n < vetnum[j-1]){

                    psMin->min = n;
                    printf("min = %d\n", );
                }
            }

        } 
        printf("\n%d",vetnum[j]);   
    }

}