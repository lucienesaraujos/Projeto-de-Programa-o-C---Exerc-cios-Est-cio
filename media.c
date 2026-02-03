#include <stdio.h>

int main (){

    float nota1, nota2, nota3;
    float media;

    printf("*** Programa para calcular média de notas ***\n");

    printf("Digite sua 1ª nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua 2ª nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua 3ª nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A média é: %.1f\n", media);




    return 0;

}