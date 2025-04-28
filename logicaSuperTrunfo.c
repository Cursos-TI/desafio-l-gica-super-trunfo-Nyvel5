#include <stdio.h>

int main()
{
    // Controle switch principal
    int option;

    // Controle switch comparação
    int option2;

    // Dados das cartas
    char country1[20], country2[20];
    int population1, population2, tourism1, tourism2;
    float area1, area2, PIB1, PIB2, density1, density2;

    // Verifica se as cartas foram criadas
    int cartas = 0;

    do {
        // MENU INTERATIVO
        printf("\n== + ==\n");
        printf("1 - Criar cartas.\n");
        printf("2 - Comparar cartas.\n");
        printf("3 - Sair.\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                // CRIAÇÃO DAS CARTAS
                printf("== + ==\n");
                printf("Carta 1: Insira o nome do país:\n");
                scanf("%s", country1);
                printf("Carta 2: Insira o nome do país:\n");
                scanf("%s", country2);

                printf("Carta 1: Insira a população:\n");
                scanf("%d", &population1);
                printf("Carta 2: Insira a população:\n");
                scanf("%d", &population2);

                printf("Carta 1: Insira a área:\n");
                scanf("%f", &area1);
                printf("Carta 2: Insira a área:\n");
                scanf("%f", &area2);

                printf("Carta 1: Insira o PIB:\n");
                scanf("%f", &PIB1);
                printf("Carta 2: Insira o PIB:\n");
                scanf("%f", &PIB2);

                printf("Carta 1: Insira a quantidade de pontos turísticos:\n");
                scanf("%d", &tourism1);
                printf("Carta 2: Insira a quantidade de pontos turísticos:\n");
                scanf("%d", &tourism2);

                // Cálculo da densidade
                density1 = population1 / area1;
                density2 = population2 / area2;

                cartas = 1; // cartas criadas
                break;

            case 2:
                if (cartas == 0) {
                    printf("\n== + ==\n");
                    printf("Crie as cartas primeiro!\n");
                    break;
                }

                do {
                    printf("\n== + ==\n");
                    printf("Escolha quais dados comparar:\n");
                    printf("1 - População.\n");
                    printf("2 - Área.\n");
                    printf("3 - PIB.\n");
                    printf("4 - Pontos turísticos.\n");
                    printf("5 - Densidade demográfica.\n");
                    printf("6 - Retornar ao menu principal.\n");
                    scanf("%d", &option2);

                    switch (option2) {
                        case 1:
                            if (population1 > population2)
                                printf("Carta 1 - %s venceu: %d\n", country1, population1);
                            else
                                printf("Carta 2 - %s venceu: %d\n", country2, population2);
                            break;

                        case 2:
                            if (area1 > area2)
                                printf("Carta 1 - %s venceu: %.2f\n", country1, area1);
                            else
                                printf("Carta 2 - %s venceu: %.2f\n", country2, area2);
                            break;

                        case 3:
                            if (PIB1 > PIB2)
                                printf("Carta 1 - %s venceu: %.2f\n", country1, PIB1);
                            else
                                printf("Carta 2 - %s venceu: %.2f\n", country2, PIB2);
                            break;

                        case 4:
                            if (tourism1 > tourism2)
                                printf("Carta 1 - %s venceu: %d\n", country1, tourism1);
                            else
                                printf("Carta 2 - %s venceu: %d\n", country2, tourism2);
                            break;

                        case 5:
                            if (density1 > density2)
                                printf("Carta 1 - %s venceu: %.2f\n", country1, density1);
                            else
                                printf("Carta 2 - %s venceu: %.2f\n", country2, density2);
                            break;

                        case 6:
                            printf("Retornando ao menu principal...\n");
                            break;

                        default:
                            printf("Opção inválida! Tente novamente.\n");
                            break;
                    }

                } while (option2 != 6); // Fim do menu de comparação
                break;

            case 3:
                printf("== + ==\n");
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (option != 3);

    return 0;
}