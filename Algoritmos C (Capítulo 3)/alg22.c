#include <stdio.h>
#include <math.h>

int main(){
    
    // Algoritmo 22
    int a, b, c;
    printf("Insira os valores de A e B (separados por espaço): ");
    scanf("%d %d", &a, &b);
    c = pow(a, b);
    printf("A^B = %d", c);
    return 0;

}
