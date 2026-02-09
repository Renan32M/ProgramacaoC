#include <stdio.h>

int main(){

    //Declaração das variáveis para armazenar os dados das cartas

    char estado;        // Armazena a letra do estado (ex: A, B, C)
    char codigo[20];    // Armazena o código da carta (ex: A01)
    char cidade[50];    // Armazena o nome da cidade       
    int populacao;      // Número de habitantes
    float area;         // Área em km²
    float pib;          // Produto Interno Bruto
    int p_turistico;    // Quantidade de pontos turísticos

    // ================== CADASTRO DA CARTA 1 ==================

    printf("Cadastro da Carta 1:\n");
    printf("Estado:\n");
    scanf(" %c", &estado);
    // O espaço antes de %c serve para ignorar o 'enter' de comandos anteriores
    printf("Código:\n");
    scanf(" %s", &codigo); // Para strings, o & é opcional, mas manter funciona

    printf("Cidade:\n");
    scanf(" %s", &cidade);

    printf("População:\n");
    scanf(" %d", &populacao);

    printf("Area:\n");
    scanf(" %f", &area);

    printf("PIB:\n");
    scanf(" %f", &pib);

    printf("Pontos Turisticos:\n");
    scanf(" %d", &p_turistico);
    printf("\n");
    printf("\n");
    printf("\n");
    // --- Exibição dos Dados da Carta 1 ---
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f\n", area);// %.2f limita as casas decimais
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", p_turistico);
    printf("\n");
    printf("\n");

    // ================== CADASTRO DA CARTA 2 ==================
    // (As variáveis são sobrescritas para economizar memória ou reutilizar lógica)

    printf("Cadastro da Carta 2:\n");
    
    printf("Estado:\n");
    scanf(" %c", &estado);

    printf("Código:\n");
    scanf(" %s", &codigo);

    printf("Cidade:\n");
    scanf(" %s", &cidade);

    printf("População:\n");
    scanf(" %d", &populacao);

    printf("Area:\n");
    scanf(" %f", &area);

    printf("PIB:\n");
    scanf(" %f", &pib);

    printf("Pontos Turisticos:\n");
    scanf(" %d", &p_turistico);
    printf("\n");
    printf("\n");
    printf("\n");
   // --- Exibição dos Dados da Carta 2 ---
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", p_turistico);












return 0;



}