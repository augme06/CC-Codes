/*
Elaborar um programa que leia duas matrizes do tipo vetor
para o armazenamento de nomes de pessoas, sendo a
matriz A com 20 elementos e a matriz B com 30 elementos.
Construir uma matriz C, sendo esta a junção das matrizes A
e B. Desta forma, a matriz C deve ter a capacidade de
armazenar 50 elementos. Apresentar os elementos da
matriz C.
*/

#include <stdio.h>
#include <string.h>
#define LIMIT 50

int main(){

    char i, A[20][LIMIT], B[30][LIMIT], C[50][LIMIT];

    for (i = 0; i < 30; i++){

        if (i < 20){

            printf("Insira o nome para A[%d]: ", i + 1);
            fgets(A[i], 35, stdin);
            A[i][strcspn(A[i], "\n")] = 0;
            strcpy(C[i], A[i]);

        }

        printf("Insira o nome para B[%d]: ", i + 1);
        fgets(B[i], 35, stdin);
        B[i][strcspn(B[i], "\n")] = 0; 
        strcpy(C[i + 20], B[i]);

    }

    printf("C = ");

    for (i = 0; i < 50; i++){

        printf("%s", C[i]);

        if (i < 49){
            printf(", ");
        }

    }

    return 0;
}