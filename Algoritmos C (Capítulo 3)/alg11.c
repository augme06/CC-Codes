#include <stdio.h>

int main(){
    
    // Algoritmo 11
    float valor_dolar, cotacao_dolar, valor_real;
    printf("Insira o valor em dólar: ");
    scanf("%f", &valor_dolar);
    printf("Insira a cotação atual do dólar: ");
    scanf("%f", &cotacao_dolar);
    valor_real = valor_dolar * cotacao_dolar;
    printf("US$%.2f = R$%.2f", valor_dolar, valor_real);
    return 0;

}
