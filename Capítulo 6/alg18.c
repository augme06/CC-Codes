/*
 Elaborar um programa que leia seis elementos (valores
inteiros) para as matrizes A e B de uma dimensão do tipo
vetor. Construir as matrizes C e D de mesmo tipo e
dimensão. A matriz C deve ser formada pelos elementos de
índice ímpar das matrizes A e B e a matriz D deve ser
formada pelos elementos de índice par das matrizes A e B.
Apresentar os elementos das matrizes C e D
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
    int i, A[6], B[6], C[6], D[6], indexC = 0, indexD = 0;
    for (i = 0; i < 6; i++){
        printf("Insira os elementos de A[%d] e B[%d]: ", i , i);
        scanf("%d %d", &A[i], &B[i]);
        if (i % 2 != 0){
            C[indexC++] = A[i];
            C[indexC++] = B[i];
        } else {
            D[indexD++] = A[i];
            D[indexD++] = B[i];
        }
    }
    printf("C = ");
    mostrarMatriz(C, 6);
    printf("\nD = ");
    mostrarMatriz(D, 6);
}