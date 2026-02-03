#include <stdio.h>

int main () {

//Carta 01  
    char carta1[]  = "Carta 01" ;
    char estado1[] = "São_Paulo";
    char codigo1[] = "A01";
    char cidade1[] = "São_Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int turistas1 = 50; 
    float densidade1 = populacao1 / area1;
    float percapita1 = (float) (pib1*1000000000) / populacao1;
    printf("\n%s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
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
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int turistas2 = 30;
    float densidade2 = populacao2 / area2;
    float percapita2 = (float) (pib2*1000000000) / populacao2;
    printf("\n%s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistas2);
    printf("Densidade populacional: %.2f km²\n", densidade2);  
    printf("PIB per capita: %.2f reais\n\n", percapita2);      

return 0;


}