/*
Elaborar um programa que leia 20 elementos do tipo real
em uma matriz A unidimensional e construir uma matriz B de
mesma dimensão com os mesmos elementos armazenados
na matriz A, porém de forma invertida. Ou seja, o primeiro
elemento da matriz A passa a ser o último da matriz B, o
segundo elemento da matriz A passa a ser o penúltimo da
matriz B, e assim por diante. Apresentar os elementos das
matrizes A e B.
*/

#include <stdio.h>

int main(){

    int i; 
    double A[20], B[20];

    for (i = 0; i < 20; i++){
        printf("Insira um valor: ");
        scanf("%lf", &A[i]);
        B[19 - i] = A[i];
    }

    printf("A = ");
    for (i = 0; i < 20; i++){
        printf("%lf", A[i]);
        if (i < 19){
            printf(", ");
        }
    }

    printf("\nB = ");
    for (i = 0; i < 20; i++){
        printf("%lf", B[i]);
        if (i < 19){
            printf(", ");
        }
    }

    return 0;
    
}