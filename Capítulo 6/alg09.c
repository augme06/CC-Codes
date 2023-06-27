/*
Escrever um programa que leia três matrizes (A, B e C) de
uma dimensão do tipo vetor com cinco elementos cada que
sejam do tipo real. Construir uma matriz D, sendo esta o
resultado da junção das três matrizes (A, B e C). Desta
forma, a matriz D deve ter o triplo de elementos das
matrizes A, B e C, ou seja, 15 elementos. Apresentar os
elementos da matriz D.
*/

#include <stdio.h>

int main(){

    int i;
    double A[5], B[5], C[5], D[15];

    for (i = 0; i < 5; i++){

        printf("Insira os valores de A%i, B%d e C%d: ", i + 1, i + 1, i + 1);
        scanf("%lf %lf %lf", &A[i], &B[i], &C[i]);
        
        D[i] = A[i];
        D[i + 5] = B[i];
        D[i + 10] = C[i];

    }

    printf("D = ");
    for (i = 0; i < 15; i++){

        printf("%lf", D[i]);

        if (i < 14){
            printf(", ");
        }

    }

    return 0;

}