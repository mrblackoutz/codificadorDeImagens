/* ****************************************************************************************************************************************
 * Programa: Esse programa contem um programa que busca codificar uma imagem binaria expressa na forma de 0 e 1 em um codigo de letras
 * Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
 * Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
 **************************************************************************************************************************************** */
#include "funcoes.h"

int main()
{
  int v[MAX_LIN][MAX_COL] = {
      {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
      {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
      {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
      {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
      {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
      {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
      {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
      {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
      {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
      {1, 0, 1, 0, 1, 0, 1, 0, 1, 0}};

  // ... restante do seu código ...
  int i,j;
  printf(" ");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  	printf("%d ", v[i][j]);
  }
   printf("\n ");
  }

  divideMatriz(v, 0, 10, 0, 10);

  return 0;
}
