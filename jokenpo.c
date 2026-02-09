# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main () {

int jogador, adversario;
srand(time(0));

printf("* * * JoKenPô * * *\n\nEscolha uma opção\n\n1. Pedra\n2. Papel\n3. Tesoura\n\nDigite a sua escolha: ");
scanf("%d", &jogador);

adversario = rand() % 3 + 1;

switch (jogador) {
case 1:
printf("\nJogador: Pedra\n");    
break;
case 2:
printf("\nJogador: Papel\n");    
break;
case 3:
printf("\nJogador: Tesoura\n");    
break;
default:
printf("\nOpção inválida\n");
break;
}

switch (adversario) {
case 1:
printf("Adversário: Pedra\n\n");    
break;
case 2:
printf("Adversário: Papel\n\n");    
break;
case 3:
printf("Adversário: Tesoura\n\n");    
break;
}

if (jogador == adversario) {
    printf("#### Empate ####\n");
} 
else if ((jogador == 1) && (adversario == 3) || (jogador == 2) && (adversario == 1) ||(jogador == 3) && (adversario == 2)) {
    printf("#### Parabéns! Você ganhou! ####\n");
 
} else {
    printf("#### Você perdeu! ####\n");
}

return 0;

}