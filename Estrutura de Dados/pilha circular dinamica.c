#include <stdio.h>
#include <stdlib.h>

typedef struct SPilha{
    int info;
    struct SPilha * next;
}TPilha;

//Sentinela
TPilha * pilha = NULL;

void enqueue(int dado){
    TPilha * first;
    TPilha * novo = malloc(sizeof(TPilha));
    novo->info = dado;
    if (pilha == NULL){
        pilha = novo;
        pilha->next = pilha;
    } else {
        first = pilha;
        do
            first = first->next;
        while (first->next != pilha);
        novo->next = pilha;
        pilha = novo;
        first->next = pilha;
    }
}

void listar(){
    TPilha * first = pilha;
    printf("\n\nListando\n\n");
    if (pilha == NULL)
        return;
    do{
        printf("%d ", first->info);
        first = first->next;
    }while (first != pilha);
}

TPilha * buscar(int key){
    if (pilha == NULL)
        return NULL;
    TPilha * first = pilha;
    do{
        if (first->info == key)
            return first;
        first = first->next;
    }while (first != pilha);

    return NULL;
}

void dequeue(){
    if (pilha == NULL)
        return;
    
    TPilha * destroyer = pilha;
    TPilha * first = pilha;

    if (pilha->next == pilha){
        pilha = NULL;
        free(destroyer);
        return;
    }

    while (first->next != pilha){
        first = first->next;
    }

    pilha = pilha->next;
    free(destroyer);

    first->next = pilha;
}


int main(int argc, char** argv) {

    int leitura;
    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
            break;
        enqueue(leitura);
    }

    listar();
    dequeue();
    dequeue();
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
