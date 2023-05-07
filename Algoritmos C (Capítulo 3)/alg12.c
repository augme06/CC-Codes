#include <stdio.h>

int main(){
    
    // Algoritmo 12
    float valor_dolar, cotacao_dolar, valor_real;
    printf("Insira o valor em real: ");
    scanf("%f", &valor_real);
    printf("Insira a cotação atual do dólar: ");
    scanf("%f", &cotacao_dolar);
    valor_dolar = valor_real / cotacao_dolar;
    printf("R$%.2f = US$%.2f", valor_real, valor_dolar);
    return 0;

}
