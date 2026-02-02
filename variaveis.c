#include <stdio.h>

int main () {
    int idade;
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("A sua idade é: %d\n", idade);

    int quantidade;
        printf("Qual seu número da sorte: ");
        scanf("%d", &quantidade);
        printf("Seu número da sorte é: %d\n", quantidade);

    float altura;
        printf("Qual a sua altura: ");
        scanf("%f", &altura);
        printf("Sua altura é: %.2f\n", altura);

    double salario;
        printf("Qual seu salário atual: ");
        scanf("%lf", &salario);
        printf("Sua renda mensal é: %.2f\n", salario);

    char letra;
        printf("Qual a primeira letra do seu nome: ");
        scanf(" %c", &letra);
        printf("Aprimeira letra do seu nome é: %c\n", letra);

    char nome[20];
        printf("Qual o seu apelido: ");
        scanf("%s", nome);
        printf("Seu apelido é: %s\n", nome);

return 0;
}