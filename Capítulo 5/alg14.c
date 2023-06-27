/*
Elaborar um programa que leia sucessivamente valores
numéricos e apresente no final o somatório, a média e o
total de valores lidos. O programa deve ler os valores
enquanto o usuário estiver fornecendo valores positivos. Ou
seja, o programa deve parar quando o usuário fornecer um
valor negativo (menor que zero).
*/

#include <stdio.h>

int main(){
    int num, media, soma = 0, quant = 0, fim = 0;
    while (fim == 0){
        printf("Insira um número: ");
        scanf("%d", &num);
        if (num < 0){
            fim = 1;
        } else {
            soma += num;
            quant++;
        }
    }
    media =  soma / quant;
    printf("FIM!\nSoma dos valores: %d\nMédia: %d\nTotal de valores lidos: %d", soma, media, quant);
    return 0;
}