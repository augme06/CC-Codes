/*
Elaborar um programa que apresente os valores de
conversão de graus Celsius em graus Fahrenheit, de dez
em dez graus, iniciando a contagem em dez graus Celsius e
finalizando em cem graus Celsius. O programa deve
apresentar os valores das duas temperaturas.
*/

#include <stdio.h>

int main(){
    int celsius, fahr;
    for (celsius = 10; celsius <= 100; celsius += 10){
        fahr = celsius * 1.8 + 32;
        printf("%dºC -> %dºF\n", celsius, fahr);
    }
    return 0;
}