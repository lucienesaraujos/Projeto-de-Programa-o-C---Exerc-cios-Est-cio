# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main (){

    int opcao, numero, palpite, regras;

    printf(".....Menu principal....\n\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        srand(time(0));
        numero = rand() %10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numero == palpite) {
            printf("Você acertou!\n");
        } else {
            printf("Você errou. O Número Secreto era %d\n", numero);
        }
        break;
        
        case 2:
        printf("A explicação das regras\n");
        printf("Digite a opção relacionada as regras: ");
        scanf("%d", &regras);
        switch (regras){
        case 1:
        printf("Regra 1 - ..............\n");
        break;
        case 2:
        printf("Regra 2 - .................\n");
        case 3:
        printf("Regra 3 - ..............\n");
        break;
        case 4:
        printf("Regra 4 - .................\n");
        default:
        printf("Opção inválida\n");
        }
        break;
        
        case 3:
        printf("Saindo do jogo\n");
        break;
        
        default:
        printf("Opção inválida\n");
        break;
    }    








    return 0;
}