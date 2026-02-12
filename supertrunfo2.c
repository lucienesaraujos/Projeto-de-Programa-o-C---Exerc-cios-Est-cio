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
    
    printf("\nEscolha o 1º atributo para compararação\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
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
    printf("Escolha o 2º atributo para compararação\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
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
    
    case 3:
    printf("Escolha o 3º atributo para compararação\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
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


    case 4:
    printf("Escolha o 4º atributo para compararação\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
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

    case 5:
    printf("Escolha o 5º atributo para compararação\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
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

    case 6: 
    printf("Escolha o 2º atributo para compararação\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB percapita\nDigite sua escolha: ");
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

    
    case 7:
    printf("\n1. Você deve escolher uma carta;\n2. Você deve escolher quantos atributos quer comparar;\n3. Escolha os atributos para a comparação;\n4. Ao final a soma dos atributos dirá qual a carta vencedora.\n");
    break;

    case 8:
    printf("Saindo...\n");
    break;

    default:
    printf("Opção inválida\n");
    }

    return 0;
}