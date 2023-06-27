/*
Elaborar um programa que leia duas matrizes A e B de uma
dimensão com seis elementos. A matriz A deve aceitar
apenas a entrada de valores pares, enquanto a matriz B
deve aceitar apenas a entrada de valores ímpares. A
entrada das matrizes deve ser validada pelo programa, e
não pelo usuário. Construir uma matriz C que seja o
resultado da junção das matrizes A e B, de modo que a
matriz C contenha 12 elementos. Apresentar os elementos
da matriz C.
*/

#include <stdio.h>

void mostrarMatriz(int matriz[], int size){

    int i;
    
    for (i = 0; i < size; i++){
        printf("%d", matriz[i]);
        if (i < size - 1){
            printf(", ");
        }
    }
    
}

int main(){

    int i, A[6], B[6], C[12];

    for (i = 0; i < 6; i++){

        int valA = 0, valB = 0;

        while (valA == 0){
            printf("Insira o valor de A[%d]: ", i + 1);
            scanf("%d", &A[i]);
            if (A[i] % 2 == 0){
                valA = 1;
            } else {
                printf("O valor não é par!\n");
            }
        }

        C[i] = A[i];

        while (valB == 0){
            printf("Insira o valor de B[%d]: ", i + 1);
            scanf("%d", &B[i]);
            if (B[i] % 2 != 0){
                valB = 1;
            } else {
                printf("O valor não é ímpar!\n");
            }
        }

        C[i + 6] = B[i];

    }

    printf("C = ");
    mostrarMatriz(C, 12);

    return 0;

}
