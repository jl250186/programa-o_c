#include <cstdio>


//move a torre
void moverTorre(int numJogadas)
{
  if(numJogadas > 0)
  {
    //AÇÃO
    printf("\n\tDireita");
    //loop
    moverTorre(numJogadas-1);
  }
}

//move o bispo
void moverBispo(int numJogadas)
{
  if(numJogadas > 0)
  {
    //AÇÃO
    printf("\n\tCima, Direita");
    //loop
    moverBispo(numJogadas - 1);
  }
}

//move a rainha
void moverRainha(int numJogadas)
{
  if(numJogadas > 0)
  {
    //AÇÃO
    printf("\n\tEsquerda");
    //loop
    moverRainha(numJogadas - 1);
  }
}



//cavalo: cima, cima, direita
void moverCavalo(int numJogadas)
{
  int NUMCASASCIMA = 2;
  int NUMCASASDIR = 1;

  for (int i = 0; i < numJogadas; ++i)
  {

    for (int j = 0; j < NUMCASASCIMA; ++j)
    {
      printf("\n\t%s", "Cima");
    }
    for (int k = 0; k < NUMCASASDIR; ++k)
    {
      printf("\n\t%s", "Direita");
    }
  }
}


int main()
{
  //numero de jogadas da torre
   int NUMJOGADASTORRE = 5;

   //número de jogadas do bispo
   int NUMJOGADASBISPO = 5;

   //número de jogadas da rainha
   int NUMJOGADASRAINHA = 8;

   //número de jogadas do cavalo
   int NUMJOGADASCAVALO = 1;



   //jogadas do cavalo (2 baixo + 1 esq)
   printf("\n\nCAVALO:");
   moverCavalo(NUMJOGADASCAVALO);

   //separar linha para movimento do cavalo
   printf("\n");

   //jogadas da torre
   printf("\nTORRE:");
   moverTorre(NUMJOGADASTORRE);

   //jogadas do bispo
   printf("\nBISPO:");
   moverBispo(NUMJOGADASBISPO);

   //jogadas da rainha
   printf("\nRAINHA:");
   moverRainha(NUMJOGADASRAINHA);


  return 0;
}