// Elaborar um programa que mostre os resultados da tabuada
// de um número qualquer, a qual deve ser apresentada de
// acordo com sua forma tradicional.

#include <stdio.h>

int main(){
    int n, mult;
    printf("Insira um numero: ");
    scanf("%d", &n);
    for (mult = 1; mult <= 10; mult++){
        printf("%d x %d = %d\n", n, mult, n*mult);
    }
    return 0;
}