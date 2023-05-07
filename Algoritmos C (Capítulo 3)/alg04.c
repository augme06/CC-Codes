#include <stdio.h>

int main(){
    
    // Algoritmo 4
    int tempo, velocidade, distancia, litros_usados;
    printf("Tempo: ");
    scanf("%d", &tempo);
    printf("Velocidade: ");
    scanf("%d", &velocidade);
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;
    printf("Velocidade: %dkm/h\nTempo: %dhoras\nDistância: %d\nLitros usados: %d", velocidade, tempo, distancia, litros_usados);
    return 0;

}
