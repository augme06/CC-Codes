/*
Elaborar um programa que leia dez valores numéricos reais
e apresente no final o somatório e a média dos valores lidos.
*/

#include <stdio.h>

int main(){
    int i, media, soma = 0;
    for (i = 0; i < 10; i++){
        int num;
        scanf("%d", &num);
        soma += num;
    }
    media = soma / 10;
    printf("Média: %d\nSoma: %d", media, soma);
    return 0;
}