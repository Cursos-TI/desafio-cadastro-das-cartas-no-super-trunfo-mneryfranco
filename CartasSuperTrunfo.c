#include <stdio.h>
#include <stdlib.h>

int main() {
    char StateC1, StateC2;
    char CodeC1[4], CodeC2[4];
    char NameC1[20], NameC2[20];
    int PopulationC1, PopulationC2;
    float AreaC1, AreaC2;
    float GdpC1, GdpC2;
    int TouristAttC1, TouristAttC2;
    float PopDensityC1, PopDensityC2, GdpPerCapitaC1, GdpPerCapitaC2;

    // Leitura dos dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &StateC1);
    printf("Codigo: ");
    scanf(" %s", CodeC1);
    printf("Nome: ");
    scanf(" %s", NameC1); 
    printf("Populacao: ");
    scanf(" %d", &PopulationC1);
    printf("Area: ");
    scanf(" %f", &AreaC1);
    printf("PIB: ");
    scanf(" %f", &GdpC1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &TouristAttC1);

    // Leitura dos dados da carta 2
    printf("\nInsira os dados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &StateC2);
    printf("Codigo: ");
    scanf(" %s", CodeC2);
    printf("Nome: ");
    scanf(" %s", NameC2);
    printf("Populacao: ");
    scanf(" %d", &PopulationC2);
    printf("Area: ");
    scanf(" %f", &AreaC2);
    printf("PIB: ");
    scanf(" %f", &GdpC2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &TouristAttC2);

    //Calculo da densidade populacional e PIB per capita
    PopDensityC1 = (float) PopulationC1 / AreaC1;
    PopDensityC2 = (float) PopulationC2 / AreaC2;
    GdpPerCapitaC1 = (GdpC1*1000000000) / PopulationC1;
    GdpPerCapitaC2 = (GdpC2*1000000000) / PopulationC2;

    // Exibindo os dados da carta 1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", StateC1);
    printf("Codigo: %s\n", CodeC1);
    printf("Nome: %s\n", NameC1);
    printf("Populacao: %d\n", PopulationC1);
    printf("Área: %.2f km²\n", AreaC1);
    printf("PIB: %.2f bilhoes de reais\n", GdpC1);
    printf("Numero de Pontos Turisticos: %d\n", TouristAttC1);
    printf("Densidade Populacional: %.2f hab/km²\n", PopDensityC1);
    printf("PIB per Capita: %.2f reais\n", GdpPerCapitaC1);

    // Exibindo os dados da carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", StateC2);
    printf("Codigo: %s\n", CodeC2);
    printf("Nome: %s\n", NameC2);
    printf("Populacao: %d\n", PopulationC2);
    printf("Area: %.2f km²\n", AreaC2);
    printf("PIB: %.2f bilhoes de reais\n", GdpC2);
    printf("Numero de Pontos Turisticos: %d\n", TouristAttC2);
    printf("Densidade Populacional: %.2f hab/km²\n", PopDensityC2);
    printf("PIB per Capita: %.2f reais\n", GdpPerCapitaC2);
    
    return 0;
}