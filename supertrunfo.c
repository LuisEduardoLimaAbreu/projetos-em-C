#include <stdio.h>

struct carta
{

char estado;
char codigo[4];
char Cidade[50];
int populacao;
float area;
float pib;
int pontosturisticos;

};

int main()
{

struct carta carta1, carta2;

//cadastro da carta 1


    printf("\n--- Cadastro de Carta 1 ---\n");

    printf("Digite o Estado (A-H): \n");
    scanf("%c", &carta1.estado);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &carta1.codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &carta1.Cidade);

    printf("Digite A populacao: \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area em km²: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: \n");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &carta1.pontosturisticos);


    // cadastro da carta 2


    printf("\n--- Cadastro de Carta 2 ---\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &carta2.codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &carta2.Cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area em km²: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: \n");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &carta2.pontosturisticos);

//exibiçao dos dados]

    printf("\n--- carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("nome da cidade %s\n", carta1.Cidade);
    printf("populacao: %d\n", carta1.populacao);
    printf("area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d", carta1.pontosturisticos);


    printf("\n--- carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("nome da cidade %s\n", carta2.Cidade);
    printf("populacao: %d\n", carta2.populacao);
    printf("area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosturisticos);







    return 0;
}










