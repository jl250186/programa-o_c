#include <cstdio>


int main()
{
   int NUMJOGADASTORRE = 5;
   int NUMJOGADASBISPO = 5;
   int NUMJOGADASRAINHA = 8;

   char* direcaoTorre = "Direita";
   char* direcaoBispo = "Cima, Direita";
   char* direcaoRainha = "Esquerda";


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