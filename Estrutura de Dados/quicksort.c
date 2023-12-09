// Implementação de um algoritmo de quick sort, com o pivô sendo o primeiro elemento do vetor
#include <stdio.h>
#include <stdlib.h>

#define TAM 5
                
int vetor[5] = {1,4,3,2,5};

int partition(int v[], int inicio, int fim){
    int pivo = v[inicio];  
    int maiores = fim + 1; 
    int i,temp;

    for (i = fim; i > inicio; i--){
        if (v[i] > pivo){
            maiores--;
            temp = v[i];
            v[i] = v[maiores];
            v[maiores] = temp;
        }
    }
    int meio = maiores - 1;
    temp = v[inicio]; 
    v[inicio] = v[meio];
    v[meio] = temp;
    return meio;
}

void quickSort(int v[], int inicio, int fim){
    if (inicio >= fim)
        return;
    int meio = partition(v,inicio,fim);
    quickSort(v,inicio,meio - 1);
    quickSort(v,meio + 1,fim);
}

void listar(int v[], int tamanho){
    int i;
    printf("\n\nListando\n");
    for (i = 0; i < tamanho;i++){
        printf("%d ",v[i]);
    }
}

int main(int argc, char** argv) {
    
    listar(vetor,TAM);
    quickSort(vetor,0,TAM - 1);
    listar(vetor,TAM);
  
    return (EXIT_SUCCESS);
}
