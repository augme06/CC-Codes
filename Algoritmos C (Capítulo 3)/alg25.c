#include <stdio.h>

int main(){
    
    // Algoritmo 25
    int a, an, su;
    printf("Insira o número: ");
    scanf("%d", &a);
    an = a - 1;
    su = a + 1;
    printf("Antecessor de %d: %d\nSucessor de %d: %d", a, an, a, su);
    return 0;

}
