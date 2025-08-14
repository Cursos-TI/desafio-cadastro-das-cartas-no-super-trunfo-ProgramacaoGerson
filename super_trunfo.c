//Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>
 
//Onde o programa começa a execução
int main() {

    //Declarando variáveis do tipo char, float e int do Cartão 1
    char estado;
    char codigo [5];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //Exibindo resultado das variáveis aplicadas do Cartão 1
    printf("Carta 1:\nEstado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf(" %s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área: km²");
    scanf(" %f", &area);

    printf("PIB: bilhões de reais");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos);

    //Declarando variáveis do tipo char, float e int do Cartão 2
    //char estado2;
    //char codigo2 [5];
    //char cidade2 [50];
    //int populacao2;
    //float area2;
    //float pib2;
    //int pontos_turisticos2;

    //Exibindo resultado das variáveis aplicadas do Cartão 2
    //printf("\nCartão 2:\nEstado: %c\n", estado2);


    //printf("Código: %s\n", codigo2);


    //printf("Nome da Cidade: %s\n", cidade2);


    //printf("População: %d\n", populacao2);


    //printf("Área: %.2f km²\n", area2);


    //printf("PIB: %.2f bilhões de reais\n", pib2);


    //printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);


    //Indicação de que o programa terminou com sucesso
    return 0;

}