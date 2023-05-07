#include <stdio.h>

int main(){
    
    // Algoritmo 15
    int a, b, c, d, p, s;
    printf("Insira os valores de A, B, C e D: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    p = a*c;
    s = b+d;
    printf("A * C = %d\nB + D = %d", p, s);
    return 0;

}
