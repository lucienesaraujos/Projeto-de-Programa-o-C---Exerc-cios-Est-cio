//verificar: temperatura, humidade, estoque

# include <stdio.h>

int main (){
    printf("Verificação de bem-estar do ambiente de trabalho\n");
{
    //tempetura
    int temperatura;
    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);
    if (temperatura <=23) {
    printf("A temperatura está segura para o ambiente de trabalho\n");
    }
    else {
    printf("A temperatura não é adequada para o ambiente de trabalho\n");
        }
}

{
    //umidade
    int umidade;
    printf("Digite a umidade: ");
    scanf("%d", &umidade);
    if (umidade >= 50) {
    printf("A humidade está segura para o ambiente de trabalho\n");
    }
    else {
    printf("A humidade não é adequada para o ambiente de trabalho\n");
    }
}

{
    //estoque
    int estoque;
    printf("Digite a quantidade de EPI no estoque: ");
    scanf("%d", &estoque);
    if (estoque >= 100) {
    printf("O estoque de EPI está ideal para a manutenção do ambiente de trabalho\n");
    }
    else {
    printf("O estoque de EPI não está ideal para a manutenção adequado do ambiente de trabalho\n");
    }
}
    return 0;
}