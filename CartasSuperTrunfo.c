#include <stdio.h>

int main() {
    
    char estado1 = 'A';
    char codigo1[] = "A01";
    char NomedaCidade1[] = "Amazonas";
    unsigned long int populacao1 = 4281209;
    float area1 = 1559168.117;
    float PIB1 = 131.50; // em bilhões
    int NumerodePontosTuristicos1 = 500;

   
    char estado2 = 'B';
    char codigo2[] = "B02";
    char NomedaCidade2[] = "Recife";
    unsigned long int populacao2 = 1488920;
    float area2 = 218;
    float PIB2 = 60; // em bilhões
    int NumerodePontosTuristicos2 = 50;

    
    float DensidadePopulacional1 = (float)populacao1 / area1;
    float DensidadePopulacional2 = (float)populacao2 / area2;

    float PIBperCapita1 = (PIB1 * 1e9) / populacao1;
    float PIBperCapita2 = (PIB2 * 1e9) / populacao2;

    float SuperPoder1 = (float)populacao1 + area1 + PIB1 + NumerodePontosTuristicos1 + PIBperCapita1 + (1.0f / DensidadePopulacional1);
    float SuperPoder2 = (float)populacao2 + area2 + PIB2 + NumerodePontosTuristicos2 + PIBperCapita2 + (1.0f / DensidadePopulacional2);

  
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", NumerodePontosTuristicos1 > NumerodePontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", DensidadePopulacional1 > DensidadePopulacional2); // menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 < PIBperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}

