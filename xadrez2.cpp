#include <cstdio>


int main()
{
   int NUMJOGADASTORRE = 5;
   int NUMJOGADASBISPO = 5;
   int NUMJOGADASRAINHA = 8;

   int NUMJOGADASCAVALOBAIXO = 2;
   int NUMJOGADASCAVALOESQ = 1;

   char* direcaoTorre = "Direita";
   char* direcaoBispo = "Cima, Direita";
   char* direcaoRainha = "Esquerda";



   //jogadas do cavalo (2 baixo + 1 esq)
   printf("\n\nCAVALO:");
   for( int j = 0; j < NUMJOGADASCAVALOBAIXO; ++j ){
    printf("\n\t%s", "Baixo");
   }
   for(int j = 0; j < NUMJOGADASCAVALOESQ; ++j){
    printf("\n\t%s", "Esquerda");
   } 

   //separar linha para movimento do cavalo
   printf("\n");

   //jogadas da torre
   printf("\nTORRRE:");
   for (int j = 0; j < NUMJOGADASTORRE; ++j){
    printf("\n\t%s", direcaoTorre);
   }

   //jogadas do bispo
   printf("\nBISPO:");
   int contadorJogadasBispo = 0;
   while(contadorJogadasBispo < NUMJOGADASBISPO){
     printf("\n\t%s",direcaoBispo );
     ++contadorJogadasBispo;
    }

   //jogadas da rainha
   printf("\nRAINHA:");
   int contadorJogadasRainha = 0;
   do {
    printf("\n\t%s", direcaoRainha);
    ++contadorJogadasRainha;
   } while(contadorJogadasRainha < NUMJOGADASRAINHA);

    return 0;
}