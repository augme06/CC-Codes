#include <stdio.h>

int main(){
    
    // Algoritmo 14
    int a, b, c, result;
    printf("Insira os valores de A, B e C (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);
    result = (a + b + c)*(a + b + c);
    printf("Resultado: %d", result);
    return 0;

}
