/*
Construir um programa que apresente todos os valores
numéricos divisíveis por 4 e menores que 200. Sugestão: a
variável que controla o contador do laço deve ser iniciada
com valor 1.
*/

#include <stdio.h>

int main(){
    int i;
    for (i = 1; i < 200; i++){
        if (i % 4 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}