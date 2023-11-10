#include <stdio.h>
#include <stdlib.h>

typedef struct SFila{
    int info;
    struct SFila * next;
}TFila;

void enqueue(TFila **f, int dado){
    TFila * ultimo;
    TFila * novo = malloc(sizeof(TFila));
    novo->info = dado;
    novo->next = NULL;
    if (*f == NULL)
        *f = novo;
    else{
        ultimo = *f;
        while (ultimo->next != NULL){
            ultimo = ultimo->next;
        }
        ultimo->next = novo; 
    }
}

void listar(TFila **f){
    TFila * ultimo = *f;
    printf("\n\nListando\n\n");
    while (ultimo != NULL){
        printf("%d ", ultimo->info);
        ultimo = ultimo->next;
    }
}

TFila * buscar(TFila **f, int key){
    TFila * ultimo = *f;
    while (ultimo != NULL){
        if (ultimo->info == key)
            return ultimo;
        ultimo = ultimo->next;
    }

    return NULL;
}

void dequeue(TFila **f){
    if (*f == NULL)
        return;
    TFila * destroyer = *f;
    *f = (*f)->next;
    free(destroyer);
}


int main(int argc, char** argv) {
    
    TFila * fila = NULL;
    int leitura;
    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        enqueue(&fila, leitura);
    }

    listar(&fila);
    dequeue(&fila);
    dequeue(&fila);
    listar(&fila);

    int chave;
    printf("\n\nInforme o valor da chave: ");
    scanf("%d",&chave);
    TFila * posicao = buscar(&fila, chave);
    if (posicao != NULL)
        printf("Chave encontrada na posição %p", posicao);
    else{
        printf("Chave não encontrada na fila");
    }
  
    return (EXIT_SUCCESS);
}
