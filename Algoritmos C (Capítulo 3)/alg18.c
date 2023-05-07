#include <stdio.h>

int main(){
    
    // Algoritmo 18
    int a, b, c, nulo, branco, total;
    float perc_val, perc_a, perc_b, perc_c, perc_nulo, perc_branco;
    printf("Insira a quantidade de votos para o candidato A: ");
    scanf("%d", &a);
    printf("Insira a quantidade de votos para o candidato B: ");
    scanf("%d", &b);
    printf("Insira a quantidade de votos para o candidato C: ");
    scanf("%d", &c);
    printf("Insira a quantidade de votos nulos: ");
    scanf("%d", &nulo);
    printf("Insira a quantidade de votos brancos: ");
    scanf("%d", &branco);
    total = a + b + c + nulo + branco;
    perc_val = ((a + b + c)*100.0/total);
    perc_a = (a*100.0/total);
    perc_b = (b*100.0/total);
    perc_c = (c*100.0/total);
    perc_nulo = (nulo*100.0/total);
    perc_branco = (branco*100.0/total);
    printf("Total de votos: %d\nPercentual de votos válidos em relação ao total: %.1f\nPercentual de votos ao candidato A: %.1f\nPercentual de votos ao candidato B: %.1f\nPercentual de votos ao candidato C: %.1f\nPercentual de votos nulos: %.1f\nPercentual de votos em branco: %.1f", total, perc_val, perc_a, perc_b, perc_c, perc_nulo, perc_branco);
    return 0;

}
