#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePop;
    float pibPerCapita;
    float superPoder;
} Carta;

int main() {
    Carta c1, c2;

    
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", c1.estado);
    printf("Codigo: ");
    scanf(" %[^\n]", c1.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", c1.nome);
    printf("Populacao: ");
    scanf("%lu", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

   
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", c2.estado);
    printf("Codigo: ");
    scanf(" %[^\n]", c2.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", c2.nome);
    printf("Populacao: ");
    scanf("%lu", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    
    c1.densidadePop = (float)c1.populacao / c1.area;
    c2.densidadePop = (float)c2.populacao / c2.area;

    c1.pibPerCapita = c1.pib / (float)c1.populacao;
    c2.pibPerCapita = c2.pib / (float)c2.populacao;

   
    c1.superPoder = (float)c1.populacao + c1.area + c1.pib +
                    c1.pontosTuristicos + c1.pibPerCapita +
                    (1.0f / c1.densidadePop);

    c2.superPoder = (float)c2.populacao + c2.area + c2.pib +
                    c2.pontosTuristicos + c2.pibPerCapita +
                    (1.0f / c2.densidadePop);

   
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontosTuristicos > c2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidadePop < c2.densidadePop);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pibPerCapita > c2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.superPoder > c2.superPoder);

    return 0;
}
