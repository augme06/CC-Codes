/*
Elaborar um programa que leia uma matriz A do tipo vetor
com dez elementos inteiros. Construir uma matriz B de
mesmo tipo, em que cada elemento deve ser a metade
exata de cada um dos elementos existentes da matriz A.
Apresentar os elementos das matrizes A e B.
*/

#include <stdio.h>
#define SIZE 10

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
    
    int i, A[SIZE], B[SIZE];

    for (i = 0; i < SIZE; i++){
        printf("Insira o valor de A[%d]: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = A[i] / 2;
    }

    mostrarMatriz(B, 10);
    return 0;

}