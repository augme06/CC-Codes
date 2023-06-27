/*
Elaborar um programa que leia uma matriz A de uma
dimensão com seis elementos do tipo real. Construir uma
matriz B, em que cada posição de índice ímpar da matriz B
deve ser atribuída com um elemento de índice par existente
na matriz A e cada posição de índice par da matriz B deve
ser atribuída com um elemento de índice ímpar existente na
matriz A. Apresentar os elementos das duas matrizes.
*/

#include <stdio.h>

void mostrarMatriz(double matriz[], int size){

    int i;
    
    for (i = 0; i < size; i++){
        printf("%lf", matriz[i]);
        if (i < size - 1){
            printf(", ");
        }
    }
    
}

int main(){

    int i;

    double A[6], B[6];
    for (i = 0; i < 6; i++){
        printf("Insira o valor de A%d: ", i + 1);
        scanf("%lf", &A[i]);
    }
    for (i = 0; i < 6; i += 2){
        B[i] = A[i + 1];
        B[i + 1] = A[i];
    }
    
    printf("A = ");
    mostrarMatriz(A, 6);
    printf("\nB = ");
    mostrarMatriz(B, 6);
    return 0;

}