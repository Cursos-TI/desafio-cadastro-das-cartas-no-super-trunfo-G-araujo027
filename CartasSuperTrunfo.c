#include <stdio.h>

int main (){
    // Cadastros de variavel com somente uma caractere
    char estado1, estado2;
    // Cadastro de variaveis do tipo Strings
    char cd_carta1 [99], cd_carta2 [99], cidade1 [99], cidade2 [99];
    // cadastro variaveis inteiras
    int pontos_turisticos1, pontos_turisticos2, populacao, area, pib, pontos_turisticos, pib_per_capital, super_poder;
    // cadastro variaveis interias para grandes números
    unsigned long int populacao1, populacao2;
    // cadastro variaveis com . flutuante
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capital1, pib_per_capital2, inverso_desnsidade1, inverso_densidade2, super_poder1, super_poder2;

    printf("===Bem-vindo ao Super Trunfo - Países===\n");
    
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

    printf("==================================\n");

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

    /Calculos/

    // calculo de densidade
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // calculo inverso de densidade 
    inverso_desnsidade1 = (float) area1 / populacao1;
    inverso_densidade2 = (float) area2 / populacao2;

    // calculo PIB per capital
    pib_per_capital1 = (float) (pib1 * 1000000000)/ populacao1;
    pib_per_capital2 = (float) (pib2 * 1000000000)/ populacao2;

    // calculo do Super poder
    super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capital1 + inverso_desnsidade1;
    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capital2 + inverso_densidade2;

    // comparação
    populacao = populacao1 > populacao2;
    area = area1 > area2;
    pib = pib1 > pib2;
    pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    densidade = densidade1 < densidade2;
    pib_per_capital = pib_per_capital1 > pib_per_capital2;
    super_poder = super_poder1 > super_poder2;


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
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capital: %.2f reais\n", pib_per_capital1);
    printf("Super Poder: %.2f", super_poder1);
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
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capital: %.2f reais\n", pib_per_capital2);
    printf("Super Poder: %.2f", super_poder1);
    printf("==================================");

    // Comparação de cartas
    printf("Comparação das cartas");
    printf("(1) carta 1 (0) carta 2");
    printf("População: (%d)", populacao);
    printf("Área: (%d)", area);
    printf("PIB: (%d)", pib);
    printf("Pontos Turisticos: (%d)", pontos_turisticos);
    printf("Densidade Populacional: (%d)", Densidade);
    printf("PIB per Capital: (%d)", pib_per_capital);
    printf("Super Poder: (%d)", super_poder);
    printf("==================================");

    return 0;
}