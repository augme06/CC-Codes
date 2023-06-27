/*
Elaborar um programa que leia uma matriz A do tipo vetor
com 20 elementos inteiros. Construir uma matriz B dos
mesmos tipo e dimensão da matriz A, sendo cada elemento
da matriz B o somatório de 1 até o valor do elemento
correspondente armazenado na matriz A. Se o valor do
elemento da matriz A[1] for 5, o elemento correspondente da
matriz B[1] deve ser 15, pois o somatório do elemento da
matriz A é 1 + 2 + 3 + 4 + 5. Apresentar os elementos da
matriz B.
*/

#include <stdio.h>

int main(){
    int i, j, A[20], B[20];
    for (i = 0; i < 20; i++){
        printf("Insira um valor: ");
        scanf("%d", &A[i]);
        int soma = 0;
        for (j = 1; j <= A[i]; j++){
            soma += j;
        }
        B[i] = soma;
    }
    printf("B = ");
    for (i = 0; i < 20; i++){
        printf("%d", B[i]);
        if (i < 19){
            printf(", ");
        }
    }
    return 0;
}