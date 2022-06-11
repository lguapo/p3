//    gcc -c arqfonte.c
//    gcc -c main.c
//    gcc -o main.exe main.o arqfonte.o

//    gcc -c -g* .c
//   gcc*.o -o programa
//    ./programa.exe

#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i = 0,
    int* mm, *mn, * t;

    tMaximos numMx;
    
    t = &numMx.qtd;
    mm = &numMx.max;
    mn = &numMx.min;

    //primeiro valor pega tamanho do vetor
    printf("Informe uma cadeia de numeros:\n");
    scanf("%i",&i);

    t -> qtd = i;
    int vn[i];

    void vetor(vn,i,mn,mn);

}    