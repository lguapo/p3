#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>


void vetornumeros(int* vn, int szv,tMaximos *maior,tMaximos *menor){

    int n, vetnum[szv];

    for(int j = 0; j<szv ; j++){
        
        scanf("%d", &n);
        getchar();
        vetnum[j] = n;

        if(j == 0){
            maior->max = vetnum[j];
            menor->min = vetnum[j];
        }
        else{
            if(vetnum[j] < menor->min){

                menor->min = vetnum[j];
               
            }
            else{
                if(vetnum[j] >= maior->max){

                    maior->max = vetnum[j];
                    
                }
            }

        }      
    }
    printf("\nVetor:\n");
    for(int j = 0;j<szv;j++){
        
        printf("%d",vetnum[j]);
        
        if(j != szv-1){

            printf(" , ");
        } 
    }
}