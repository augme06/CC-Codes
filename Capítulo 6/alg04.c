/*
Elaborar um programa que leia 15 elementos inteiros de
uma matriz A do tipo vetor. Construir uma matriz B de
mesmo tipo, observando a seguinte lei de formação: “todo
elemento da matriz B deve ser o quadrado do elemento da
matriz A correspondente”. Apresentar os elementos das
matrizes A e B.
*/

#include <stdio.h>

int main(){
    int i, A[15], B[15];
    for (i = 0; i < 15; i++){
        printf("Insira o valor de A[%d]: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i];
    }
    printf("A = ");
    for (i = 0; i < 15; i++){
        printf("%d ", A[i]);
    }
    printf("\nB = ");
    for (i = 0; i < 15; i++){
        printf("%d ", B[i]);
    }     
    return 0;
}