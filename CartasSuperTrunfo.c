#include <stdio.h>

int main(){
    // Cadastro da Carta 1
    printf("Cadastro das cartas Super Trunfo - Tema: Países \n");
    printf("Carta 1 \n");

    int populacao_1, numero_de_pontos_turisticos_1;
    char estado_1;
    float pib_1, area_1;
    char nome_da_cidade_1[50], codigo_da_carta_1[8];

    // Leitura de dados
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_1); 

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome_da_cidade_1);

    printf("Digite o código da carta (A01 - B02): ");
    scanf("%7s", codigo_da_carta_1); 

    printf("Qual a área (em km²): ");
    scanf("%f", &area_1);

    printf("Qual a população: ");
    scanf("%d", &populacao_1);

    printf("Qual o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib_1); 

    // Exibir os dados cadastrados
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("Código da carta: %s\n", codigo_da_carta_1);
    printf("Área: %.2f km²\n", area_1);
    printf("População: %d\n", populacao_1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos_1);
    printf("PIB: %.2f\n", pib_1);

    // Cadastro da Carta 2
    printf("\nCarta 2 \n");

    int populacao_2, numero_de_pontos_turisticos_2;
    char estado_2;
    float pib_2, area_2;
    char nome_da_cidade_2[50], codigo_da_carta_2[8];

    // Leitura de dados
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_2); 

    printf("Digite o nome da cidade: ");
    scanf("%49s", nome_da_cidade_2);

    printf("Digite o código da carta (A01 - B02): ");
    scanf("%7s", codigo_da_carta_2); 

    printf("Qual a área (em km²): ");
    scanf("%f", &area_2);

    printf("Qual a população: ");
    scanf("%d", &populacao_2);

    printf("Qual o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_2);

    getchar(); // Limpa buffer antes de ler o PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib_2);

    // Exibir os dados cadastrados
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("Código da carta: %s\n", codigo_da_carta_2);
    printf("Área: %.2f km²\n", area_2);
    printf("População: %d\n", populacao_2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos_2);
    printf("PIB: %.2f\n", pib_2);

    return 0;
}
