/*
 Elaborar um programa que efetue a leitura de dez nomes de
pessoas em uma matriz A do tipo vetor e apresentá-los em
seguida.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char nomes[10][20];
    for (i = 0; i < 10; i++){
        fgets(nomes[i], 20, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;
    }
    printf("Nomes registrados: ");
    for (i = 0; i < 10; i++){
        printf("%s", nomes[i]);
        if (i < 9){
            printf(", ");
        }
    }
    return 0;
}