#include <stdio.h>

int main(){
    
    // Algoritmo 7
    int a, b, c, d, s1, s2, s3, s4, s5, s6, m1, m2, m3, m4, m5, m6;
    printf("Insira os valores de A, B, C e D (com um espaço entre cada): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s1 = a + b;
    s2 = a + c;
    s3 = a + d;
    s4 = b + c;
    s5 = b + d;
    s6 = c + d;
    m1 = a * b;
    m2 = a * c;
    m3 = a * d;
    m4 = b * c;
    m5 = b * d;
    m6 = c * d;
    printf("A + B = %d\nA + C = %d\nA + D = %d\nB + C = %d\nB + D = %d\nC + D = %d\nA * B = %d\nA * C = %d\nA * D = %d\nB * C = %d\nB * D = %d\nC * D = %d", s1, s2, s3, s4, s5, s6, m1, m2, m3, m4, m5, m6);
    return 0;

}
