#include <stdio.h>

int main(){
    
    // Algoritmo 2
    int c, f;
    printf("Insira a temperatura em graus Fahrenheit:");
    scanf("%d", &f);
    c = ((f-32)*5)/9;
    printf("A temperatura convertida em Celsius: %d", c);
    return 0;

}
