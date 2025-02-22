#include <stdio.h>

// Função para cadastrar uma carta
void cadastrar_carta(int numero) {
    int populacao, numero_de_pontos_turisticos;
    char estado;
    float pib, area;
    char nome_da_cidade[50];
    char codigo_da_carta[8];
    
    printf("\nCadastro da Carta %d\n", numero);
    
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %49s", nome_da_cidade);
    
    printf("Digite o codigo da carta (A01 - B02):\n");
    scanf(" %7s", codigo_da_carta);
    
    printf("Qual a área (em km²):\n");
    scanf("%f", &area);
    
    printf("Qual a população:\n");
    scanf("%d", &populacao);
    
    printf("Qual o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    
    printf("\nDados da Carta Cadastrada:\n");
    printf("Estado: %c\n", estado);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Área: %.2f km²\n", area);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("PIB: %f\n", pib);
}

int main() {
    printf("Cadastro das cartas Super Trunfo - Tema: Países\n");
    
    cadastrar_carta(1);
    cadastrar_carta(2);
    
    return 0;
}
