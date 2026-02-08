# include <stdio.h>

int main (){
int numero;

printf("Digite um número: ");
scanf("%d", &numero);

if (numero > 0) {
    if (numero % 2 == 0) {
        printf("Este número é par\n");
    } else {
        printf("Este número é ímpar\n");
    }
    printf("Este número é positivo\n");
} else if (numero == 0) {
    printf("Este número é zero\n");
}else {
    printf("Este número é negativo\n");
}









    return 0;
}