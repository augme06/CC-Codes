#include <stdio.h>

int main(){
    
    //Algoritmo 20
    float tempo, distancia, velocidade;
    printf("Insira a distância: ");
    scanf("%f", &distancia);
    printf("Insira o tempo : ");
    scanf("%f", &tempo);
    velocidade = (distancia * 1000) / (tempo * 60);
    printf("A velocidade média foi de %.0f m/s", velocidade);
    return 0;

}
