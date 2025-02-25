#include <stdio.h>

int main(){
    // cadrastro d carta 1
    printf("Cadastro das cartas Super Trunfo - Tema: Países \n");
    printf("Carta 1 \n");
    
    int populacao; // o número de habitantes da cidade
    int pontos_turisticos;
    char estado; // uma letra de 'A' - 'H' 
    float pib; // produto bruto interno da cidade
    char nome_da_cidade_1[50]; // nome da cidade 
    char codigo_da_carta[8]; // código da carta
    float area;
    // Leitura de dados
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado); 

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade_1);

    printf("Digite o codigo da carta (A01 - B02):\n");
    scanf("%s", codigo_da_carta); 

    printf("Qual a área (em km²):\n");
    scanf("%f", &area);

    printf("Qual a população:\n");
    scanf("%d", &populacao);

    printf("Qual o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib); 

    printf("Estado: %c\n", estado);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Área: %.2f km²\n", area);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("PIB: %f\n", pib);

    // cadrastro d carta 2
    printf("\nCarta 2 \n");

    int populacao_2; // o número de habitantes da cidade
    int pontos_turisticos_2;
    char estado_2; // uma letra de 'A' - 'H' 
    float pib_2; // produto bruto interno da cidade
    char nome_da_cidade_2[50]; // nome da cidade 
    char codigo_da_carta_2[8]; // código da carta
    float area_2;

    // Leitura de dados
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado_2); 

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade_2);

    printf("Digite o codigo da carta (A01 - B02):\n");
    scanf("%s", codigo_da_carta_2); 

    printf("Qual a área (em km²):\n");
    scanf("%f", &area_2);

   printf("Qual a população:\n");
   scanf("%d", &populacao_2);

   printf("Qual o número de pontos turísticos:\n");
   scanf("%d", pontos_turisticos_2);

   printf("\nDigite o PIB:\n");
   scanf("%f", &pib_2);

   printf("\nDados da Carta Cadastrada:\n");
   printf("Estado: %c\n", estado_2);
   printf("Nome da cidade: %s\n", nome_da_cidade_2);
   printf("Código da carta: %s\n", codigo_da_carta_2);
   printf("Área: %f km²\n", area_2);
   printf("População: %d\n", populacao_2);
   printf("Pontos turísticos: %d\n", pontos_turisticos_2);
   printf("PIB: %f\n", pib_2);

    return 0;
}