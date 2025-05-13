#include <stdio.h>

int main() {
    // Carta 1
    char estado;
    char cCarta[3];
    char cidade[50];
    int populacao;
    float areaKm;
    float pib;
    int qtdPontosTuristicos;

    printf("Olá, bem vindo ao SuperTrunfo em C.\n");
    printf("Vamos inserir as informações da carta 1!\n");

    printf("Insira a primeira letra do seu estado: ");
    scanf(" %c", &estado); // espaço ignora '\n'

    printf("Insira a primeira letra do seu estado e um número de 1 a 4: ");
    scanf("%s", cCarta);

    printf("Insira o nome da sua cidade: ");
    scanf("%s", cidade);

    printf("Insira o número de habitantes da sua cidade: ");
    scanf("%d", &populacao);

    printf("Insira os km² da sua cidade: ");
    scanf("%f", &areaKm);

    printf("Insira o PIB da sua cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos da sua cidade: ");
    scanf("%d", &qtdPontosTuristicos);

    // Carta 2
    char estado2;
    char cCarta2[3];
    char cidade2[50];
    int populacao2;
    float areaKm2;
    float pib2;
    int qtdPontosTuristicos2;

    printf("\nVamos inserir as informações da carta 2!\n");

    printf("Insira a primeira letra do seu estado: ");
    scanf(" %c", &estado2);

    printf("Insira a primeira letra do seu estado e um número de 1 a 4: ");
    scanf("%s", cCarta2);

    printf("Insira o nome da sua cidade: ");
    scanf("%s", cidade2);

    printf("Insira o número de habitantes da sua cidade: ");
    scanf("%d", &populacao2);

    printf("Insira os km² da sua cidade: ");
    scanf("%f", &areaKm2);

    printf("Insira o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos da sua cidade: ");
    scanf("%d", &qtdPontosTuristicos2);

    // Exibindo as cartas
    printf("\nAs informações da carta 1 são:\n");
    printf("Estado: %c\nCódigo da carta: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           estado, cCarta, cidade, populacao, areaKm, pib, qtdPontosTuristicos);

    printf("\nAs informações da carta 2 são:\n");
    printf("Estado: %c\nCódigo da carta: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           estado2, cCarta2, cidade2, populacao2, areaKm2, pib2, qtdPontosTuristicos2);

    return 0;
}
