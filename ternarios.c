# include <stdio.h>

int main (){

    /*int idade = 16;
    int resultado;

   //idade >= 18 ? printf("Você é maior de idade\n") : printf("Você é menor de idade\n"); 
    
    resultado = idade >= 18 ? 1 : 0;
    if (resultado == 1){
    printf("Você é maior de idade\n");
    } else {
        printf("você é menor de idade\n");
    }*/

    /*int temperatura = 10;
    int resultado;

    //temperatura > 30 ? printf("Está calor\n") : printf ("Está frio");
    
    resultado = temperatura > 28 ? 1 : 0;
    if (resultado == 1){
    printf("Está calor\n");
    } else {
        printf("Está frio\n");
    }*/

    int numero1 = 10, numero2 = 60;
    int maior;

   // numero1 > numero2 ? printf("Número 1 é maior que número 2\n") : printf("Número 2 é maior que número 1");
    
   /*if (maior = numero1 > numero2) {
    printf("N1 > N2\n");
   } else {
    printf ("N2 > N1\n");
   }*/

   numero1 > numero2 ? (maior = numero1) : (maior = numero2);
   printf("O número maior é: %d\n", maior);

    return 0;
}