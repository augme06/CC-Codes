#include <stdio.h>

int main(){
    
    // Algoritmo 19
    float a, b, di;
    int add, mult, sub;
    printf("Insira os valores de A e B separados por espaço: ");
    scanf("%f %f", &a, &b);
    add = a + b;
    mult = a * b;
    sub = a - b;
    di = a / b;
    printf("A + B = %d\nA - B = %d\nA x B = %d\nA / B = %f", add, sub, mult, di);
    return 0;

}
