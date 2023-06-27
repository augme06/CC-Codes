/*
Escrever um programa que leia duas matrizes A e B de uma
dimensão com dez elementos. A matriz A deve aceitar
apenas a entrada de valores divisíveis por 2 e 3, enquanto a
matriz B deve aceitar apenas a entrada de valores múltiplos
de 5. A entrada das matrizes deve ser validada pelo
programa, e não pelo usuário. Construir uma matriz C que
seja o resultado da junção das matrizes A e B, de modo que
contenha 20 elementos. Apresentar os elementos da matriz
C.
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

    int i, A[10], B[10], C[20];
    for (i = 0; i < 10; i++){
        int valA = 0, valB = 0;
        while (valA == 0){
            printf("Insira o valor de A[%d]: ", i + 1);
            scanf("%d", &A[i]);
            if (A[i] % 2 == 0 && A[i] % 3 == 0){
                valA = 1;
            } else {
                printf("O valor não é divisível por 2 e 3!\n");
            }   
        }
        while (valB == 0){
            printf("Insira o valor de B[%d]: ", i + 1);
            scanf("%d", &B[i]);
            if (B[i] % 5 == 0){
                valB = 1;
            } else {
                printf("O valor não é múltiplo de 5!\n");
            }   
        }
        C[i] = A[i];
        C[i + 10] = B[i];
    }

    printf("C = ");
    mostrarMatriz(C, 20);
    return 0;
}


