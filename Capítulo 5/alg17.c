/*
Escrever um programa que possibilite calcular a área total
em metros de uma residência com os cômodos sala,
cozinha, banheiro, dois quartos, área de serviço, quintal,
garagem, entre outros que podem ser fornecidos ao
programa. O programa deve solicitar a entrada do nome, da
largura e do comprimento de um determinado cômodo. Em
seguida, deve apresentar a área do cômodo lido e também
uma mensagem solicitando ao usuário a confirmação de
continuar calculando novos cômodos. Caso o usuário
responda “NÃO”, o programa deve apresentar o valor total
acumulado da área residencial.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    char resposta, comodo[20];
    int larg, comp, soma = 0;

    while (resposta != 'n'){

        printf("Insira o nome do comodo: ");
        gets(comodo);

        printf("Insira o comprimento do(a) %s: ", comodo);
        scanf("%d", &comp);

        printf("Insira a largura do(a) %s: ", comodo);
        scanf("%d", &larg);

        soma += larg * comp;
        printf("%s tem área de %d metros quadrados. Continuar? (s/n) -> ", comodo, larg * comp);

        scanf(" %c", &resposta);
        getchar();
        resposta = tolower(resposta);

    }

    printf("Área acumulada da residência: %d metros quadrados", soma); 
    return 0;
    
}