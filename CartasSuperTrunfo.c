#include <stdio.h>

int main()
{

    // variáveis cartas 1 e 2

    char estado1[20];
    char estado2[20];
    char codigo1[20];
    char codigo2[20];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_tur1;
    int pontos_tur2;

    // cadastro de dados cartas 1 e 2

    printf("Digite o estado da carta 1: ");
    scanf("%s", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", &codigo1);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", &cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_tur1);
    printf("Digite o estado da carta 2: ");
    scanf("%s", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", &codigo2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", &cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_tur2);

    // exibição de dados cartas 1 e 2

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_tur1);
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_tur2);

    return 0;

}