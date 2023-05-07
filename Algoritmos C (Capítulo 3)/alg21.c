#include <stdio.h>

int main(){
    
    // Algoritmo 21
    float raio, volume;
    printf("Insira o raio: ");
    scanf("%f", &raio);
    volume = (4/3) * 3.14159 * (raio*raio*raio);
    printf("O volume é de %.2f metros cúbicos", volume);
    return 0;

}
