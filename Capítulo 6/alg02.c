/*
Elaborar um programa que leia oito elementos inteiros em
uma matriz A do tipo vetor. Construir uma matriz B de
mesma dimensão com os elementos da matriz A
multiplicados por 3. O elemento B[1] deve ser implicado pelo
elemento A[1] * 3, o elemento B[2] implicado pelo elemento
A[2] * 3, e assim por diante, até 8. Apresentar a matriz B.
*/

#include <stdio.h>

int main(){
    int i, A[8], B[8];
    for (i = 0; i < 8; i++){
        scanf("%d", &A[i]);
        B[i] = A[i] * 3;
    }
    printf("B = ");
    for (i = 0; i < 8; i++){
        printf("%d ", B[i]);
    }
    return 0;
}