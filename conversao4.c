#include <stdio.h>

int main () {

    int a = 10;
    int b = 3;
    float soma = (float) a+b;
    float diferenca = (float) a-b;
    float produto = (float) a*b;
    float quociente = (float) a/b;

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    return 0;

}