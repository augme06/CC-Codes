// Construir um programa que apresente a soma dos cem
// primeiros números naturais (1 + 2 + 3 +...+ 98 + 99 + 100).

#include <stdio.h>

int main(){
    int i, n = 0;
    for (i = 1; i <= 100; i++){
        n += i;
    }
    printf("A soma entre todos os números naturais entre 1 e 100 é igual a %d", n);
    return 0;
}