#include <stdio.h>
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

int main()
{
  // variaveis da carta 1
  char estado1;
  char codigo1[3];
  char nome1[20];
  int populacao1;
  float area1;
  float pib1;
  int qtdPTurismo1;
  float densidadeP1;
  float pibPerCapita1;

  // variaveis da carta 2
  char estado2;
  char codigo2[3];
  char nome2[20];
  int populacao2;
  float area2;
  float pib2;
  int qtdPTurismo2;
  float densidadeP2;
  float pibPerCapita2;

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
  scanf("%d", &populacao1);
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
  
  printf("Carta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", qtdPTurismo1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadeP1);
  printf("PIB per capita: %.2f reais\n\n\n\n", pibPerCapita1);

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
  scanf("%d", &populacao2);
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

  printf("Carta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", qtdPTurismo2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadeP2);
  printf("PIB per capita: %.2f reais\n", pibPerCapita2);

  return 0;
}
