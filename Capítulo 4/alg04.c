#include <stdio.h>

int main(){
    float n1, n2, n3, n4, ne, md1, md2;
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);
    printf("Insira a quarta nota: ");
    scanf("%f", &n4);
    md1 = (n1 + n2 + n3 + n4) / 4;
    if (md1 >= 7){
        printf("Aprovado\nMedia: %.2f", md1);
    } else {
        printf("Insira a nota de exame: ");
        scanf("%f", &ne);
        md2 = (md1 + ne) / 2;
        if (md2 >= 7){
            printf("Aprovado em exame\n");
        } else {
            printf("Reprovado\n");
        }
        printf("Media: %.2f", md2);
    }
    return 0;
}