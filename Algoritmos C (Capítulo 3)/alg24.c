#include <stdio.h>
#include <math.h>

int main(){
    
    // Algoritmo 24
    int num, ind;
    float result;
    printf("Insira o número: ");
    scanf("%d", &num);
    printf("Insira o índice: ");
    scanf("%d", &ind);
    result = pow(num, (1.0/ind));
    printf("Resultado: %.2f", result);
    return 0;

}
