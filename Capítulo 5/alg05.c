/*
Elaborar um programa que apresente todos os valores
numéricos inteiros ímpares situados na faixa de 0 a 20.
Sugestão: para verificar se o valor numérico é ímpar, dentro
do laço de repetição, fazer a verificação lógica dessa
condição com a instrução se/fim_se dentro do próprio laço,
perguntando se o valor numérico do contador é ímpar (se o
resto do número dividido por 2 é diferente de zero); sendo,
mostre-o; não sendo, passe para o próximo valor numérico.
*/

#include <stdio.h>

int main(){
    int i;
    printf("Números ímpares entre 0 e 20:\n");
    for (i = 0; i <= 20; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }
    return 0;
}