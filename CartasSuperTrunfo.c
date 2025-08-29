#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, estado2;
    char codigo1[5], codigo2[5]; // Dado que o formato do código é de uma letra + 2 dígitos, considerei 5 digitos para englobar também o '\n' 
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("__________________________________________________");

    printf("\nSuper Trunfo - Países\n\n");
    
    printf("Cadastre a primeira carta!\n\n"); 
    /*
    Recebe os inputs do usuário para a primeira carta
    
    char estado1 -> Letra de 'A' a 'H';
    char[5] codigo1 -> Código de dois dígitos entre 01 e 04;
    char[30] cidade1 -> Nome da cidade;
    int populacao1 -> Populacao da cidade;
    float area1 -> Área da cidade em km²;
    float pib1 -> PIB da cidade;
    int pontos_turisticos1 -> Quantidade de pontos turísticos na cidade. 
    */
    printf("Digite a letra que representa o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da cidade: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área(km²) da cidade: ");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    
    printf("Digite o total de pontos turísticos da cidade: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\n__________________________________________________");

    printf("\n\nCadastre a segunda carta!");
    /*
    Recebe os inputs do usuário para a segunda carta
    
    char estado2 -> Letra de 'A' a 'H';
    char[5] codigo2 -> Código de dois dígitos entre 01 e 04;
    char[30] cidade2 -> Nome da cidade;
    int populacao2 -> Populacao da cidade;
    float area2 -> Área da cidade em km²;
    float pib2 -> PIB da cidade;
    int pontos_turisticos2 -> Quantidade de pontos turísticos na cidade. 
    */

    printf("\nDigite a letra que representa o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da cidade: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área(km²) da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    
    printf("Digite o total de pontos turísticos da cidade: ");
    scanf(" %d", &pontos_turisticos2);

    printf("\n__________________________________________________\n\n");

    printf("\nCARTA 1\n\n"); // Imprime as informações da carta 1.
    
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);


    printf("\nCARTA 2\n\n"); // Imprime as informações da carta 2.

    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);


    printf("__________________________________________________");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
