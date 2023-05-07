#include <stdio.h>

int main(){
    
    // Algoritmo 13
    int a, b, c, result;
    printf("Insira os valores de A, B e C (separados por espaço): ");
    scanf("%d %d %d", &a, &b, &c);
    result = (a * a) + (b * b) + (c * c);
    printf("Resultado: %d", result);
    return 0;

}
