/*
Elaborar um programa que leia 15 elementos reais para
uma matriz A de uma dimensão do tipo vetor. Construir uma
matriz B de mesmos tipo e dimensão, observando a
seguinte lei de formação: “todo elemento da matriz A que
possuir índice par deve ter seu elemento dividido por 2; caso
contrário, o elemento da matriz A deve ser multiplicado por
1.5”. Apresentar os elementos da matriz B.
*/

#include <stdio.h>

void mostrarMatriz(double matriz[], int size){

    int i;
    
    for (i = 0; i < size; i++){
        printf("%lf", matriz[i]);
        if (i < size - 1){
            printf(", ");
        }
    }
    
}

int main(){
    int i;
    double A[15], B[15];
    for (i = 0; i < 15; i++){
        printf("Insira o valor de A%d: ", i + 1);
        scanf("%lf", &A[i]);
        if (i % 2 == 0){
            B[i] = A[i] * 2;
        } else {
            B[i] = A[i] * 1.5;
        }
    }
    printf("B = ");
    mostrarMatriz(B, 15);
    return 0;
}