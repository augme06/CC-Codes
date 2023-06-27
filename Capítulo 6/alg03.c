/*
Escrever um programa que leia duas matrizes
(denominadas A e B) do tipo vetor com 20 elementos reais.
Construir uma matriz C, sendo cada elemento da matriz C a
subtração de um elemento correspondente da matriz A com
um elemento correspondente da matriz B, ou seja, a
operação de processamento deve estar baseada na
operação C[I] ← A[I] – B[I]. Ao final, apresentar os
elementos da matriz C.
*/

#include <stdio.h>

int main(){
    int i;
    double A[20], B[20], C[20];
    for (i = 0; i < 20; i++){
        printf("Insira, respectivamente, o valor de A[%d] e B[%d]: ", i + 1, i + 1);
        scanf("%lf %lf", &A[i], &B[i]);
        C[i] = A[i] - B[i];
    }
    printf("C = ");
    for (i = 0; i < 20; i++){
        printf("%lf ", C[i]);
    }
    return 0;
}