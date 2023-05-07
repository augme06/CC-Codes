// Algoritmos Capítulos 3
#include <stdio.h>

int main(){

    // Algoritmo 1
    int c;
    float f;
    printf("Insira a temperatura em graus Celsius:");
    scanf("%d", &c);
    f = c * 9/5 + 32;
    printf("A temperatura convertida em Fahrenheit: %.0f", f);
    return 0;

}