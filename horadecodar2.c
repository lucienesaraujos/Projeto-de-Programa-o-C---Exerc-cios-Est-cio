# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main (){

int jogador, computador, resultado;
char comparacao;

srand (time(0));
computador = rand () % 100 + 1;

printf("Bem-vindo ao jogo Maior, Menor ou Igual\n\nVocê deve escolher um tipo de Comparação e um Número\nA. Maior\nB. Menor\nC. Igual\n\nEscolha a comparação: ");
scanf("%c", &comparacao);

printf("Escolha um Número entre 1 a 100: ");
scanf("%d", &jogador);

printf("O Número do computador é: %d\n", computador);

switch (comparacao) {
case 'a':
case 'A':
printf("Você escolheu comparar se o Número escolhido é maior\n");
resultado = jogador > computador ? 1 : 0;

break;

case 'b':
case 'B':
printf("Você escolheu comparar se o Número escolhido é menor\n");
resultado = jogador < computador ? 1 : 0;

break;

case 'c':
case 'C':
printf("Você escolheu comparar se o Número escolhido é igual\n");
resultado = jogador == computador ? 1 : 0;

break;

default:
printf("Opção inválida\n");
break;
}

printf("Número jogador: %d. Número computador: %d\n\n", jogador, computador);

if (resultado == 1) {
    printf("PARABÉNS, você ganhou!!!\n");
} else {
    printf("Você perdeu!\n");
}


    return 0;
}