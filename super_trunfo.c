//Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>
 
//Onde o programa começa a execução
int main() {

    //Declarando variáveis do tipo char, float e int do Cartão 1
    char estado1;
    char codigo1 [5];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //Inserindo as informações refente a Carta 1
    printf("Carta 1:\nEstado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    //Declarando variáveis do tipo char, float e int do Cartão 2
    char estado2;
    char codigo2 [5];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Inserindo as informações refente a Carta 2
    printf("\nCarta 2:\nEstado ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    //Imprimindo as informações referente a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //Imprimindo as informações referente a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    //Indicação de que o programa terminou com sucesso
    return 0;

}