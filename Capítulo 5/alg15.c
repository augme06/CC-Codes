/*
Construir um programa que apresente como resultado a
fatorial dos valores ímpares situados na faixa numérica de 1
até 10.
*/
#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i <= 10; i++){
        if (i % 2 != 0){
            int mult = 1;
            for (j = i; j > 1; j--){
                mult *= j;
            }
            printf("%d! = %d\n", i, mult);
        }
    }
    return 0;
}