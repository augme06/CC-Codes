/*
Elaborar um programa que leia 12 elementos inteiros para
uma matriz A de uma dimensão do tipo vetor. Construir uma
matriz B de mesmos tipo e dimensão, observando a
seguinte lei de formação: “todo elemento da matriz A que for
ímpar deve ser multiplicado por 2; caso contrário, o
elemento da matriz A deve permanecer constante”.
Apresentar os elementos da matriz B.
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
    int i, A[12], B[12];
    for (i = 0; i < 12; i++){
        printf("Insira o valor de A%d: ", i + 1);
        scanf("%d", &A[i]);
        if (A[i] % 2 != 0){
            B[i] = A[i] * 2;
        } else {
            B[i] = A[i];
        }
    }
    printf("B = ");
    mostrarMatriz(B, 12);
    return 0;
}