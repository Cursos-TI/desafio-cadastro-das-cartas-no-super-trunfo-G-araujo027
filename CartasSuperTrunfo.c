#include <stdio.h>

int main (){
    char estado1, estado2;
    char cd_carta1 [99], cd_carta2 [99], cidade1 [99], cidade2 [99];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    printf("===Bem ao Super Triunfo===\n");
    
    /* Entrada de dados da Carta 1*/
    printf("Cadastro carta 1:\n"); 

    printf("Estado (inicial): ");
    scanf(" %c", &estado1); 

    printf("Qual o Codigo? ");
    scanf("%s", cd_carta1); 

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Qual a Populacao: ");
    scanf("%d", &populacao1);

    printf("Qual a Area dessa cidade? ");
    scanf("%f", &area1);

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos? ");
    scanf("%d", &pontos_turisticos1);

    /* Entrada de dados da Carta 2*/
    printf("Cadastro carta 2:\n");

    printf("Estado (inicial): ");
    scanf(" %c", &estado2);

    printf("Qual o Codigo? ");
    scanf("%s", cd_carta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Qual a Populacao: ");
    scanf("%d", &populacao2);

    printf("Qual a Area dessa cidade? ");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade? ");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos? ");
    scanf("%d", &pontos_turisticos2);

    // Saida de dados carta 1
    printf("==================================\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, cd_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("==================================\n");

    // Saida de dados carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, cd_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("==================================");
    return 0;
    }