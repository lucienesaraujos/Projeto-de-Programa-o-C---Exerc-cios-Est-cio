# include <stdio.h>

int main () {

    char produtoA[30] = "Produto A";
    char produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;
    
    double valortotalA;
    double valortotalB;

    int resultadoA, resultadoB;    

    printf("Produto %s tem estoque %u e o valor unitário é %.2f R$\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é %.2f R$\n\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n\n", produtoB, resultadoB);

    printf("Valor total do Produto A (R$ %.2f) é maior que que o valor total do Produto B (R$ %.2f)? %d\n\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
        
    return 0;

}