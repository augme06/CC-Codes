/*
Elaborar um programa que leia duas matrizes A e B de uma
dimensão do tipo vetor com dez elementos inteiros cada.
Construir uma matriz C de mesmos tipo e dimensão que
seja formada pelo quadrado da soma dos elementos
correspondentes nas matrizes A e B. Apresentar os
elementos da matriz C.
*/

#include <stdio.h>
#include <math.h>

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

    int i, A[10], B[10], C[10];
    
    for (i = 0; i < 10; i++){
        printf("Insira os valores de A%d e B%d respectivamente: ", i + 1, i + 1);
        scanf("%d %d", &A[i], &B[i]);
        C[i] = pow((A[i] + B[i]), 2);
    }

    printf("C = ");
    mostrarMatriz(C, 10);
    return 0;
    
}