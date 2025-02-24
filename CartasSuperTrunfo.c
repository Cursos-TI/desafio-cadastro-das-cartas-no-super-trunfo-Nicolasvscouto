#include <stdio.h>
#include <string.h>

//Inicialmente apenas introduzir a criacao de duas cartas
/*
criar as informacoes da cartas: Estado (char 1 caracter %c), Codigo da Carta (Char Array), Nome da cidade
Populacao (Int), Area km2 (float), Pib (Float), Numero de Pontos Turisticos (Int)
*/

int main() {
    //criar variaveis separadas para cada parte da cidade (estado, codigo de cidade, cidade, populacao e etc), Atribuir uma variavel para cada carta para facilitar as coisas 
    char estado1, estado2;
    char codigoCarta1[10], codigoCarta2[10];
    char nomeCidade1[30], nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numerosTuristicos1, numerosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float poderCarta1, poderCarta2;


    //Utilizar PRINTF e SCANF com identificadores para atribuir os valores digitados em cada variavel
    //Descobri que, ao utilizar o getchar, eu limpo o caracter da nova linha e o fgets funciona, vai ficar assim por enquanto
    printf("--------**DIGITE A PRIMEIRA CARTA**------------------\n");

    printf("Digite qual e a letra do estado da carta: \n");
    scanf(" %c", &estado1); 
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigoCarta1); 
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);

    printf("Qual a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Qual a area em km² da cidade: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &numerosTuristicos1);


    //Realizar a mesma coisa que a primeira carta apenas trocando as variaveis que serao utilizadas pois precisam referenciar as da segunda carta
    printf("--------DIGITE A SEGUNDA CARTA AGORA------------------\n");

    printf("Digite qual e a letra do estado da carta: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigoCarta2);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);

    printf("Qual a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Qual a area em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &numerosTuristicos2);


     //ATUALIZACAO PARA ADICIONAR O NIVEL INTERMEDIARIO (calculo da densidade e do pib)

    densidadePopulacional1 = (float) populacao1 / area1; //utilizar casting para manipulacao explicita dos inteiros para ficar como float
    densidadePopulacional2 = (float) populacao2 / area2;

    //necessario utilizar esse * 1000000000.0 porque o pib esta em bilhoes e ai multiplicamos por bilhao para dividir pela populacao e obter a resposta em reais (se quiser apenas exibir em bilhoes seria necessario umas 8 casas depois da virgula)

    pibPerCapita1 = (float) (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (float) (pib2 * 1000000000.0) / populacao2; 

    //Atualizacao para o nivel mestre: Calcular o super poder de cada carta apos a entrada de dados:
    //calculo para o super poder= Somar todos os atributos numericos e quanto menor a densidade maior o poder
    poderCarta1 = ((float) populacao1 + area1 + pib1 + (float) numerosTuristicos1) + 1.0f/densidadePopulacional1;
    poderCarta2 = ((float) populacao2 + area2 + pib2 + (float) numerosTuristicos2) + 1.0f/densidadePopulacional2;

    system("cls");
   
    printf("-----1 CARTA-------\n");
    printf("Estado: %c\n", estado1);    
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area em km2: %.2fkm²\n", area1);
    printf("PIB: %.3f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", numerosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("Pib per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder dessa carta: %.2f\n", poderCarta1);

    printf("-----2 CARTA-------\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area em km2: %.2fkm²\n", area2);
    printf("PIB: %.3f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", numerosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("Pib per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder dessa carta: %.2f\n", poderCarta2);


    printf("COMPARACAO ENTRE AS CARTAS: \n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", numerosTuristicos1 > numerosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", poderCarta1 > poderCarta2);
    

    return 0;
