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

    //Lendo e exibindo resultado das variáveis aplicadas ao Cartão 1, através de printf e scanf
    printf("Carta 1:\nEstado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf(" %s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos);

    //Declarando variáveis do tipo char, float e int do Cartão 2
    char estado2;
    char codigo2 [5];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Lendo e exibindo resultado das variáveis aplicadas ao Cartão 2, através de printf e scanf
    printf("\nCartão 2:\nEstado ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    //Indicação de que o programa terminou com sucesso
    return 0;

}