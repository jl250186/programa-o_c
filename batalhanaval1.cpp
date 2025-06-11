#include <cstdio>



//inicializar tabuleiro com zeros
void inicializarTabuleiro(int tab[10][10])
{
  for(int i = 0; i < 10; ++i)
    for(int j = 0; j < 10; ++j)
      tab[i][j] = 0;
}



//exibir o tabuleiro
void exibirTabuleiro(int tab[10][10]){
    //exibir a linha indicadora das colunas
    for(int k = 0; k < 11; ++k)
    {
        if(k == 0) printf("   ");
        else printf("C%i ", k-1);
    }
    printf("\n");

    //exibir o restante dos itens
    for(int i = 0; i < 10; ++i)
    {
        //exibir a coluna indicadora das linhas
        printf("L%i.", i);
        
        for(int j = 0; j < 10; ++j)
        { 
          if(tab[i][j] == 0) 
            printf(" %i ", tab[i][j]);
          else 
            printf("[%i]", tab[i][j]);
        }
        printf("\n");
    }
}



//posiciona o navio verticalmente no tabuleiro, dadas a linha e a coluna
//o navio é posicionado de cima (linha menor) para baixo (linha maior) 
void posicionarNavioVertical(int tab[10][10], int numlinha, int numcoluna)
{
   //verificar a posição vertical inicial do navio é válida (cima, 0 para baixo, 9) 
   if( (numlinha >= 0 ) && (numlinha + 3 < 10) )
   {
      //verificar se a posição horizontal é válida
      if( ( numcoluna >= 0 ) && (numcoluna < 10) )
      {
        //verificar se as posições do navio estão ocupadas
        if( tab[numlinha][numcoluna] == 0 && 
            tab[numlinha+1][numcoluna] == 0 &&
            tab[numlinha+2][numcoluna] == 0)
            {
                tab[numlinha][numcoluna] = 3;
                tab[numlinha+1][numcoluna] = 3;
                tab[numlinha+2][numcoluna] = 3;
            }
      }
   }
   
}


//posiciona o navio horizontalmente no tabuleiro, dadas a linha e coluna
//o navio é posicionado da esquerda (coluna menor) para a direita(coluna maior)
void posicionarNavioHorizontal(int tab[10][10], int numlinha, int numcoluna)
{
    //verificar se a posição horizontal inicial do navio é válida (esquerda, 0, direita, 9)
    if( (numcoluna >= 0) && (numcoluna + 3 < 10) )
    {
        //verificar se a posição vertical é válida
        if( (numlinha >= 0 ) && (numlinha < 10) )
        {
            //verificar se as posições do navio estão ocupadas
            if( tab[numlinha][numcoluna] == 0 && 
            tab[numlinha][numcoluna+1] == 0 &&
            tab[numlinha][numcoluna+2] == 0)
            {
                tab[numlinha][numcoluna] = 3;
                tab[numlinha][numcoluna+1] = 3;
                tab[numlinha][numcoluna+2] = 3;
            }
        }
    }
}





int main(){

//o tabuleiro
int tabuleiro[10][10];
inicializarTabuleiro(tabuleiro);
exibirTabuleiro(tabuleiro);

printf("\n\n===========\n\n");

//os dois navios
posicionarNavioVertical(tabuleiro, 6, 7);
posicionarNavioHorizontal(tabuleiro, 7, 0);

exibirTabuleiro(tabuleiro);

    return 0;
}