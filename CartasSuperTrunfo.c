#include <stdio.h>
#include <stdlib.h>

int main() {
    char EstadoC1, EstadoC2;
    char CodigoC1[4], CodigoC2[4];
    char NomeC1[20], NomeC2[20];
    unsigned long int PopulacaoC1, PopulacaoC2;
    float AreaC1, AreaC2;
    float PIBC1, PIBC2;
    int PontosTuristicosC1, PontosTuristicosC2;
    float DensindadePopC1, DensindadePopC2, PIBPerCapitaC1, PIBPerCapitaC2;
    float SuperPoderC1, SuperPoderC2;
    int resultComparacao = 2; // Variável para armazenar o resultado da comparação

    // Leitura dos dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &EstadoC1);
    printf("Codigo: ");
    scanf(" %s", CodigoC1);
    printf("Nome: ");
    scanf(" %s", NomeC1); 
    printf("Populacao: ");
    scanf(" %d", &PopulacaoC1);
    printf("Area: ");
    scanf(" %f", &AreaC1);
    printf("PIB: ");
    scanf(" %f", &PIBC1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &PontosTuristicosC1);

    // Leitura dos dados da carta 2
    printf("\nInsira os dados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &EstadoC2);
    printf("Codigo: ");
    scanf(" %s", CodigoC2);
    printf("Nome: ");
    scanf(" %s", NomeC2);
    printf("Populacao: ");
    scanf(" %d", &PopulacaoC2);
    printf("Area: ");
    scanf(" %f", &AreaC2);
    printf("PIB: ");
    scanf(" %f", &PIBC2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &PontosTuristicosC2);

    //Calculo da densidade populacional, PIB per capita e Super Poder
    DensindadePopC1 = (float) PopulacaoC1 / AreaC1;
    DensindadePopC2 = (float) PopulacaoC2 / AreaC2;
    PIBPerCapitaC1 = (PIBC1*1000000000) / PopulacaoC1;
    PIBPerCapitaC2 = (PIBC2*1000000000) / PopulacaoC2;
    SuperPoderC1 = (float) PopulacaoC1+ AreaC1 + PIBC1 + (float) PontosTuristicosC1 + PIBPerCapitaC1 - DensindadePopC1;
    SuperPoderC2 = (float) PopulacaoC2 + AreaC2 + PIBC2 + (float) PontosTuristicosC2 + PIBPerCapitaC2 - DensindadePopC2;

    // Exibindo os dados da carta 1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Codigo: %s\n", CodigoC1);
    printf("Nome: %s\n", NomeC1);
    printf("Populacao: %d\n", PopulacaoC1);
    printf("Área: %.2f km²\n", AreaC1);
    printf("PIB: %.2f bilhoes de reais\n", PIBC1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensindadePopC1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapitaC1);
    printf("Super Poder: %.2f\n", SuperPoderC1);

    // Exibindo os dados da carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", EstadoC2);
    printf("Codigo: %s\n", CodigoC2);
    printf("Nome: %s\n", NomeC2);
    printf("Populacao: %d\n", PopulacaoC2);
    printf("Area: %.2f km²\n", AreaC2);
    printf("PIB: %.2f bilhoes de reais\n", PIBC2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensindadePopC2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapitaC2);
    printf("Super Poder: %.2f\n", SuperPoderC2);

    // Comparando as cartas
    printf("\nComparando as cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", 2 - (PopulacaoC1 > PopulacaoC2), PopulacaoC1 > PopulacaoC2);
    printf("Area: Carta %d venceu (%d)\n", 2 - (AreaC1 > AreaC2), AreaC1 > AreaC2);
    printf("PIB: Carta %d venceu (%d)\n", 2 - (PIBC1 > PIBC2), PIBC1 > PIBC2);
    printf("Numero de Pontos Turisticos: Carta %d venceu (%d)\n", 2 - (PontosTuristicosC1 > PontosTuristicosC2), PontosTuristicosC1 > PontosTuristicosC2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (DensindadePopC1 < DensindadePopC2), DensindadePopC1 < DensindadePopC2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (PIBPerCapitaC1 > PIBPerCapitaC2), PIBPerCapitaC1 > PIBPerCapitaC2);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - (SuperPoderC1 > SuperPoderC2), SuperPoderC1 > SuperPoderC2);
    
    return 0;
}