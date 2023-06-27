/*
Escrever um programa que apresente como resultado a
potência de uma base qualquer elevada a um expoente
qualquer, ou seja, de BE, em que B é o valor da base e E o
valor do expoente. Considere apenas a entrada de valores
inteiros e positivos, ou seja, de valores naturais. Sugestão:
não utilize o formato “base ↑ expoente”, pois é uma solução
muito trivial. Use a técnica de laço, em que o valor da base
deve ser multiplicado o número de vezes determinado no
expoente.
*/

#include <stdio.h>

int main(){
    int B, E, I, MULT = 1;
    printf("Insira o valor da base: ");
    scanf("%d", &B);
    printf("Insira o valor do expoente: ");
    scanf("%d", &E);
    for (I = 1; I <= E; I++){
        MULT *= B;
    }
    printf("%d", MULT);
    return 0;
}