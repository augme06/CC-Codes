#include <stdio.h>

int main(){
    int a, b;
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    if (a >= b){
        printf("%d - %d = %d", a, b, a - b);
    }
    else {
        printf("%d - %d = %d", b, a, b - a);
    }
    return 0;
}