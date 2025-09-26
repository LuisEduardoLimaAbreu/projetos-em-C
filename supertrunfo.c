#include <stdio.h>

struct carta
{

char estado;
char codigo[10];
char Cidade[50];
unsigned long int populacao;
float area;
float pib;
int pontosturisticos;
float densidadePopulacional;
float pibPerCapita;
float superPoder;


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

    //Calculo da Carta 1

        carta1.densidadePopulacional = carta1.populacao / carta1.area;
        carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;
        carta1.superPoder = carta1.populacao + carta1.area + carta1.pib
         + carta1.pontosturisticos + carta1.pibPerCapita + 
        (1/ carta1.densidadePopulacional); 

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
    
//Calculos da carta 2

        carta2.densidadePopulacional = carta2.populacao / carta2.area;
        carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;
        carta2.superPoder = carta2.populacao + carta2.area + carta2.pib 
        + carta2.pontosturisticos + carta2.pibPerCapita + 
        (1/ carta2.densidadePopulacional); 

//exibiçao dos dados

    printf("\n--- carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("nome da cidade %s\n", carta1.Cidade);
    printf("populacao: %d\n", carta1.populacao);
    printf("area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);


    printf("\n--- carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("nome da cidade %s\n", carta2.Cidade);
    printf("populacao: %d\n", carta2.populacao);
    printf("area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosturisticos);
    printf("Densidade Populacional: %2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %2f reais\n", carta2.pibPerCapita);

    //Comparaçoes
    printf("\n-- Comparacao de Cartas --\n");

    printf("Populacao: Carta %d venceu (%d)\n",
         (carta1.populacao > carta2.populacao ? 1 : 2),
         (carta1.populacao > carta2.populacao ? 1 : 0));
    printf("Area: Carta %d venceu (%d)\n",
         (carta1.area > carta2.area ? 1 : 2),
         (carta1.area > carta2.area ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n",
         (carta1.pib > carta2.pib ? 1 : 2),
         (carta1.pib > carta2.pib ? 1 : 0));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
         (carta1.pontosturisticos > carta2.pontosturisticos ? 1 : 2),
         (carta1.pontosturisticos > carta2.pontosturisticos  ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
         (carta1.densidadePopulacional < carta2.densidadePopulacional ? 1 : 2),
         (carta1.densidadePopulacional < carta2.densidadePopulacional  ? 1 : 0));
    printf("PIB per capita: Carta %d venceu (%d)\n",
         (carta1.pibPerCapita> carta2.pibPerCapita ? 1 : 2),
         (carta1.pibPerCapita > carta2.pibPerCapita ? 1 : 0));
    printf("Super poder: Carta %d venceu (%d)\n",
         (carta1.superPoder > carta2.superPoder ? 1 : 2),
         (carta1.superPoder > carta2.superPoder  ? 1 : 0));





    return 0;
}









