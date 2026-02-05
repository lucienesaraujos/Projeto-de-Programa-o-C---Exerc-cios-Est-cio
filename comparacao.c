# include <stdio.h>

int main () {

int idademinima;
    
    printf("Saiba se você já tem direito ao voto\n");
    printf("Digite a sua idade: ");
    scanf("%d", &idademinima);

    if(idademinima >=16) {
    printf("Sim, você já pode votar!\n");
    }
    
    else {
    printf("Não, você ainda não pode votar!\n");
    }

return 0;

}