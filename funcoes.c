/* ***************************************************************************************************************************
 * Programa: Esse arquivo contem a definicao de funcoes a serem utilizadas no arquivo principal codificadorDeImagans.c
 * Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
 * Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
 *************************************************************************************************************************** */

#include "funcoes.h"

// Função que verifica se todos os elementos de uma matriz t�m a mesma cor
bool cor_uniforme(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol)
{
  // Armazena a cor do primeiro elemento da matriz
  int cor = matriz[iniLin][iniCol];

  // Percorre todos os elementos da matriz
  int i,j;
  for (i = iniLin; i < fimLin; i++)
  {
    for (j = iniCol; j < fimCol; j++)
    {
      // Se algum elemento tiver uma cor diferente da cor armazenada, retorna falso
      if (matriz[i][j] != cor)
      {
        return false;
      }
    }
  }
  // Se todos os elementos tiverem a mesma cor, retorna verdadeiro
  return true;
}

void imprimeMatriz(int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL])
{
  int i, j;
  for (i = 0; i < tamLin; i++)
  {
    for (j = 0; j < tamCol; j++)
    {
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }
}

void preencherQuadrante(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol)
{
  int i,j;
  for (i = iniLin; i <= fimLin; ++i)
  {
    for (j = iniCol; j <= fimCol; ++j)
    {
      int valor = getchar() - '0';
      valor != 0 && valor != 1 ? matriz[i][j] = valor : printf("Valor invalido\n");
    }
  }
}

char divideMatriz(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol) {
  int i=0;
  int j=0;
  int q=0;
  
  int meioLin = (int)ceil((iniLin + fimLin) / 2);
  int meioCol = (int)ceil((iniCol + fimCol) / 2);

  // Define o Inicio da LINHA do 1º Quartil && Define o Final da LINHA do 1º Quartil
  int iniLinQ1 = iniLin;
  int fimLinQ1 = meioLin-1;
  // Define o Inicio da COLUNA do 1º Quartil && Define o Final da COLUNA do 1º Quartil
  int iniColQ1 = iniCol;
  int fimColQ1 = meioCol-1;
  // X X X 0 0
  // X X X 0 0
  // 0 0 0 0 0

  // Define o Inicio da LINHA do 2º Quartil && Define o Final da LINHA do 2º Quartil
  int iniLinQ2 = meioLin;
  int fimLinQ2 = fimLin-1;
  // Define o Inicio da COLUNA do 2º Quartil && Define o Final da COLUNA do 2º Quartil
  int iniColQ2 = iniCol;
  int fimColQ2 = meioCol-1;
  // 0 0 0 X X
  // 0 0 0 X X
  // 0 0 0 0 0

  // Define o Inicio da LINHA do 3º Quartil && Define o Final da LINHA do 3º Quartil
  int iniLinQ3 = iniLin;
  int fimLinQ3 = meioLin-1;
  // Define o Inicio da COLUNA do 3º Quartil && Define o Final da COLUNA do 3º Quartil
  int iniColQ3 = meioCol;
  int fimColQ3 = fimCol-1;
  // 0 0 0 0 0
  // 0 0 0 0 0
  // X X X 0 0

  // Define o Inicio da LINHA do 4º Quartil && Define o Final da LINHA do 4º Quartil
  int iniLinQ4 = meioLin;
  int fimLinQ4 = fimLin-1;
  // Define o Inicio da COLUNA do 4º Quartil && Define o Final da COLUNA do 4º Quartil
  int iniColQ4 = meioCol;
  int fimColQ4 = fimCol-1;
  // 0 0 0 0 0
  // 0 0 0 0 0
  // 0 0 0 X X

  char codigo[500];
  strcat(codigo, "X");

  // Armazena os limites de cada quadrante em um array bidimensional
  int limites[4][4] = {
      {iniLinQ1, fimLinQ1, iniColQ1, fimColQ1},
      {iniLinQ2, fimLinQ2, iniColQ2, fimColQ2},
      {iniLinQ3, fimLinQ3, iniColQ3, fimColQ3},
      {iniLinQ4, fimLinQ4, iniColQ4, fimColQ4}
      };

  // Percorre cada quadrante
  for (q = 0; q < 4; q++)
  {
    // Verifica se a cor é uniforme no quadrante atual
    if (cor_uniforme(matriz, limites[q][0], limites[q][1], limites[q][2], limites[q][3]))
    {
      // Se a cor for uniforme, armazena a cor no código
      strcat(codigo, (matriz[limites[q][0]][limites[q][2]] == 0 ? "B" : "P"));
    } else {
      // Se a cor não for uniforme, Verifica se estamos no menor tamanho possível 
      if (limites[q][1] - limites[q][0] < 2 && limites[q][3] - limites[q][2] < 2)
      {
        // Se estamos no menor tamanho possível, armazena a cor no código
        for (i = limites[q][0]; i < limites[q][1]; ++i)
        {
          for (j = limites[q][2]; j < limites[q][3]; ++j)
          {
            strcat(codigo, matriz[i][j] == 0 ? "B" : "P");
          }
        }
      } else {
        // Se não estamos no menor tamanho possível, divide o quadrante
        strcat(codigo, divideMatriz(matriz, limites[q][0], limites[q][1], limites[q][2], limites[q][3]));
      }
    }
  }

  // Após percorrer todos os quadrantes, retorna o código armazenado
  return codigo;
}
