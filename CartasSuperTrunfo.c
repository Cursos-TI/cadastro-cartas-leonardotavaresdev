#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema Avançado - Batalha de Cartas com Super Poder

int main() {
    // Declaração das variáveis da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;  // Agora com unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;
    float superPoder1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;
    float superPoder2;

    // Cadastro da carta 1
    printf("Cadastro da carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula dados derivados da carta 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapta1 = pib1 / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1 + (1.0f / densidadePopulacional1);

    // Cadastro da carta 2
    printf("\nCadastro da carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula dados derivados da carta 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapta2 = pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2 + (1.0f / densidadePopulacional2);

    // ============================
    // EXIBIÇÃO DAS CARTAS
    // ============================
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f bilhões de reais\n", pibPerCapta1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f bilhões de reais\n", pibPerCapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ============================
    // COMPARAÇÃO DAS CARTAS
    // ============================
    printf("\n========================\n");
    printf("Comparação de Cartas:\n");
    printf("========================\n");

    printf("População: Carta %d venceu (%d)\n", 
        (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n", 
        (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n", 
        (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        (pibPerCapta1 > pibPerCapta2) ? 1 : 2, (pibPerCapta1 > pibPerCapta2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n", 
        (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}
