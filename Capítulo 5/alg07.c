/*
Elaborar um programa que apresente os resultados das
potências do valor de base 3, elevado a um expoente que
varie do valor 0 até o valor 15. O programa deve apresentar
os valores 1, 3, 9. 27, ..., 14.348.907. Sugestão: leve em
consideração as definições matemáticas do cálculo de
potência, em que qualquer valor numérico diferente de zero
elevado a zero é 1, e todo valor numérico elevado a 1 é ele
próprio. Não use o operador aritmético de exponenciação
apresentado no Capítulo 3; resolva o problema com a
técnica de laço.
*/

#include <stdio.h>

int main(){
    int i, j;
    for (i = 0; i <= 15; i++){
        int n = 3;
        printf("3 ^ %d = ", i);
        if (i == 0){
            printf("%d\n", 1);
        } else if (i == 1){
            printf("%d\n", 3);
        } else {
            for (j = 2; j <= i; j++){
            n *= 3;
            }
            printf("%d\n", n);
        }
    }
    return 0;
}