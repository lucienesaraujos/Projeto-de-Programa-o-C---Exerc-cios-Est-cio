# include <stdio.h>

int main () {

    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção: \n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("Seu saldo é %.2f", saldo);
        break;

        case 2:
        printf("Digite o banco desejado\nDigite a agência\nDigite a conta\n");
        break;

        case 3:
        printf("Digite o valor a sacar\n");
        break;

        default:
        printf("Opção inválida");
    } 




    return 0;
}