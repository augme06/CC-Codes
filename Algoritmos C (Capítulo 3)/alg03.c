#include <stdio.h>

int main(){
    
    // Algoritmo 3
    int r, altura;
    float volume;
    printf("Insira o raio: ");
    scanf("%d", &r);
    printf("Insira a altura: ");
    scanf("%d", &altura);
    volume = 3.14159 * (r * r) * altura;
    printf("Volume: %f metros cúbicos", volume);
    return 0;

}
