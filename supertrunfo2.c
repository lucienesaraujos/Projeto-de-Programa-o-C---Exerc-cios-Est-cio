# include <stdio.h>
# include <stdlib.h>

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
/*
    printf("\n%s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", turistas1);
    printf("Densidade populacional: %.2f km²\n", densidade1);  
    printf("PIB per capita: %.2f reais\n\n", percapita1);  */    
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
/*
    printf("\n%s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistas2);
    printf("Densidade populacional: %.2f km²\n", densidade2);  
    printf("PIB per capita: %.2f reais\n\n", percapita2);   */   
//Comparação simples
/*
    {    printf("**Comparação das Cartas**\n\n");
    printf("Qual a cidade mais populosa? Cidade 1 (%u) ou Cidade 2 (%u): %d\n", populacao1, populacao2, populacao1 > populacao2);
    printf("Qual a cidade com maior área? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", area1, area2, area1 > area2);
    printf("Qual a cidade com maior PIB? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", pib1, pib2, pib1 > pib2);
    printf("Qual a cidade mais pontos turísticos? Cidade 1 (%d) ou Cidade 2 (%d): %d\n", turistas1, turistas2, turistas1 > turistas2);
    printf("Qual a cidade com maior densidade populacional? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n", densidade1, densidade2, densidade1 < densidade2);
    printf("Qual a cidade maior PIB per capita? Cidade 1 (%.2f) ou Cidade 2 (%.2f): %d\n\n", percapita1, percapita2, percapita1 > percapita2);
    printf("Qual a cidade mais poderosa? Cidade 1 ou Cidade 2: %d\n\n", (populacao1 + area1 + pib1 + turistas1 + percapita1 + (1/densidade1)) > (populacao2 + area2 + pib2 + turistas2 + percapita2 + (1/densidade2)));
}*/
//Comparação com if-else
/*
    {    printf("**Comparação das Cartas 2**\n\n");
    
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
}*/
//Comparação com switch e if-else
/*
    printf("SUPER TURNFO\n\nEscolha qual caracterista você quer comparar\n\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n\nDigite a sua escolha: ");
scanf("%d", &jogador);


switch (jogador) {

case 1:
printf("\nAtributo População\n");
if (populacao1 > populacao2){
    printf("A %s, %s com %u de pessoas é a vencedora\n\n", carta1, cidade1, populacao1);
} else if (populacao2 > populacao1) {
    printf("A %s, %s com %u de pessoas é a vencedora\n\n", carta2, cidade2, populacao2);
} else {
    printf ("As cidades empataram\n\n");
}
break;

case 2:
printf("\nAtributo Área\n");
if (area1 > area2){
    printf("A %s, %s com %.2fkm² é a vencedora\n\n", carta1, cidade1, area1);
} else if (area2 > area1) {
    printf("A %s, %s com %.2fkm² é a vencedora\n\n", carta2, cidade2, area2);
} else {
    printf ("As cidades empataram\n\n");
}
break;

case 3:
printf("\nAtributo PIB\n");
if (pib1 > pib2){
    printf("A %s, %s com %.2f bilhões de reais é a vencedora\n\n", carta1, cidade1, pib1);
} else if (pib2 > pib1) {
    printf("A %s, %s com %.2f bilhões de reais é a vencedora\n\n", carta2, cidade2, pib2);
} else {
    printf ("As cidades empataram\n\n");
}
break;

case 4:
printf("\nAtributo Pontos turísticos\n");
if (turistas1 > turistas2){
    printf("A %s, %s com %d pontos turísticos é a vencedora\n\n", carta1, cidade1, turistas1);
} else if (turistas2 > turistas1) {
    printf("A %s, %s com %d pontos turísticos é a vencedora\n\n", carta2, cidade2, turistas2);
} else {
    printf ("As cidades empataram\n\n");
}
break;

case 5:
printf("\nAtributo Densidade demográfica\n");
if (densidade1 < densidade2){
    printf("A %s, %s com %.2f de pessoas/km² é a vencedora\n\n", carta1, cidade1, densidade1);
} else if (densidade2 < densidade1) {
    printf("A %s, %s com %.2f de pessoas/km² é a vencedora\n\n", carta2, cidade2, densidade2);
} else {
    printf ("As cidades empataram\n\n");
}
break;

default:
printf("\nOpção inválida\n");
} */

    int jogador, adversario, menu1, menu2, menu3, menu4, menu5, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6 ;

    printf("*.*.* SUPER TRUNFO *.*.*\n\nBem-vindo ao jogo!\n\n_ M E N U _\n\n1. Jogar\n2. Regras\n3.Sair\n\nDigite sua escolha: "); 
    scanf("%d", &menu1);

    switch (menu1) {
    case 1: 
    printf("\nEscolha uma carta (1 a 2): ");
    scanf("%d", &menu1);
    if (menu1 == 1 ){
    printf("A cidade escolhida foi %s. Sua carta adversária será %s.\n", cidade1, cidade2);
    } else if (menu1 == 2) {
    printf("A cidade escolhida foi %s. Sua carta adversária será %s.\n", cidade2, cidade1);
    } else {
    printf("Opção inválida\n");
    }
    
    printf("\nEscolha qual atributo deseja comparar\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
    scanf("%d", &menu2);

    resultado1 = populacao1 > populacao2 ? 1 : 0;
    resultado2 = area1 > area2 ? 1 : 0;
    resultado3 = pib1 > pib2 ? 1 : 0;
    resultado4 = turistas1 > turistas2 ? 1 : 0;
    resultado5 = densidade1 < densidade2 ? 1 : 0;
    resultado6 = percapita1 > percapita2 ? 1 : 0;

    if (menu2 == 1 ){
    printf("\nVocê escolheu comparar 1 atributo: População\n");
    if (resultado1 = 1) {
        printf("\nA cidade %s, Venceu!\n\n", cidade1);
    } else if (resultado1 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu2 == 2 ){
    printf("\nVocê escolheu comparar atributo: Área\n");
    if (resultado2 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado2 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu2 == 3 ){
    printf("\nVocê escolheu comparar atributo: PIB\n");
    if (resultado3 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado3 = 0) {
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu2 == 4 ){
    printf("\nVocê escolheu comparar atributos: Pontos turísticos\n");
    if (resultado4 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado4 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu2 == 5 ){
    printf("\nVocê escolheu comparar atributo: Densidade populacional\n");
    if (resultado5 = 0) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado5 = 1){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu2 == 6 ){
    printf("\nVocê escolheu comparar atibuto: Per capita\n");
    if (resultado6 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado6 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else {
    printf("Opção inválida\n\n");
    }
    
    case 2:
    printf("Escolha qual atributo deseja comparar\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
    scanf("%d", &menu3);
    if (menu3 == 1 ) {
    printf("\nVocê escolheu comparar 1 atributo: População\n");
    if (resultado1 = 1) {
        printf("\nA cidade %s, Venceu!\n\n", cidade1);
    } else if (resultado1 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu3 == 2 ){
    printf("\nVocê escolheu comparar atributo: Área\n");
    if (resultado2 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado2 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu3 == 3 ){
    printf("\nVocê escolheu comparar atributo: PIB\n");
    if (resultado3 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado3 = 0) {
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu3 == 4 ){
    printf("\nVocê escolheu comparar atributos: Pontos turísticos\n");
    if (resultado4 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado4 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu3 == 5 ){
    printf("\nVocê escolheu comparar atributo: Densidade populacional\n");
    if (resultado5 = 0) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado5 = 1){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else if (menu3 == 6 ){
    printf("\nVocê escolheu comparar atibuto: Per capita\n");
    if (resultado6 = 1) {
        printf("\nA cidade %s Venceu!\n\n", cidade1);
    } else if (resultado6 = 0){
        printf("\nA cidade %s , Venceu\n\n", cidade2);
    } else{
        printf("\nAs cidades empataram!");
    }
    } else {
    printf("Opção inválida\n\n");
    }
    
    break;

    
    case 3:
    printf("\n1. Você deve escolher uma carta;\n2. Você deve escolher quantos atributos quer comparar;\n3. Escolha os atributos para a comparação;\n4. Ao final a soma dos atributos dirá qual a carta vencedora.\n");
    break;

    case 4:
    printf("Saindo...\n");
    break;

    default:
    printf("Opção inválida\n");
    }

    return 0;
}