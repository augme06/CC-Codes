#include <stdio.h>

int main(){
    int a;
    printf("Insira um valor inteiro: ");
    scanf("%d", &a);
    if (a < 0){
        printf("%d", a * (-1));
    } else {
        printf("%d", a);
    }
    return 0;
}