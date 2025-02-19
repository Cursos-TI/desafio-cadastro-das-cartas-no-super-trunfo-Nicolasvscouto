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
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numerosTuristicos1, numerosTuristicos2;


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


    printf("-----1 CARTA-------\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km2: %.2fkm²\n", area1);
    printf("PIB: %.3f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", numerosTuristicos1);

    printf("-----2 CARTA-------\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km2: %.2fkm²\n", area2);
    printf("PIB: %.3f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", numerosTuristicos2);

    return 0;

    //A exibicao das cartas foi realizada com um printf para cada informacao pois dessa forma fica mais simples e mais atrativo para exibir-los no terminal.
    //tambem foi adicionado as informacoes extras como os km² para a area e o PIB é exibido em base com  bilhoes de reais.
}