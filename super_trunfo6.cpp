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



  //os atributos das cartas correspondem à ordem dos itens do menu
  char* atributosCartas[7] = {"", "NOME CIDADE", "POPULACAO", 
                                 "AREA", "PIB", "NUM PONTOS TURISTICOS", 
                                 "DENSIDADE DEMOGRAFICA"};

  //os dados das cartas estão na ordem do menu
  float dadosCartas[2][9] = {
                              {-1.0, -1.0, (float)populacao1, area1, pib1, (float)qtdPontosTuristicos1, densidadePopulacional1, pibPerCapita1, superpoder1 },
                              {-1.0, -1.0, (float)populacao2, area2, pib2, (float)qtdPontosTuristicos2, densidadePopulacional2, pibPerCapita2, superpoder2 }
                            };



  //menu de opções
  int opcao1Menu = 0,
      opcao2Menu = 0;

  
  //Ler a opção escolhida
  printf("\nEscolha dois dos atributos para comparar: ");
  //printf("\n\t[1]: Nome da cidade");
  printf("\n\t[2]: Populacao");
  printf("\n\t[3]: Area");
  printf("\n\t[4]: PIB");
  printf("\n\t[5]: Numero de pontos turisticos");
  printf("\n\t[6]: Densidade demografica");
  printf("\nOPCOES ESCOLHIDAS (digite os dois digitos com espaco entre eles. Ex: Para PIB e Area, digite 4 3): ");
  scanf_s("%i %i", &opcao1Menu, &opcao2Menu);

  //Executar as opções escolhidas
  if( (opcao1Menu != opcao2Menu) && 
      (opcao1Menu >= 2 && opcao1Menu <= 6) && 
      (opcao2Menu >= 2 && opcao2Menu<= 6) )
  {
      //Mostrar os nomes das cidades
      printf("\nCidades escolhidas: %s x %s", nomeCidade1, nomeCidade2);
      
      //Exibir as opções escolhidas:
      printf("\nAtributos escolhidos: %s e %s.", atributosCartas[opcao1Menu], atributosCartas[opcao2Menu]);
      
      //os atributos das cartas
      float carta1ValorAtributo1 = dadosCartas[0][opcao1Menu],
            carta1ValorAtributo2 = dadosCartas[0][opcao2Menu],
            carta2ValorAtributo1 = dadosCartas[1][opcao1Menu],
            carta2ValorAtributo2 = dadosCartas[1][opcao2Menu];
      
      //soma dos atributos escolhidos
      float somaAtributosCarta1 = carta1ValorAtributo1 + carta1ValorAtributo2;
      float somaAtributosCarta2 = carta2ValorAtributo1 + carta2ValorAtributo2;

      //exibir os valores de cada atributo escolhido
      printf("\n\t%s: %f ; %f. Total: %f", nomeCidade1, carta1ValorAtributo1, carta1ValorAtributo2, somaAtributosCarta1);
      printf("\n\t%s: %f ; %f. Total: %f", nomeCidade2, carta2ValorAtributo1, carta2ValorAtributo2, somaAtributosCarta2);

      if(somaAtributosCarta1 > somaAtributosCarta2){
        printf("\n%s VENCEU!!", nomeCidade1);
      }
      else if(somaAtributosCarta1 < somaAtributosCarta2)
      {
        printf("\n%s VENCEU!!!", nomeCidade2);
      }
      else
      {
        printf("\n*** EMPATE ***");
      }
      
  }
  else
  {
      printf("\n\nOPCAO INVALIDA (%i, %i). Selecione dois atributos diferentes dentre [2..6] para comparar.", opcao1Menu, opcao2Menu);
  }

  return 0;
}