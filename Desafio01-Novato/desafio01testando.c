#include <stdio.h>
//Desafio Novato Super Trunfo C

int main() {
    // VARIÁVEIS DADOS CARTA 1
    char estado1; // %c
    char carta1[4] = ""; // %3s
    char cidade1[50] = ""; //%s
    int populacao1 = 0; // %d
    float area1 = 0.0f; // %f
    float pib1 = 0.0f; // %f
    int turismo1 = 0; //%d

    // VARIÁVEIS DADOS CARTA 2
    char estado2; // %c
    char carta2[4] = ""; // %3s
    char cidade2[50] = ""; //%s
    int populacao2 = 0; // %d
    float area2 = 0.0f; // %f
    float pib2 = 0.0f; // %f
    int turismo2 = 0; // %d

    //LENDO DADOS CARTA 1
    // Estado
    printf("Insira uma letra de 'A' a 'H' para representar um dos oito estados: \n");
    scanf("%c", &estado1);
    // Código da Carta
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", carta1);
    // Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade1);
    //População
    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    //Area
    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &area1);
    // pib
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);
    //pontos turisticos
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo1);

    //LENDO DADOS DA CARTA 2
    // Estado
    printf("Insira uma letra de 'A' a 'H' para representar um dos oito estados: \n");
    scanf(" %c", &estado2);
    // Código da Carta
    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%3s", carta2);
    // Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade2);
    //População
    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    //Area
    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &area2);
    // pib
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    //pontos turisticos
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turismo2);


    // EXIBINDO CARTA 1
   printf("Carta 1 \n");
   printf("Estado: %c \n", estado1);
   printf("Código: %s \n", carta1);
   printf("Nome da Cidade: %s \n", cidade1);
   printf("População: %d \n", populacao1);
   printf("Área: %f km² \n", area1);
   printf("PIB: %f bilhões de reais \n", pib1);
   printf("Número de pontos turísticos: %d \n", turismo1);
   printf("\n");

   // EXIBINDO CARTA 2
   printf("Carta 2 \n");
   printf("Estado: %c \n", estado2);
   printf("Código: %s \n", carta2);
   printf("Nome da Cidade: %s \n", cidade2);
   printf("População: %d \n", populacao2);
   printf("Área: %f km² \n", area2);
   printf("PIB: %f bilhões de reais \n", pib2);
   printf("Número de pontos turísticos: %d \n", turismo2);

    return 0;
}