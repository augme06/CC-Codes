// Elaborar um programa que apresente como resultado os
// quadrados armazenados na memória dos números inteiros
// existentes na faixa de valores de 15 a 200.

#include <stdio.h>

int main(){
    int i, numsq;
    for (i = 15; i <= 200; i++){
        numsq = i * i;
        printf("%d^2 = %d\n", i, numsq);
    }
    return 0;
}