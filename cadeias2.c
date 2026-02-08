# include <stdio.h>
int main () {
int idades, dependentes;
    float rendas;

    printf("Digite a sua idade: ");
    scanf("%d", &idades);

    printf("Digite sua renda: ");
    scanf("%f", &rendas);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idades >= 18 && idades <= 65) {
        if (rendas < 3000.0) {
            if (dependentes > 2) {
                printf("Você está qualificado para os benefícios sociais\n");
            } else {
                printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
            }
        } else {
            printf("Você não está qualificado para os benefícios devido à renda\n");
        }
    } else {
        printf("Você não está qualificado para os benefícios devido à idade\n");
    }

return 0;    
}

