/*
Escrever um programa que leia 25 elementos (valores reais)
para temperaturas em graus Celsius e armazene esses
valores em uma matriz A de uma dimensão do tipo vetor.
Construir uma matriz B de mesmos tipo e dimensão, em que
cada elemento da matriz B deve ser a conversão da
temperatura em graus Fahrenheit do elemento
correspondente da matriz A. Apresentar os elementos das
matrizes A e B.
*/

#include <stdio.h>

void mostrarMatriz(double matriz[], int size){

    int i;
    
    for (i = 0; i < size; i++){
        printf("%.2lf", matriz[i]);
        if (i < size - 1){
            printf(", ");
        }
    }
    
}

int main(){

    int i;
    double A[25], B[25];

    for (i = 0; i < 25; i++){

        printf("Insira a temperatura em graus Celsius: ");
        scanf("%lf", &A[i]);
        B[i] = A[i] * 1.8 + 32;
        
    }

    printf("A = ");
    mostrarMatriz(A, 25);

    printf("\nB = ");
    mostrarMatriz(B, 25);

    return 0;  
}

    