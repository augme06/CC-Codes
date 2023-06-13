#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c >= 100){
        printf("%d", a + b + c);
    }
    return 0;
}