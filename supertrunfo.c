#include <stdio.h>


typedef struct {
    char estado;                 // Letra de 'A' a 'H'
    char codigo[4];              // Ex: A01, B03
    char nomeCidade[50];         // Nome da cidade
    int populacao;               // População da cidade
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões de reais
    int pontosTuristicos;        // Número de pontos turísticos
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro de Cartas Super Trunfo ===\n\n");

    
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    getchar(); 
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);

    // Remover o \n do final do fgets
    int i = 0;
    while (carta1.nomeCidade[i] != '\0') {
        if (carta1.nomeCidade[i] == '\n') {
            carta1.nomeCidade[i] = '\0';
            break;
        }
        i++;
    }

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

  
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    getchar(); 
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);


    i = 0;
    while (carta2.nomeCidade[i] != '\0') {
        if (carta2.nomeCidade[i] == '\n') {
            carta2.nomeCidade[i] = '\0';
            break;
        }
        i++;
    }

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
