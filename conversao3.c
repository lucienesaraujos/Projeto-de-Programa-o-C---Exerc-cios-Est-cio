#include <stdio.h>

int main () {

    int a = 10;
    float b = 3.5;
    float soma = a +b;
    float diferenca = a - b;
    float produto = a * b;
    float quociente = a / b;

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    return 0;

}

