#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Declaração das variaveis para carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variaveis para carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2; 

    // leitura dos dados da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Informe o Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Informe o código da carta ex: A01" );
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%f", &area1);




return 0;
} 
