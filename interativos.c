# include <stdio.h>

int main (){

    int opcao;

    printf(".....Menu principal....\n\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &opcao);

    switch (opcao) {
        
        case 1:
        printf("Iniciando jogo\n");
        break;
        
        case 2:
        printf("As regras são: .....\n");
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