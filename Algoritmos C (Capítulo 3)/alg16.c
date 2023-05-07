#include <stdio.h>

int main(){
    
    // Algoritmo 16
    float pr, sm, ns;
    printf("Insira o salário: ");
    scanf("%f",&sm);
    printf("Insira a taxa de promoção: ");
    scanf("%f",&pr);
    ns = sm + (sm * (pr/100));
    printf("O novo salário é: R$%.2f", ns);
    return 0;

}
