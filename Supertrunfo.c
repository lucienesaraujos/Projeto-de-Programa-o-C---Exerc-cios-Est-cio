#include <stdio.h>

int main () {
//1° carta cadastrada    
    int(carta01);
        char carta1[20]  = "Carta 01" ;
        char estado[20] = "São_Paulo";
        char codigo[20] = "A01";
        char cidade[20] = "São_Paulo";
        int populacao = 12325000;
        float area = 1521.11;
        float pib = 699.28;
        int turistas = 50; 
            printf("Escolha uma carta de 1 a 2: ");
            scanf("\nCarta 01%s", &carta1);
            printf("%s\n", carta1);
            printf("Estado: %s\n", &estado);
            printf("Código: %s\n", &codigo);
            printf("Cidade: %s\n", &cidade);
            printf("População: %d\n", &populacao);
            printf("Área: %f km²\n", &area);
            printf("PIB: %f bilhões\n", &pib);
            printf("Número de pontos turísticos: %d\n\n", &turistas);
//limpa teclado    
getchar();
//2° carta cadastrada
    int(carta02);
        char carta2[20]  = "Carta 02" ;
        char estado02[20] = "Rio_de_Janeiro";
        char codigo02[20] = "A02";
        char cidade02[20] = "Rio_de_Janeiro";
        int populacao02 = 6748000;
        float area02 = 1200.25;
        float pib02 = 300.50;
        int turistas02 = 30;
            printf("Escolha uma carta de 1 a 2: ");
            scanf("\nCarta 02%s", &carta2);
            printf("%s\n", carta2);
            printf("Estado: %s\n", &estado02);
            printf("Código: %s\n", &codigo02);
            printf("Cidade: %s\n", &cidade02);
            printf("População: %d\n", &populacao02);
            printf("Área: %f km²\n", &area02);
            printf("PIB: %f bilhões\n", &pib02);
            printf("Número de pontos turísticos: %d\n\n", &turistas02);



return 0;


}