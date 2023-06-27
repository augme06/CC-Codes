/*
Elaborar um programa que leia duas matrizes A e B de uma
dimensão com 12 elementos. A matriz A deve aceitar
apenas a entrada de valores divisíveis por 2 ou 3, enquanto
a matriz B deve aceitar apenas a entrada de valores que
não sejam múltiplos de 5. A entrada das matrizes deve ser
validada pelo programa, e não pelo usuário. Construir uma
matriz C que seja o resultado da junção das matrizes A e B,
de forma que contenha 24 elementos. Apresentar os
elementos da matriz C.
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

    int i, A[12], B[12], C[24];

    for (i = 0; i < 12; i++){

        int valA = 0, valB = 0;

        while (valA == 0){
            printf("Insira o valor de A[%d]: ", i + 1);
            scanf("%d", &A[i]);
            if (A[i] % 2 == 0 || A[i] % 3 == 0){
                valA = 1;
            } else {
                printf("O valor não é divisível por 2 ou 3!\n");
            }   
        }

        while (valB == 0){
            printf("Insira o valor de B[%d]: ", i + 1);
            scanf("%d", &B[i]);
            if (B[i] % 5 != 0){
                valB = 1;
            } else {
                printf("O valor não pode ser múltiplo de 5!\n");
            }   
        }

        C[i] = A[i];
        C[i + 12] = B[i];

    }

    printf("C = ");
    mostrarMatriz(C, 24);

    return 0;

}