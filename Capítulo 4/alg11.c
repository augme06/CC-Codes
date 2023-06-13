#include <stdio.h>

int main(){
    int a;
    printf("Insira um numero: ");
    scanf("%d", &a);
    if (a >= 1 && a <= 9){
        printf("O valor esta na faixa permitida.");
    } else {
        printf("O valor esta fora da faixa permitida.");
    }
    return 0;
}