#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[100];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    getchar();

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua matrícula: ");
    scanf("%i", &matricula);
    
    printf("\nNome do aluno: %s", nome);
    printf("Matricula: %i\n" , matricula);
    printf("Idade: %d\nAltura: %.2f\n", idade, altura);
    
    return 0;




}