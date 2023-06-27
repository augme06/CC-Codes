/*
Elaborar um programa que leia 20 elementos (valores reais)
para temperaturas em graus Celsius e armazene esses
valores em uma matriz A de uma dimensão. O programa ao
final deve apresentar a menor, a maior e a média das
temperaturas lidas.
*/

#include <stdio.h>
#define SIZE 20


int main(){
    int i;
    double menor, maior, A[SIZE], soma = 0;
    for (i = 0; i < SIZE; i++){
        printf("Insira a temperatura em graus Celsius: ");
        scanf("%lf", &A[i]);
        soma += A[i];
    }
    for (i = 0; i < SIZE; i++){
        if (i == 0){
            maior = A[i];
            menor = A[i];
        }
        if (A[i] > maior){
            maior = A[i];
        } else if (A[i] < menor){
            menor = A[i];
        }
    }
    printf("Maior = %.2lf graus\nMenor = %.2lf graus\nMédia = %.2lf graus", maior, menor, (soma / SIZE));
    return 0;
}