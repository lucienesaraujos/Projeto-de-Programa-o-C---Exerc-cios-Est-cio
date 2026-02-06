# include <stdio.h>

int main (){

    int numero1, numero2;

    numero1 = 20;
    numero2 = 10;

    if (numero1 > numero2) {
        printf("%d é maior que %d\n\n", numero1, numero2);
    }
    else {
        printf("%d é menor que %d\n\n", numero1, numero2);
    }


{
    int numero = 7;

    if (numero % 2 == 0) {
        printf("%d é par\n\n", numero);
    }
    else{
        printf("%d é ímpar\n\n", numero);
    }
}

{
    float temperatura = 20.0;

    if (temperatura >= 30.0) {
        printf("Está calor\n\n");
    }
    else {
        printf("Está frio\n\n");
    }
}

{
int nota = 60;

    if (nota >=60) {
        printf("Parabéns! Você foi aprovado!\n\n");
    }
    else {
        printf("Você foi reprovado\n\n");
    }
}

{
    int idade = 17;

    if (idade >= 18) {
        printf("Você é maior de idade\n\n");
    }
    else {
        printf("Você é menor de idade(aproveite!)\n\n");
    }
}
    return 0;
}