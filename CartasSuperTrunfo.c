#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

float calcularDensidade(int populacao, float area) {
  if (area == 0) {
    return 0; // Evita divisão por zero
  }
  return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
  if (populacao == 0) {
    return 0; // Evita divisão por zero
  }
  return pib / populacao;
}

float calcSuperPoder(unsigned long int populacao, float area, float pib, int qtdTurismo, float pibPerCapita, float densidadeP) {
  return (float) populacao + area + pib + qtdTurismo + pibPerCapita + densidadeP;
}

char* compararCartas(float superPoder1, float superPoder2) {
  short int resultado = superPoder1 > superPoder2;
  if (resultado == 1) {
    return "Carta 1 venceu (1)";
  } else {
    return "Carta 2 venceu (0)";
  }
}

int main()
{
  // variaveis da carta 1
  char estado1;
  char codigo1[3];
  char nome1[20];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int qtdPTurismo1;
  float densidadeP1;
  float pibPerCapita1;
  float superPoder1;

  // variaveis da carta 2
  char estado2;
  char codigo2[3];
  char nome2[20];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int qtdPTurismo2;
  float densidadeP2;
  float pibPerCapita2;
  float superPoder2;

  // Coleta de dados da carta 1
  printf("INFORMAÇÕES DA CARTA 1\n\n\n");
  printf("Estado (uma letra entre 'A' e 'H')\n");
  scanf(" %c", &estado1);
  printf("Código da carta\n");
  scanf("%s", codigo1);
  getchar();
  printf("Nome da Cidade\n");
  fgets(nome1, 20, stdin);
  nome1[strlen(nome1) - 1] = '\0'; //remove o \n do final da string
  printf("População\n");
  scanf("%lu", &populacao1);
  printf("Área (em km²)\n");
  scanf("%f", &area1);
  printf("PIB\n");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos\n");
  scanf("%d", &qtdPTurismo1);
  printf("CARTA 1 SALVA! \n\n");

  // Cálculo da densidade populacional
  densidadeP1 = calcularDensidade(populacao1, area1);
  pibPerCapita1 = calcularPibPerCapita(pib1, populacao1);
  superPoder1 = calcSuperPoder(populacao1, area1, pib1, qtdPTurismo1, pibPerCapita1, 1/densidadeP1);

  // Coleta de dados da carta 2
  printf("INFORMAÇÕES DA CARTA 2\n\n\n");
  printf("Estado (uma letra entre 'A' e 'H')\n");
  scanf(" %c", &estado2);
  printf("Código da carta\n");
  scanf("%s", codigo2);
  printf("Nome da Cidade\n");
  fgetc(stdin);
  fgets(nome2, 20, stdin);
  nome2[strlen(nome2) - 1] = '\0'; //remove o \n do final da string
  printf("População\n");
  scanf("%lu", &populacao2);
  printf("Área (em km²)\n");
  scanf("%f", &area2);
  printf("PIB\n");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos\n");
  scanf("%d", &qtdPTurismo2);
  printf("CARTA 2 SALVA! \n\n");

  // Cálculo da densidade populacional
  densidadeP2 = calcularDensidade(populacao2, area2);
  pibPerCapita2 = calcularPibPerCapita(pib2, populacao2);
  superPoder2 = calcSuperPoder(populacao2, area2, pib2, qtdPTurismo2, pibPerCapita2, 1/densidadeP2);

  printf("COMPARAÇÃO DE CARTAS:\n");
  printf("População: %s\n", compararCartas((float) populacao1, (float) populacao2));
  printf("Área: %s\n", compararCartas(area1, area2));
  printf("PIB: %s\n", compararCartas(pib1, pib2));
  printf("Pontos Turísticos: %s\n", compararCartas((float) qtdPTurismo1, (float) qtdPTurismo2));
  printf("Densidade Populacional: %s\n", compararCartas(1/densidadeP1, 1/densidadeP2));
  printf("PIB per Capita: %s\n", compararCartas(pibPerCapita1, pibPerCapita2));
  printf("Super Poder: %s\n", compararCartas(superPoder1, superPoder2));


  return 0;
}
