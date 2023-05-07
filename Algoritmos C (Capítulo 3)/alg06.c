#include <stdio.h>

int main(){
    
    // Algoritmo 6
    int a, b, c;
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    c = a + b;
    a = c - a;
    b = c - b;
    printf("A vale %d e B vale %d", a, b);
    return 0;

}
