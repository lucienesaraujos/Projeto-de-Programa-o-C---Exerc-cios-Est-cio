# include <stdio.h>

int main () {

int a = 10, b = -5, c = 0;

//&& lógica de ambos verdadeiros (e)
{
if(a > 0 && b >0 ){
    printf("Os dois números são positvos\n");

}
    else{
        printf("Um dos números é negativo\n");
    }
}

// || lógica de um verdadeiro (ou)
{
if(a > 0 || b > 0){
    printf("Pelo menos 1 dos números são positvos\n");

}
    else{
        printf("Os dois números são negativos\n");
    }
}

// ! lógica de inversão (não)
{

if(!c){
    printf("A variável C é zero\n");

}
    else{
        printf("A variável C é diferente de zero\n");
    }

if (!(a > 0)) {
    printf("A variável é negativa\n");

}
    else {
        printf("A variável é positiva\n");
    }
}















    return 0;
}