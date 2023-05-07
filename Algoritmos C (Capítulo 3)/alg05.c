#include <stdio.h>

int main(){
    
    // Algoritmo 5
    int tempo;
    float prestacao, taxa, valor;
    printf("Insira o valor: ");
    scanf("%f", &valor);
    printf("Insira a taxa (em porcento): ");
    scanf("%f", &taxa);
    printf("Insira o tempo(meses): ");
    scanf("%d", &tempo);
    prestacao = valor + (valor * (taxa/100) * tempo);
    printf("A prestação será de: R$%.2f", prestacao);
    return 0;
    
}
