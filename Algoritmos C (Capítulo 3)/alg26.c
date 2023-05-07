#include <stdio.h>

int main(){
    
    // Algoritmo 26
    int a, b;
    float c;
    printf("Insira os valores de A e B (separados por espaço): ");
    scanf("%d %d", &a, &b);
    c = pow((a*1.0/b),2);
    printf("(A/B)^2 = %f", c);
    return 0;

}
