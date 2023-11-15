/* ****************************************************************************************************************************************
 * Programa: Esse programa contem um programa que busca codificar uma imagem binaria expressa na forma de 0 e 1 em um codigo de letras
 * Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
 * Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
 **************************************************************************************************************************************** */
#include "funcoes.h"

int main()
{
  int v[MAX_LIN][MAX_COL] = {
      {0, 0, 0, 0, 0, 1, 1},
      {0, 1, 0, 0, 0, 1, 1},
      {0, 1, 1, 1, 1, 1, 1},
      {0, 1, 0, 1, 0, 0, 0},
      {0, 0, 0, 1, 0, 0, 0}
      };
  // X X X B B B P B X B P P X X B P B P P P P X X B P X B P B X B P B

  // ... restante do código ...
  int i,j;
  printf(" ");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  	printf("%d ", v[i][j]);
  }
   printf("\n ");
  }
  
  char codigo[MAX_COL * MAX_LIN * 2] = divideMatriz(v, 0, 5, 0, 7);
  int tamCodigo = sizeof(codigo) / sizeof(char);

  imprimeCodigo(codigo, tamCodigo);

  return 0;
}
