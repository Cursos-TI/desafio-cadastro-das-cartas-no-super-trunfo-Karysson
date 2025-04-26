#include <stdio.h>

struct Cartas
{
    char estado[30];
    char cod_carta[5];
    char nome_cidade[50];
    int populacao;
    float areakm;
    float pib;
    int pontos_turisticos;
};

int main(){
    struct Cartas cartas[2];  

    printf("Bem vindo! Cadastre a primeira carta! \n");

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", cartas[0].cod_carta);
    
    printf("Digite o estado: \n");
    scanf(" %[^\n]", cartas[0].estado);

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cartas[0].nome_cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &cartas[0].populacao);

    printf("Digite a area: \n");
    scanf("%f", &cartas[0].areakm);

    printf("Digite o PIB: \n");
    scanf("%f", &cartas[0].pib);

    printf("Digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &cartas[0].pontos_turisticos);

    //carta 2
    printf("Agora, cadastre a segunda carta! \n");

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", cartas[1].cod_carta);
    
    printf("Digite o estado: \n");
    scanf(" %[^\n]", cartas[1].estado);

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cartas[1].nome_cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &cartas[1].populacao);

    printf("Digite a area: \n");
    scanf("%f", &cartas[1].areakm);

    printf("Digite o PIB: \n");
    scanf("%f", &cartas[1].pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &cartas[1].pontos_turisticos);

    //exibe as cartas

    printf("Cartas em cadastro: \n");
    
    printf("Primeira Carta: \n");
    
    printf("Codigo da carta %s\n", cartas[0].cod_carta);
    printf("Estado: %s\n", cartas[0].estado);
    printf("Cidade: %s\n", cartas[0].nome_cidade);
    printf("Populacao: %d\n", cartas[0].populacao);
    printf("PIB: %.2f\n", cartas[0].pib);
    printf("Area total: %.2f\n", cartas[0].areakm);
    printf("Pontos Turisticos: %d\n\n", cartas[0].pontos_turisticos);

    printf("Segunda Carta: \n\n");

    printf("Codigo da carta %s\n", cartas[1].cod_carta);
    printf("Estado: %s\n", cartas[1].estado);
    printf("Cidade: %s\n", cartas[1].nome_cidade);
    printf("Populacao: %d\n", cartas[1].populacao);
    printf("PIB: %.2f\n", cartas[1].pib);
    printf("Area total: %.2f\n", cartas[1].areakm);
    printf("Pontos Turisticos: %d\n", cartas[1].pontos_turisticos);

    return 0;
}
