//Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>
 
//Onde o programa começa a execução
int main() {

    //Declarando variáveis do tipo char, float e int do Cartão 1
    char estado1;
    char codigo1 [5];
    char cidade1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pibpercapita1;
    float inverso_densidade1;
    float super_poder1;

    //Inserindo as informações refente a Carta 1
    printf("Carta 1:\nEstado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("População: ");
    scanf(" %lu", &populacao1);

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
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pibpercapita2;
    float inverso_densidade2;
    float super_poder2;

    //Inserindo as informações refente a Carta 2
    printf("\nCarta 2:\nEstado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    //Declarando a variável baseado na divisão indicada pelo desafio
    densidade_populacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    //Imprimindo as informações referente a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    //Declarando a variável baseado na divisão indicada pelo desafio
    densidade_populacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    //Imprimindo as informações referente a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    //Declarando variável do tipo float para o inverso da densidade
    inverso_densidade1 = 1 / densidade_populacional1;
    inverso_densidade2 = 1 / densidade_populacional2;

    //Declarando variável do tipo float para o super poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapita1 + inverso_densidade1;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + inverso_densidade2;

    //Imprimindo o resultado das comparações entre atributos da Carta 1 e 2
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos %d\n", pontos_turisticos1>pontos_turisticos2);
    printf("Densidade Populacional %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per capita %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    //Indicação de que o programa terminou com sucesso
    return 0;

}