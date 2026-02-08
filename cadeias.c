# include <stdio.h>
int main () {

{ int idade;

printf("Digite a sua idade:\n");
scanf("%d", &idade);

if (idade < 12) {
    printf("Você é criança\n");
} else if (idade >= 12 && idade <= 17) {
    printf("Você é adolescente\n");
} else if (idade >= 18 && idade <= 60) {
    printf("Você é adulto\n");
} else {
    printf("Você é idoso\n");
}
}

{ int nota;

printf("Digite a sua nota: \n");
scanf("%d", &nota);

if (nota <= 100 && nota >= 90) {
    printf("Conceito é A\n");
} else if (nota <= 89 && nota >=80) {
    printf("Conceito é B\n");
} else if (nota <= 79 && nota >=70) {
    printf("Conceito é C\n");
} else if (nota <= 69 && nota >=60) {
    printf("Conceito é D\n");
} else if (nota <= 59 && nota >=50) {
    printf("Conceito é E\n");
} else {
    printf("Conceito é F\n");
}
}

{ int idade;
int renda;

printf("Digite a sua idade: ");
scanf("%d", &idade);
printf("Digite a sua renda mensal: ");
scanf("%d", &renda);

if (idade <=18 || idade >= 60) 
    {
        if (renda < 2000) {
        printf("Você tem direito ao desconto especial \n");
    
        } else {
        printf("Você não está qualificado para o desconto devido a renda.\n");
        }    
     } else {    
        printf("Não aceito no critério de idade\n");
        }
}

{
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

    
}
return 0;
}