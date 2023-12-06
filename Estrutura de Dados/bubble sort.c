// Bubble Sort
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int vetor[TAM];

void add(int v[], int tamanho){
    int i;
    for (i = 0; i <= tamanho - 1; i++){
        printf("Insira um elemento: ");
        scanf("%d", &v[i]);
    }
}

void sort(int v[], int tamanho){
    int i, j;
    for (i = 0; i <= tamanho - 1; i++){
        for (j = 0; j < tamanho - 1; j++){
            if (v[j] > v[j + 1]){
                int aux = v[j + 1];
                v[j + 1] = v[j];
                v[j] = aux;
            }
        }
    }
}

void listar(int v[], int tamanho){
    int i;
    printf("\n\nListando vetor\n\n");
    for (i = 0; i <= tamanho - 1; i++){
        printf("%d ", v[i]);
    }
}

int main(){
    add(vetor, TAM);
    listar(vetor, TAM);
    sort(vetor, TAM);
    listar(vetor, TAM);
    return (EXIT_SUCCESS);
}