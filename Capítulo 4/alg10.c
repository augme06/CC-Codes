#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("%d e par", a);
    } else {
        printf("%d e impar", a);
    }
    return 0;
}