#include <stdio.h>

int main() {
    // ======= Carta 1 =======
    char estado1[20], codigo1[10], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, densidade_pop1;
    float pib1, pib_per_capita1;

    // ======= Carta 2 =======
    char estado2[20], codigo2[10], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, densidade_pop2;
    float pib2, pib_per_capita2;

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // ===== Comparação =====
    // Atributo escolhido para comparação é 1 POPULAÇÃO (1=População, 2=Área, 3=PIB, 4=Densidade, 5=PIB per capita)
    int atributo = 1;

    printf("\n=== Comparacao de cartas ===\n");

    if (atributo == 1) {
        printf("Atributo: Populacao\n");
        printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 2) {
        printf("Atributo: Area\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", nome2, estado2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 3) {
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 4) {
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome1, estado1, densidade_pop1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome2, estado2, densidade_pop2);
        if (densidade_pop1 < densidade_pop2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (densidade_pop2 < densidade_pop1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 5) {
        printf("Atributo: PIB per capita\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib_per_capita2 > pib_per_capita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    return 0;
}
