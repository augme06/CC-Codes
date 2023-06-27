/*
Elaborar um programa que leia quinze valores numéricos
inteiros e no final apresente o somatório da fatorial de cada
valor lido.
*/

#include <stdio.h>

int main(){
    int i, j, k, soma = 0, num[15];
    for (i = 0; i < 15; i++){
        int mult = 1;
        scanf("%d", &num[i]);
        for (j = num[i]; j > 1; j--){
            mult *= j;
        }
        soma += mult;
    }
    for (k = 0; k < 15; k++){
        printf("%d! ", num[k]);
        if (k < 14){
            printf("+ ");
        } else {
            printf("= %d", soma);
        }
    }
    return 0;
}