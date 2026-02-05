# include <stdio.h>

int main () {
{
    int numero1, numero2;

    numero1 =  10;
    numero2 = 5;

    if (numero1 > numero2) {
        printf("Número 1 é maior que número 2\n\n");
    }

    printf("Fora if\n\n\"");

}

{
    int numero = 5, resultado;

    resultado = numero % 2;
    printf("a variavél resultado é: %d\n", resultado);
}

{
    int numero = 6;    
    if(numero % 2 == 0) {
    printf("O número é par\n");
}

}

{
    int estoque = 3;

    if(estoque < 5) {
        printf("Estoque baixo\n");
    }
}











    return 0;
}