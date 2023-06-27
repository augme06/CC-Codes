// Elaborar um programa que apresente o somatório dos
// valores pares existentes na faixa de 1 até 500.

#include <stdio.h>

int main(){
    int i, n = 0;
    for (i = 1; i <= 500; i++){
        if (i % 2 == 0){
            n += i;
        }
    }
    printf("A soma de todos os valores pares entre 1 e 500 é de %d", n);
    return 0;
}