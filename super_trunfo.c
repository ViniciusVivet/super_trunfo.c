#include <stdio.h>

struct Carta {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Calcula densidade demográfica
float calcular_densidade(int pop, float area) {
    return pop / area;
}

int main() {
    // Cartas fixas
    struct Carta carta1 = {"Brasil", 213000000, 8515767.0, 1600000000000.0, 80};
    struct Carta carta2 = {"Argentina", 45376763, 2780400.0, 490000000000.0, 50};

    float densidade1 = calcular_densidade(carta1.populacao, carta1.area);
    float densidade2 = calcular_densidade(carta2.populacao, carta2.area);

    int opcao;

    printf("=== SUPER TRUNFO: COMPARAÇÃO ENTRE CARTAS ===\n\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s vs %s:\n", carta1.nome, carta2.nome);

    switch (opcao) {
        case 1:
            printf("População: %d x %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Venceu: %s\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("Venceu: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f km² x %.2f km²\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("Venceu: %s\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("Venceu: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: R$ %.2f x R$ %.2f\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Venceu: %s\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("Venceu: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Venceu: %s\n", carta1.nome);
            else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
                printf("Venceu: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f hab/km² x %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Venceu: %s (menor densidade)\n", carta1.nome);
            else if (densidade1 > densidade2)
                printf("Venceu: %s (menor densidade)\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
