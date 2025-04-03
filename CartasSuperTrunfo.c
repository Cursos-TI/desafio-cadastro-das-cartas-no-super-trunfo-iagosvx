#include <stdio.h>


int main() {

       char estado1 ='A';
       char codigo1[]= "A01";
       char NomedaCidade1[]= "Amazonas";
       int populacao1 = 4281209;
       float area1= 1559168117;
       float PIB1= 131.50;
       int NumerodePontosTuristicos1= 500;
       float DensidadePopulacional1= (populacao1 / area1);
       float PIBperCapita1= (PIB1 / populacao1);

       char estado2 ='B';
       char codigo2[]= "B02";
       char NomedaCidade2[]= "Recife";
       int populacao2 = 1488920;
       float area2= 218;
       float PIB2= 60;
       int NumerodePontosTuristicos2= 50;
       float DensidadePopulacional2= (populacao2 / area2);
       float PIBperCapita2= (PIB2 / populacao2);

      
       int divisao1 = populacao1 / area1;
       int divisao2 = PIB1 / populacao1;
       int divisao3 = populacao2 / area2;
       int divisao4 = PIB2 / populacao2;
  
    
       printf("Carta1:\n");
       printf("estado: %c\n", estado1);
       printf("codigo: %s\n", codigo1);
       printf("NomedaCidade: %s\n", NomedaCidade1);
       printf("populacao: %d\n", populacao1);
       printf("area: %.2f km²\n", area1);
       printf("PIB: %.2f bilhões de reias\n", PIB1);
       printf("NumerodePontosTuristicos: %d\n", NumerodePontosTuristicos1);
       printf("densidade populacional1: %.2f hab/km²\n", DensidadePopulacional1);
       printf("PIB per capita1: %.2f reais\n", PIBperCapita1);
    
       printf("Carta2:\n");
       printf("estado: %c\n", estado2);
       printf("codigo: %s\n", codigo2);
       printf("NomedaCidade: %s\n", NomedaCidade2);
       printf("populacao: %d\n", populacao2);
       printf("area: %.2f km²\n", area2);
       printf("PIB: %.2f bilhões de reias\n", PIB2);
       printf("NumerodePontosTuristicos: %d\n", NumerodePontosTuristicos2);
       printf("densidade populacional2: %.2f hab/km²\n", DensidadePopulacional2);
       printf("PIB per capita2: %.2f reais\n", PIBperCapita2);
    
    return 0;
}



