/*
Elaborar um programa que apresente os quadrados sem
armazená-los na memória dos valores inteiros existentes na
faixa de valores de 15 a 200 com saltos de 3 em 3.
*/

#include <stdio.h>

int main(){
    int i;
    for (i = 15; i <= 200; i += 3){
        printf("%d ", i*i);
    }
    return 0;
}