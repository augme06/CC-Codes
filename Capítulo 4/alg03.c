#include <stdio.h>

int main(){
    float n1, n2, n3, n4, med;
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);
    printf("Insira a quarta nota: ");
    scanf("%f", &n4);
    med = (n1 + n2 + n3 + n4) / 4;
    if (med >= 5){
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    printf("Media: %.2f", med);
    return 0;
}