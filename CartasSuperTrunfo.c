#include <stdio.h>


int main() {

       char estado1 ='A';
       char codigo1[]= "A01";
       char NomedaCidade1[]= "Amazonas";
       unsigned long int populacao1 = 4281209;
       float area1= 1559168117;
       float PIB1= 131.50;
       int NumerodePontosTuristicos1= 500;
       float DensidadePopulacional1= ((float)populacao1 / area1);
       float PIBperCapita1= (PIB1 * 1e9 /(float) populacao1);

       char estado2 ='B';
       char codigo2[]= "B02";
       char NomedaCidade2[]= "Recife";
       unsigned long int populacao2 = 1488920;
       float area2= 218;
       float PIB2= 60;
       int NumerodePontosTuristicos2= 50;
       float DensidadePopulacional2= ((float)populacao2 / area2);
       float PIBperCapita2= (PIB2 * 1e9 /(float) populacao2);



       float SuperPoder1 =(float)populacao1 + area1 + PIB1 + NumerodePontosTuristicos1 + PIBperCapita1 + (1 / DensidadePopulacional1);
       float SuperPoder2 =(float)populacao2 + area2 + PIB2 + NumerodePontosTuristicos2 + PIBperCapita2 + (1 / DensidadePopulacional2);

       
       printf("Comparação de Cartas:\n");

       if (populacao1 > populacao2) {
           printf("População: Carta 1 venceu (1)\n");
       } else {
           printf("População: Carta 2 venceu (0)\n");
       }
   
       if (area1 > area2) {
           printf("Área: Carta 1 venceu (1)\n");
       } else {
           printf("Área: Carta 2 venceu (0)\n");
       }
   
       if (PIB1 > PIB2) {
           printf("PIB: Carta 1 venceu (1)\n");
       } else {
           printf("PIB: Carta 2 venceu (0)\n");
       }
   
       if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2) {
           printf("Pontos Turísticos: Carta 1 venceu (1)\n");
       } else {
           printf("Pontos Turísticos: Carta 2 venceu (0)\n");
       }
   
       if (DensidadePopulacional1 > DensidadePopulacional2) {
           printf("Densidade Populacional: Carta 1 venceu (1)\n");
       } else {
           printf("Densidade Populacional: Carta 2 venceu (0)\n");
       }
   
       if (PIBperCapita1 < PIBperCapita2) {
           printf("PIB per Capita: Carta 1 venceu (1)\n");
       } else {
           printf("PIB per Capita: Carta 2 venceu (0)\n");
       }
   
       if (SuperPoder1 > SuperPoder2) {
           printf("Super Poder: Carta 1 venceu (1)\n");
       } else {
           printf("Super Poder: Carta 2 venceu (0)\n");
       }


      
      
    
    return 0;
}

