#include <stdio.h>

int main(){
    char nome[30], sexo;
    printf("Insira o nome: ");
    scanf("%29[^\n]", nome);
    printf("Insira o sexo (m/f): ");
    scanf(" %c", &sexo);
    if (sexo == 'm' || sexo == 'M'){
        printf("Ilmo. Sr. %s", nome);
    } else if (sexo == 'f' || sexo == 'F'){
        printf("Ilma. Sra. %s", nome);
    } else {
        printf("O sexo fornecido é inválido.");
    }
    return 0;
}
