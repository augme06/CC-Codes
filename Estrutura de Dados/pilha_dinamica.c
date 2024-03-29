#include <stdio.h>
#include <stdlib.h>

typedef struct SPilha{
    int info;
    struct SPilha * next;
}TPilha;

// Sentinela/Topo
TPilha * pilha = NULL;

void push(int dado){
    TPilha * novo = malloc(sizeof(TPilha));
    novo->info = dado;
    novo->next = pilha;
    pilha = novo;
}

void listar(){
    TPilha * ultimo = pilha;
    printf("\n\nListando\n\n");
    while (ultimo != NULL){
        printf("%d ", ultimo->info);
        ultimo = ultimo->next;
    }
}

TPilha * buscar(int key){
    TPilha * ultimo = pilha;
    while (ultimo != NULL){
        if (ultimo->info == key)
            return ultimo;
        ultimo = ultimo->next;
    }

    return NULL;
}

void pop(){
    // Verifica se a pilha está vazia
    if (pilha == NULL)
        return;
    TPilha * destroyer = pilha;
    pilha = pilha->next;
    free(destroyer);
}


int main(int argc, char** argv) {

    int leitura;
    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        push(leitura);
    }

    listar();
    pop();
    pop();
    listar();

    int chave;
    printf("\n\nInforme o valor da chave: ");
    scanf("%d",&chave);
    TPilha * posicao = buscar(chave);
    if (posicao != NULL)
        printf("Chave encontrada na posição %p", posicao);
    else{
        printf("Chave não encontrada na pilha");
    }
  
    return (EXIT_SUCCESS);
}
