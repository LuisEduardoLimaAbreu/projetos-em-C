#include <stdio.h>

struct carta
{
    char estado;
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main()
{
    struct carta carta1, carta2;

    // --- Cadastro das Cartas ---
    printf("\n--- Cadastro de Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o Codigo da carta: ");
    scanf("%s", carta1.codigo);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", carta1.cidade);
    printf("Digite a Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a Area em km²: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosturisticos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;

    printf("\n--- Cadastro de Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o Codigo da carta: ");
    scanf("%s", carta2.codigo);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", carta2.cidade);
    printf("Digite a Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a Area em km²: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosturisticos);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;

    //  Menu interativo 
    int atributo1, atributo2;

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o PRIMEIRO atributo para comparar: ");
    scanf("%d", &atributo1);

    // Menu dinâmico (remove a opção escolhida)
    printf("\n===== MENU (2º ATRIBUTO) =====\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i != atributo1)
        {
            switch (i)
            {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("\n Você escolheu o mesmo atributo duas vezes! Reinicie e escolha diferentes.\n");
        return 0;
    }

    // --- Comparações individuais ---
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    
    char nome1[30], nome2[30];

    // Função switch para o primeiro atributo
    switch (atributo1)
    {
    case 1:
        valor1_c1 = carta1.populacao;
        valor1_c2 = carta2.populacao;
        sprintf(nome1, "População");
        break;
    case 2:
        valor1_c1 = carta1.area;
        valor1_c2 = carta2.area;
        sprintf(nome1, "Área");
        break;
    case 3:
        valor1_c1 = carta1.pib;
        valor1_c2 = carta2.pib;
        sprintf(nome1, "PIB");
        break;
    case 4:
        valor1_c1 = carta1.pontosturisticos;
        valor1_c2 = carta2.pontosturisticos;
        sprintf(nome1, "Pontos Turísticos");
        break;
    case 5:
        valor1_c1 = carta1.densidadePopulacional;
        valor1_c2 = carta2.densidadePopulacional;
        sprintf(nome1, "Densidade Demográfica");
        break;
    default:
        printf("\nOpção inválida!\n");
        return 0;
    }

    // Switch para o segundo atributo
    switch (atributo2)
    {
    case 1:
        valor2_c1 = carta1.populacao;
        valor2_c2 = carta2.populacao;
        sprintf(nome2, "População");
        break;
    case 2:
        valor2_c1 = carta1.area;
        valor2_c2 = carta2.area;
        sprintf(nome2, "Área");
        break;
    case 3:
        valor2_c1 = carta1.pib;
        valor2_c2 = carta2.pib;
        sprintf(nome2, "PIB");
        break;
    case 4:
        valor2_c1 = carta1.pontosturisticos;
        valor2_c2 = carta2.pontosturisticos;
        sprintf(nome2, "Pontos Turísticos");
        break;
    case 5:
        valor2_c1 = carta1.densidadePopulacional;
        valor2_c2 = carta2.densidadePopulacional;
        sprintf(nome2, "Densidade Demográfica");
        break;
    default:
        printf("\nOpção inválida!\n");
        return 0;
    }

    // Lógica de comparação
    printf("\n===== RESULTADO DAS COMPARAÇÕES =====\n");

    printf("\nAtributo 1: %s\n", nome1);
    printf("%s: %.2f | %s: %.2f\n", carta1.cidade, valor1_c1, carta2.cidade, valor1_c2);

    // Densidade é invertida
    if (atributo1 == 5)
        printf("Vencedor do atributo 1: %s\n",
               (valor1_c1 < valor1_c2 ? carta1.cidade :
                valor1_c2 < valor1_c1 ? carta2.cidade : "Empate!"));
    else
        printf("Vencedor do atributo 1: %s\n",
               (valor1_c1 > valor1_c2 ? carta1.cidade :
                valor1_c2 > valor1_c1 ? carta2.cidade : "Empate!"));

    printf("\nAtributo 2: %s\n", nome2);
    printf("%s: %.2f | %s: %.2f\n", carta1.cidade, valor2_c1, carta2.cidade, valor2_c2);

    if (atributo2 == 5)
        printf("Vencedor do atributo 2: %s\n",
               (valor2_c1 < valor2_c2 ? carta1.cidade :
                valor2_c2 < valor2_c1 ? carta2.cidade : "Empate!"));
    else
        printf("Vencedor do atributo 2: %s\n",
               (valor2_c1 > valor2_c2 ? carta1.cidade :
                valor2_c2 > valor2_c1 ? carta2.cidade : "Empate!"));

    // --- Soma final ---
    soma1 = (atributo1 == 5 ? -valor1_c1 : valor1_c1) +
            (atributo2 == 5 ? -valor2_c1 : valor2_c1);
    soma2 = (atributo1 == 5 ? -valor1_c2 : valor1_c2) +
            (atributo2 == 5 ? -valor2_c2 : valor2_c2);

    printf("\n===== SOMA FINAL =====\n");
    printf("%s: %.2f\n", carta1.cidade, soma1);
    printf("%s: %.2f\n", carta2.cidade, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("\n VENCEDOR FINAL: %s\n", carta1.cidade);
    else if (soma2 > soma1)
        printf("\n VENCEDOR FINAL: %s\n", carta2.cidade);
    else
        printf("\n Empate!\n");

    return 0;
}
