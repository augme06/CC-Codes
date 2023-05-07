#include <stdio.h>

int main(){
    
    // Algoritmo 10
    int a, b, c;
    printf("Insira os valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    c = (a - b)*(a - b);
    printf("Quadrado da diferença de A e B: %d", c);
    return 0;

}
