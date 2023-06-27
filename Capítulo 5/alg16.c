/*
Elaborar um programa que apresente os resultados da
soma e da média aritmética dos valores pares situados na
faixa numérica de 50 até 70.
*/

#include <stdio.h>

int main(){
    int i, soma = 0, quant = 0;
    for (i = 50; i <= 70; i++){
        if (i % 2 == 0){
            soma += i;
            quant++;
        }
    }
    printf("Soma: %d\nMédia dos valores: %d", soma, (soma/quant));
    return 0;
}