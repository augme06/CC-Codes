/*
Elaborar um programa que leia uma matriz A do tipo vetor
com 15 elementos inteiros. Construir uma matriz B de
mesmo tipo, e cada elemento da matriz B deve ser o
resultado da fatorial correspondente de cada elemento da
matriz A. Apresentar as matrizes A e B.
*/

#include <stdio.h>

int main(){
    int i, j, A[15];
    long long int B[15];
    for (i = 0; i < 15; i++){
        printf("Insira o valor de A[%d]: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = 1;
        for (j = A[i]; j > 1; j--){
            B[i] *= j;
        }  
    }
    printf("A = ");
    for (i = 0; i < 15; i++){
        printf("%d ", A[i]);
    }
    printf("\nB = ");
    for (i = 0; i < 15; i++){
        printf("%lld ", B[i]);
    }     
    return 0;
}