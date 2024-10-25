#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cod, populacao, Pturisticos;
    float area, pib;
    char nomeCidade[50];
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o codigo da cidade: ");
    scanf("%d", &cod);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Qual a população da cidade? ");
    scanf("%d", &populacao);

    printf("Qual o PIB? ");
    scanf("%f", &pib);

    printf("Qual a Area da Cidade? ");
    scanf("%f", &area);

    printf("Quantos pontos turisticos tem? ");
    scanf("%d", &Pturisticos);
    printf("\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Codigo da cidade: %d\n", cod);
    printf("A cidade é %s\n", nomeCidade);
    printf("A cidade tem %d Habitantes\n", populacao);
    printf("O PIB é %.2f\n", pib);
    printf("Tem a area de %.2f\n", area);
    printf("E um total de %d pontos turisticos.\n", Pturisticos);


    return 0;
}
