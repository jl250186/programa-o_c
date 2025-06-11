#include <cstdio>


int main()
{
    //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char estado1 = 'X', 
         estado2 ='X';
    
    //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)     
    char codCarta1[4] = "",
         codCarta2[4] = "";

    //Nome da Cidade: O nome da cidade     
    char nomeCidade1[40] = "",
         nomeCidade2[40] = "";

    //População: O número de habitantes da cidade.
    int populacao1 = 0,
        populacao2 = 0;

    //Área (em km²): A área da cidade em quilômetros quadrados.
    float area1 = 0.0,
          area2 = 0.0;

    //O Produto Interno Bruto da cidade.
    float pib1 = 0.0,
          pib2 = 0.0;

    //A quantidade de pontos turísticos na cidade
    int qtdPontosTuristicos1 = 0,
        qtdPontosTuristicos2 = 0;


    //Calcular a Densidade Populacional: Divida a população da cidade pela sua área
    float densidadePopulacional1 = 0.0,
          densidadePopulacional2 = 0.0;

    //Calcular o PIB per Capita: Divida o PIB da cidade pela sua população
    float pibPerCapita1 = 0.0,
          pibPerCapita2 = 0.0;



    //Ler primeira carta
    printf("Entre com os valores da primeira carta:");
    printf("\n\tEstado:");
      scanf_s("%1c", &estado1, 1);
    printf("\tCodigo:");
      scanf_s("%3s", codCarta1,4);
    printf("\tNome da cidade:");
      scanf_s("%39s", nomeCidade1, 40);
    printf("\tPopulacao:");
      scanf_s("%i", &populacao1);
    printf("\tArea:");
      scanf_s("%f", &area1);
    printf("\tPIB:");
      scanf_s("%f", &pib1);
    printf("\tNumero de pontos turisticos:");
      scanf_s("%i", &qtdPontosTuristicos1);

      //quebrar leitura automatica
      char lixo;
      scanf_s("%c", &lixo, 1);


    
    //Ler segunda carta
    printf("\nEntre com os valores da segunda carta:\n");
    printf("\tEstado:");
      scanf_s("%1c", &estado2, 1);
    printf("\tCodigo:");
      scanf_s("%3s", codCarta2, 4);
    printf("\tNome da cidade:");
      scanf_s("%39s", nomeCidade2, 40);
    printf("\tPopulacao:");
      scanf_s("%i", &populacao2);
    printf("\tArea:");
      scanf_s("%f", &area2);
    printf("\tPIB:");
      scanf_s("%f", &pib2);
    printf("\tNumero de pontos turisticos:");
      scanf_s("%i", &qtdPontosTuristicos2);



    //calcular a densidade populacional
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    //calcular pib
    pibPerCapita1 = 1000000000 * pib1 / populacao1;
    pibPerCapita2 = 1000000000 * pib2 / populacao2;
    
      

    //Exibir os dados lidos
    printf("\n\nCARTAS LIDAS\n");
    printf("\nCARTA 1:");
      printf("\n\tEstado: %c", estado1);
      printf("\n\tCodigo: %s", codCarta1);
      printf("\n\tNome da Cidade: %s", nomeCidade1);
      printf("\n\tPopulacao: %i", populacao1 );
      printf("\n\tArea: %f km2", area1 );
      printf("\n\tPIB: %f bilhoes de reais", pib1 );
      printf("\n\tNumero de pontos turisticos: %i", qtdPontosTuristicos1);
      printf("\n\tDensidade Populacional: %f hab/km2", densidadePopulacional1 );
      printf("\n\tPib Per Capita: %f reais", pibPerCapita1 );

    printf("\n\nCARTA 2:");
      printf("\n\tEstado: %c", estado2);
      printf("\n\tCodigo: %s", codCarta2);
      printf("\n\tNome da Cidade: %s", nomeCidade2);
      printf("\n\tPopulacao: %i", populacao2 );
      printf("\n\tArea: %f km2", area2 );
      printf("\n\tPIB: %f bilhoes de reais", pib2 );
      printf("\n\tNumero de pontos turisticos: %i", qtdPontosTuristicos2);
      printf("\n\tDensidade Populacional: %f hab/km2", densidadePopulacional2 );
      printf("\n\tPib Per Capita: %f reais", pibPerCapita2 );

    return 0;
}