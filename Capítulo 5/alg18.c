/*
Elaborar um programa que leia valores positivos inteiros até
que um valor negativo seja informado. Ao final devem ser
apresentados o maior e o menor valores informados pelo
usuário.
*/

#include <stdio.h>

int main(){

    int n, maior, menor, cont = 1;

    while (n >= 0){

        printf("Insira um numero: ");
        scanf("%d", &n);

        if (cont == 1){
            maior = n;
            menor = n;
            cont++;
        }
        
        if (n >= maior){
            maior = n;
        } else if (n <= menor && n >= 0){
            menor = n;
        }

    }

    printf("Maior número: %d\nMenor número: %d", maior, menor);
    return 0;

}