/*
Elaborar um programa que leia uma matriz A de uma
dimensão com dez elementos numéricos inteiros.
Apresentar o total de elementos ímpares existentes na
matriz e também o percentual do valor total de números
ímpares em relação à quantidade total de elementos
armazenados na matriz.
*/

#include <stdio.h>

int impar(int matriz[], int size){

    int i, impares = 0;

    for (i = 0; i < size; i++){
        if (matriz[i] % 2 != 0){
            impares++;
        }
    }

    return impares;

}

int main(){

    int i, quant = 0, A[10];
    double porc;

    for (i = 0; i < 10; i++){
        printf("Insira o valor de A%d: ", i + 1);
        scanf("%d", &A[i]);
        quant++;
    }

    porc = (impar(A, 10) / (quant * 1.0)) * 100;
    printf("Existem %d elementos impares na matriz A, representando %lf%c do total de valores.", impar(A, 10), porc, '%');
    return 0;
}