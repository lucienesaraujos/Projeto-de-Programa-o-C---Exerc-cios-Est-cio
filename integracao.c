#include <stdio.h>

int main (){
int opcao;
float nota1, nota2, nota3, media;

printf("Menu de Gerenciamento de Estudantes\n\n1. Calcular a média\n2.Determinar status\n3. Sair\n\nDigite a opção desejada: ");
scanf("%d", &opcao);

switch (opcao) {
case 1:
printf("\nCalcular a média\n");
printf("Digite a nota 1: ");
scanf("%f", &nota1);
printf("Digite a nota 2: ");
scanf("%f", &nota2);    
printf("Digite a nota 3: ");
scanf("%f", &nota3);
if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)) {
    printf("Entrada correta\n");
    media = (nota1 + nota2 + nota3) /3;
    printf("A média de suas notas é: %.1f\n", media);
}else{
    printf("Entrada incorreta, digite novamente\n");
}
break;

case 2:
printf("\nVerificar status\n");
printf("Digite sua média: ");
scanf("%f", &media);
//media >= 6 ? printf("Aprovado\n") : printf("Reprovado");
if (media >= 7){
    printf("Aprovado");
} else if (media >= 5) {
    printf("Recuperação"); 
} else {
    printf ("Reprovado");
}
break;

case 3:
printf("\nSaindo do sistema\n");
break;

default:
printf("Opção inválida");
}

    return 0;
}