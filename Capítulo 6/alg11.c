/*
Elaborar um programa que leia uma matriz A do tipo vetor
com dez elementos inteiros positivos. Construir uma matriz
B de mesmos tipo e dimensão, em que cada elemento da
matriz B deve ser o valor negativo do elemento
correspondente da matriz A. Desta forma, se em A[1] estiver
armazenado o elemento 8, deve estar em B[1] o valor –8 e
assim por diante. Apresentar os elementos da matriz B.
*/

#include <stdio.h>
#define SIZE 10

int main(){
    int i, A[SIZE], B[SIZE];
    for (i = 0; i < SIZE; i++){
        printf("Insira o valor de A[%d]: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = A[i] * (-1);
    }
    printf("B = ");
    for (i = 0; i < SIZE; i++){
        printf("%d", B[i]);
        if (i < SIZE - 1){
            printf(", ");
        }
    }
    return 0;
}