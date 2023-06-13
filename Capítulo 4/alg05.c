#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, delta;
    printf("Insira o valor de A: ");
    scanf("%lf", &a);
    printf("Insira o valor de B: ");
    scanf("%lf", &b);
    printf("Insira o valor de C: ");
    scanf("%lf", &c);
    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0){
        printf("Nao ha solucao real.");
    } else if (delta == 0){
        printf("x1 = %.2lf", (-b + sqrt(delta)) / (2 * a));
    } else {
        printf("x1 = %.2lf\nx2 = %.2lf", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
    return 0;
}