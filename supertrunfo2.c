#include <stdio.h>

int main () {

//Carta 01  
    char carta1[]  = "Carta 01" ;
    char estado1[] = "São_Paulo";
    char codigo1[] = "A01";
    char cidade1[] = "São_Paulo";
    unsigned int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int turistas1 = 50; 
    float densidade1 = populacao1 / area1;
    float percapita1 = (float) (pib1*1000000000) / populacao1;
    printf("\n%s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", turistas1);
    printf("Densidade populacional: %.2f km²\n", densidade1);  
    printf("PIB per capita: %.2f reais\n\n", percapita1);      
        
            
//Carta 02
    char carta2[]  = "Carta 02" ;
    char estado2[] = "Rio_de_Janeiro";
    char codigo2[] = "A02";
    char cidade2[] = "Rio_de_Janeiro";
    unsigned int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int turistas2 = 30;
    float densidade2 = populacao2 / area2;
    float percapita2 = (float) (pib2*1000000000) / populacao2;
    printf("\n%s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistas2);
    printf("Densidade populacional: %.2f km²\n", densidade2);  
    printf("PIB per capita: %.2f reais\n\n", percapita2);      

//Comparação simples
    printf("**Comparação das Cartas**\n\n");
    printf("Qual a cidade mais populosa? Cidade 1 (%u) ou Cidade 2 (%u): %d\n", populacao1, populacao2, populacao1 > populacao2);
    printf("Qual a cidade com maior área? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", area1, area2, area1 > area2);
    printf("Qual a cidade com maior PIB? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", pib1, pib2, pib1 > pib2);
    printf("Qual a cidade mais pontos turísticos? Cidade 1 (%d) ou Cidade 2 (%d): %d\n", turistas1, turistas2, turistas1 > turistas2);
    printf("Qual a cidade com maior densidade populacional? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", densidade1, densidade2, densidade1 < densidade2);
    printf("Qual a cidade maior PIB per capita? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n\n", percapita1, percapita2, percapita1 > percapita2);
    printf("Qual a cidade mais poderosa? Cidade 1 ou Cidade 2: %d\n\n", (populacao1 + area1 + pib1 + turistas1 + percapita1 + (1/densidade1)) > (populacao2 + area2 + pib2 + turistas2 + percapita2 + (1/densidade2)));

//Comparação com if e else
    printf("**Comparação das Cartas 2**\n\n");
    
    printf("Atributo população:\n");
    printf("%s - %s: %.2u de pessoas\n", carta1, cidade1, populacao1);
    printf("%s - %s: %.2u de pessoas\n", carta2, cidade2,populacao2);
        if (populacao1 > populacao2) {
            printf("A carta 1 (São_Paulo) venceu!!!\n\n");
    }
        else { 
        printf("A carta 2 (Rio_de_Janeiro) venceu!!!\n\n");
    }

    printf("Atributo área:\n");
    printf("%s - %s: %.2f km²\n", carta1, cidade1, area1);
    printf("%s - %s: %.2f km²\n", carta2, cidade2, area2);
        if (area1 > area2) {
            printf("A carta 1 (São_Paulo) venceu!!!\n\n");
    }
        else { 
        printf("A carta 2 (Rio_de_Janeiro) venceu!!!\n\n");
    }

    printf("Atributo PIB:\n");
    printf("%s - %s: %.2f de reais\n", carta1, cidade1, pib1);
    printf("%s - %s: %.2f de reais\n", carta2, cidade2, pib2);
        if (pib1 > pib2) {
            printf("A carta 1 (São_Paulo) venceu!!!\n\n");
    }
        else { 
        printf("A carta 2 (Rio_de_Janeiro) venceu!!!\n\n");
    }

    printf("Atributo pontos turísticos:\n");
    printf("%s - %s: %d pontos\n", carta1, cidade1, turistas1);
    printf("%s - %s: %d pontos \n", carta2, cidade2, turistas2);
        if (turistas1 > turistas2) {
            printf("A carta 1 (São_Paulo) venceu!!!\n\n");
    }
        else { 
        printf("A carta 2 (Rio_de_Janeiro) venceu!!!\n\n");
    }

    printf("Atributo densidade populacional:\n");
    printf("%s - %s: %.2f de pessoas por km²\n", carta1, cidade1, densidade1);
    printf("%s - %s: %.2f de pessoas por km²\n", carta2, cidade2, densidade2);
        if (densidade1 < densidade2) {
            printf("A carta 1 (São_Paulo) venceu!!!\n\n");
    }
        else { 
        printf("A carta 2 (Rio_de_Janeiro) venceu!!!\n\n");
    }

    printf("Atributo PIB per capita:\n");
    printf("%s - %s: %.2f de reais\n", carta1, cidade1, percapita1);
    printf("%s - %s: %.2f de reais\n", carta2, cidade2, percapita2);
        if (percapita1 > percapita2) {
            printf("A carta 1 (São_Paulo) venceu!!!\n\n");
    }
        else { 
        printf("A carta 2 (Rio_de_Janeiro) venceu!!!\n\n");
    }

return 0;


}