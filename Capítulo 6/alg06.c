/*
Construir um programa que leia duas matrizes A e B do tipo
vetor com 15 elementos quaisquer inteiros. Construir uma
matriz C, sendo esta o resultado da junção das matrizes A e
B. Desta forma, a matriz C deve ter o dobro de elementos
em relação às matrizes A e B, ou seja, a matriz C deve
possuir 30 elementos. Apresentar a matriz C.
*/

#include <stdio.h>

int main(){

    int i, j, A[15], B[15], C[30];

    for (i = 0; i < 15; i++){

        printf("Insira o valor de A[%d] e B[%d] respectivamente: ", i + 1, i + 1);
        scanf("%d %d", &A[i], &B[i]);

        if (i == 14){
            
            for (j = 0; j < 15; j++){

                C[j] = A[j];
                C[j + 15] = B[j];

            }
        }
    }

    printf("C = ");
    for (i = 0; i < 30; i++){
        printf("%d ", C[i]);
    }

    return 0;

}