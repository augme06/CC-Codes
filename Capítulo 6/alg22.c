/*
Construir um programa que leia uma matriz A de uma
dimensão do tipo vetor com 30 elementos do tipo inteiro. Ao
final do programa, apresentar a quantidade de valores pares
e ímpares existentes na referida matriz.
*/

#include <stdio.h>

int par_impar(int matriz[], int size, char choice){

    int i, pares = 0, impares = 0;

    for (i = 0; i < size; i++){
        if (matriz[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    if (choice == 'p'){
        return pares;
    } else if (choice == 'i') {
        return impares;
    }

    return 0;

}

int main(){
    int i, A[30];
    for (i = 0; i < 30; i++){
        printf("Insira o valor de A%d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Pares: %d\nÍmpares: %d", par_impar(A, 30, 'p'), par_impar(A, 30, 'i'));
    return 0;
}