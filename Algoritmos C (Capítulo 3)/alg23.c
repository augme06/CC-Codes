#include <stdio.h>

int main(){
    
    // Algoritmo 23
    int p;
    float conv;
    printf("Insira o valor em pés: ");
    scanf("%d", &p);
    conv = 0.3048 * p;
    printf("%d pés equivalem a %.2f metros", p, conv);
    return 0;

}
