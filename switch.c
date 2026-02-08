#include <stdio.h>
int main (){

int variavel;

printf("Digite um valor: ");
scanf("%d", &variavel);

switch (variavel) 
{
case 1:
    printf("Código a ser executado se variável == 1\n");
    break;
case 2:
    printf("Código a ser executado se a variável == 2\n");
    break;
default:
    printf("Código a ser executado se a variável for diferente de 1 ou 2\n");
}



    return 0;

}