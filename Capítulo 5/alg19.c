/*
Elaborar um programa que apresente o resultado inteiro da
divisão de dois números quaisquer, representando o
dividendo e o divisor da divisão a ser processada. Sugestão:
para a elaboração do programa, não utilize o operador
aritmético de divisão com quociente inteiro div. Use uma
solução baseada em laço. O programa deve apresentar
como resultado (quociente) quantas vezes o divisor cabe no
dividendo.
*/

#include <stdio.h>

int main(){
    
    int i, dividendo, divisor, quoc = 0;

    printf("Insira o dividendo:" );
    scanf("%d", &dividendo);
    printf("Insira o divisor: ");
    scanf("%d", &divisor);

    for (i = divisor; i <= dividendo; i += divisor){
        quoc++;
    }

    printf("Quociente: %d", quoc);
    return 0;

}