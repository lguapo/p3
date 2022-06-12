#include "minhabiblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vetornumeros(int* vn, int szv,tMaximos *maior,tMaximos *menor){

    int n, auxn , vetnum[szv];
    tMaximos tNum;

    for(int j = 0; j<szv ; j++){
        
        scanf("\n%d", &n);
        vetnum[j] = n;

        if(j==0){
            maior->max = n;
        }
        else{
            if(n != vetnum[j-1]){
           
                if(n > vetnum[j-1]){

                    maior->max = n;
               
                }
                else{
                    if(n < vetnum[j-1]){

                        menor->min = n;
                    
                    }
                }

            } 
            printf("\n%d",vetnum[j]);   
        }
    }    
}