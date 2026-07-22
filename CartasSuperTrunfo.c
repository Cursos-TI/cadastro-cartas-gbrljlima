#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigo1[4], nomeCidade1[40];
  int populacao1, qntPontoTuristico1;
  float area1, pib1;
  char estado2, codigo2[4], nomeCidade2[40];
  int populacao2, qntPontoTuristico2;
  float area2, pib2;
  // Área para entrada de dados
  //Informações CARTA 1
  printf("Digite os dados da carta 1! \n");
  printf("Digite a letra que representa o estado: \n");
  scanf("%c", &estado1);
  printf("Digite o código da carta: \n");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: \n");
  scanf("%s", nomeCidade1);
  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area1);
  printf("Digite o produto interno bruto da cidade: \n");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &qntPontoTuristico1);
  printf("----------------------------------------------------\n");

  setbuf(stdin, 0); //limpar o buffer de leitura para uma nova entrada de dados.
  //Informações CARTA 2
  printf("Digite os dados da carta 2! \n");
  printf("Digite a letra que representa o estado: \n");
  scanf("%c", &estado2);
  printf("Digite o código da carta: \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: \n");
  scanf("%s", nomeCidade2);
  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao2);
  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", &area2);
  printf("Digite o produto interno bruto da cidade: \n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &qntPontoTuristico2);
  printf("----------------------------------------------------\n");

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", nomeCidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f km² \n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d \n", qntPontoTuristico1);

  printf("----------------------------------------------------\n");
  
  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nomeCidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d \n", qntPontoTuristico2);

return 0;
} 
