#include <stdio.h>

int main(){

    int a, b, c, d, e, maior, menor;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);  

    if (a > b){
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    if (c < menor){
        menor = c;
    } else if (c > maior){
        maior = c;
    }

    if (d < menor){
        menor = d;
    } else if (d > maior){
        maior = d;
    }

    if (e < menor) {
        menor = e;
    } else if (e > maior) {
        maior = e;
    }
    
    printf("Menor: %d\nMaior: %d", menor, maior);

}