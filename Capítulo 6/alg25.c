/*
Escrever um programa que leia uma matriz A de uma
dimensão com 15 elementos numéricos inteiros. Apresentar
o total de elementos pares existentes na matriz.
*/

#include <stdio.h>

int par(int matriz[], int size){

    int i, pares = 0;

    for (i = 0; i < size; i++){
        if (matriz[i] % 2 == 0){
            pares++;
        }
    }

    return pares;

}

int main(){
    int i, A[15];
    for (i = 0; i < 15; i++){
        printf("Insira o valor de A%d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Existem %d valores pares na matriz A.", par(A, 15));
    return 0;
}