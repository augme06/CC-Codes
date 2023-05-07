#include <stdio.h>

int main(){
    
    // Algoritmo 8
    int comprimento, largura, altura, volume;
    printf("Insira o comprimento: ");
    scanf("%d", &comprimento);
    printf("Insira a largura: ");
    scanf("%d", &largura);
    printf("Insira a altura: ");
    scanf("%d", &altura);
    volume = comprimento * largura * altura;
    printf("Volume: %d metros cúbicos", volume);
    return 0;

}
