#include <cstdio>

int main()
{
  // Estado
  char estado1[40] = "",
       estado2[40] = "";

  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
  char codCarta1[4] = "",
       codCarta2[4] = "";

  // Nome da Cidade: O nome da cidade
  char nomeCidade1[40] = "",
       nomeCidade2[40] = "";

  // População: O número de habitantes da cidade.
  int populacao1 = 0,
      populacao2 = 0;

  // Área (em km²): A área da cidade em quilômetros quadrados.
  float area1 = 0.0,
        area2 = 0.0;

  // O Produto Interno Bruto da cidade.
  float pib1 = 0.0,
        pib2 = 0.0;

  // A quantidade de pontos turísticos na cidade
  int qtdPontosTuristicos1 = 0,
      qtdPontosTuristicos2 = 0;

  // Densidade Populacional: Divida a população da cidade pela sua área
  float densidadePopulacional1 = 0.0,
        densidadePopulacional2 = 0.0;

  // PIB per Capita: Divida o PIB da cidade pela sua população
  float pibPerCapita1 = 0.0,
        pibPerCapita2 = 0.0;

  // superpoder
  float superpoder1 = 0.0,
        superpoder2 = 0.0;



  // Ler primeira carta
  printf("Entre com os valores da primeira carta:");
  printf("\n\tEstado:");
  scanf_s("%39s", estado1, 40);
  printf("\tCodigo:");
  scanf_s("%3s", codCarta1, 4);
  printf("\tNome da cidade:");
  scanf_s("%39s", nomeCidade1, 40);
  // fgets(nomeCidade1, 40, stdin);
  // gets_s(nomeCidade1, 40);
  printf("\tPopulacao:");
  scanf_s("%i", &populacao1);
  printf("\tArea:");
  scanf_s("%f", &area1);
  printf("\tPIB:");
  scanf_s("%f", &pib1);
  printf("\tNumero de pontos turisticos:");
  scanf_s("%i", &qtdPontosTuristicos1);

  // quebrar leitura automatica
  char lixo;
  scanf_s("%c", &lixo, 1);

  // Ler segunda carta
  printf("\nEntre com os valores da segunda carta:\n");
  printf("\tEstado:");
  scanf_s("%39s", estado2, 40);

  printf("\tCodigo:");
  scanf_s("%3s", codCarta2, 4);
  printf("\tNome da cidade:");
  scanf_s("%39s", nomeCidade2, 40);
  // fgets(nomeCidade2, 40, stdin);
  // gets_s(nomeCidade2, 40);
  printf("\tPopulacao:");
  scanf_s("%i", &populacao2);
  printf("\tArea:");
  scanf_s("%f", &area2);
  printf("\tPIB:");
  scanf_s("%f", &pib2);
  printf("\tNumero de pontos turisticos:");
  scanf_s("%i", &qtdPontosTuristicos2);

  // calcular a densidade populacional
  densidadePopulacional1 = populacao1 / area1;
  densidadePopulacional2 = populacao2 / area2;

  // calcular pib per capita
  pibPerCapita1 = 1000000000 * pib1 / populacao1;
  pibPerCapita2 = 1000000000 * pib2 / populacao2;

  // calcular o superpoder
  superpoder1 = (float)populacao1 + area1 + pib1 + (float)qtdPontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
  superpoder2 = (float)populacao2 + area2 + pib2 + (float)qtdPontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);






  //menu
  int opcaoMenu = 0;
  
  //Ler a opção escolhida
  printf("\nEscolha um dos atributos para comparar: ");
  printf("\n\t[1]: Nome do pais");
  printf("\n\t[2]: Populacao");
  printf("\n\t[3]: Area");
  printf("\n\t[4]: PIB");
  printf("\n\t[5]: Numero de pontos turisticos");
  printf("\n\t[6]: Densidade demografica");
  printf("\nOPCAO ESCOLHIDA: ");
  scanf_s("%i", &opcaoMenu);

  switch (opcaoMenu){
      case 1: //exibir informações
            // Exibir os dados lidos
            printf("\n\nCARTAS LIDAS\n");
            printf("\nCARTA 1:");
            printf("\n\tEstado: %s", estado1);
            printf("\n\tCodigo: %s", codCarta1);
            printf("\n\tNome da Cidade: %s", nomeCidade1);
            printf("\n\tPopulacao: %i", populacao1);
            printf("\n\tArea: %f km2", area1);
            printf("\n\tPIB: %f bilhoes de reais", pib1);
            printf("\n\tNumero de pontos turisticos: %i", qtdPontosTuristicos1);
            printf("\n\tDensidade Populacional: %f hab/km2", densidadePopulacional1);
            printf("\n\tPib Per Capita: %f reais", pibPerCapita1);

            printf("\n\nCARTA 2:");
            printf("\n\tEstado: %s", estado2);
            printf("\n\tCodigo: %s", codCarta2);
            printf("\n\tNome da Cidade: %s", nomeCidade2);
            printf("\n\tPopulacao: %i", populacao2);
            printf("\n\tArea: %f km2", area2);
            printf("\n\tPIB: %f bilhoes de reais", pib2);
            printf("\n\tNumero de pontos turisticos: %i", qtdPontosTuristicos2);
            printf("\n\tDensidade Populacional: %f hab/km2", densidadePopulacional2);
            printf("\n\tPib Per Capita: %f reais", pibPerCapita2);
            break;
      case 2: //população
            // Exibir a carta 1
            printf("\n\tCarta 1 - %s (%s) : %ihab", nomeCidade1, codCarta1, populacao1);
            // Exibir a carta 2
            printf("\n\tCarta 2 - %s (%s) : %ihab", nomeCidade2, codCarta2, populacao2);
              //Exibir a carta vencedora
            if(populacao1 > populacao2){
                  printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
            }
            else if(populacao1 < populacao2) {
                  printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
            }
            else
            {
                  printf("\nEmpate!");
            }
            break;
      case 3: //área
           // Exibir a carta 1
            printf("\n\tCarta 1 - %s (%s) : %fkm2", nomeCidade1, codCarta1, area1);
            // Exibir a carta 2
            printf("\n\tCarta 2 - %s (%s) : %fkm2", nomeCidade2, codCarta2, area2);
              //Exibir a carta vencedora
            if(area1 > area2){
                  printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
            }
            else if(area1 < area2) {
                  printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
            }
            else
            {
                  printf("\nEmpate!");
            }
        break;
      case 4: //pib
            // Exibir a carta 1
            printf("\n\tCarta 1 - %s (%s) : %fbilhoes R$", nomeCidade1, codCarta1, pib1);
            // Exibir a carta 2
            printf("\n\tCarta 2 - %s (%s) : %fbilhoes R$", nomeCidade2, codCarta2, pib2);
              //Exibir a carta vencedora
            if(pib1 > pib2){
                  printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
            }
            else if(pib1 < pib2) {
                  printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
            }
            else
            {
                  printf("\nEmpate!");
            }
        break;
      case 5: //pontos turísticos
            // Exibir a carta 1
            printf("\n\tCarta 1 - %s (%s) : %i pontos turisticos", nomeCidade1, codCarta1, qtdPontosTuristicos1);
            // Exibir a carta 2
            printf("\n\tCarta 2 - %s (%s) : %i pontos turisticos", nomeCidade2, codCarta2, qtdPontosTuristicos2);
              //Exibir a carta vencedora
            if(qtdPontosTuristicos1 > qtdPontosTuristicos2){
                  printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
            }
            else if(qtdPontosTuristicos1 < qtdPontosTuristicos2) {
                  printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
            }
            else
            {
                  printf("\nEmpate!");
            }
        break;
      case 6: //densidade demografica
            // Exibir a carta 1
            printf("\n\tCarta 1 - %s (%s) : %fhab/km2 R$", nomeCidade1, codCarta1, densidadePopulacional1);
            // Exibir a carta 2
            printf("\n\tCarta 2 - %s (%s) : %fhab/km2 R$", nomeCidade2, codCarta2, densidadePopulacional2);
              //Exibir a carta vencedora
            if(densidadePopulacional1 > densidadePopulacional2){
                  printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
            }
            else if(densidadePopulacional1 < densidadePopulacional2) {
                  printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
            }
            else
            {
                  printf("\nEmpate!");
            }
        break;
      default: //opção inválida
        printf("\n\nOPCAO INVALIDA");
  }

  return 0;
}