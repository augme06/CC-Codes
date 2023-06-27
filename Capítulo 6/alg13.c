/*
Construir um programa que calcule a tabuada de um valor
qualquer de 1 até 10 e armazene os resultados em uma
matriz A de uma dimensão. Apresentar os elementos da
matriz A.
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

    int i, num, A[10];

    printf("Insira um número: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++){
        A[i] = num * (i + 1);
    }
    
    printf("Tabuada do numero %d -> ", num);
    mostrarMatriz(A, 10);
    return 0;

}