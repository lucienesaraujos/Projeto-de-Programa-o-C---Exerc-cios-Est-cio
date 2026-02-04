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

//Comparações
printf("**Comparação das Cartas**\n\n");
printf("Qual a cidade mais populosa? Cidade 1 (%u) ou Cidade 2 (%u): %d\n", populacao1, populacao2, populacao1 > populacao2);
printf("Qual a cidade com maior área? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", area1, area2, area1 > area2);
printf("Qual a cidade com maior PIB? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", pib1, pib2, pib1 > pib2);
printf("Qual a cidade mais pontos turísticos? Cidade 1 (%d) ou Cidade 2 (%d): %d\n", turistas1, turistas2, turistas1 > turistas2);
printf("Qual a cidade com maior densidade populacional? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", densidade1, densidade2, (1/densidade1) > (1/densidade2));
printf("Qual a cidade maior PIB per capita? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n\n", percapita1, percapita2, percapita1 > percapita2);

printf("Qual a cidade mais poderosa? Cidade 1 ou Cidade 2: %d\n\n", (populacao1 + area1 + pib1 + turistas1 + percapita1 + (1/densidade1)) > (populacao2 + area2 + pib2 + turistas2 + percapita2 + (1/densidade2)));



return 0;


}