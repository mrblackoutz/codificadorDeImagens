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
  for (i = iniLin; i <= fimLin; i++)
  {
    for (j = iniCol; j <= fimCol; j++)
    {
      // Se algum elemento tiver uma cor diferente da cor armazenada, retorna falso
      matriz[i][j] != cor ? printf("Cor diferente: matriz[%d][%d]\n", i, j) : printf("Cor igual: matriz[%d][%d]\n", i, j);
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

void divideMatriz(int matriz[MAX_LIN][MAX_COL], int posiniLin, int posfimLin, int posiniCol, int posfimCol, char *codigo)
{
  int i=0;
  int j=0;
  int q=0;

  int meioLin = (int)ceil((posiniLin + posfimLin+1) / 2.0);
  int meioCol = (int)ceil((posiniCol + posfimCol+1) / 2.0);

  // Define o Inicio da LINHA do 1º Quartil && Define o Final da LINHA do 1º Quartil
  int iniLinQ1 = posiniLin;
  int fimLinQ1 = meioLin-1;
  // Define o Inicio da COLUNA do 1º Quartil && Define o Final da COLUNA do 1º Quartil
  int iniColQ1 = posiniCol;
  int fimColQ1 = meioCol-1;
  // X X X 0 0
  // X X X 0 0
  // 0 0 0 0 0

  // Define o Inicio da LINHA do 2º Quartil && Define o Final da LINHA do 2º Quartil
  int iniLinQ2 = posiniLin;
  int fimLinQ2 = meioLin-1;
  // Define o Inicio da COLUNA do 2º Quartil && Define o Final da COLUNA do 2º Quartil
  int iniColQ2 = meioCol;
  int fimColQ2 = posfimCol;
  // 0 0 0 X X
  // 0 0 0 X X
  // 0 0 0 0 0

  // Define o Inicio da LINHA do 3º Quartil && Define o Final da LINHA do 3º Quartil
  int iniLinQ3 = meioLin;
  int fimLinQ3 = posfimLin;
  // Define o Inicio da COLUNA do 3º Quartil && Define o Final da COLUNA do 3º Quartil
  int iniColQ3 = posiniCol;
  int fimColQ3 = meioCol-1;
  // 0 0 0 0 0
  // 0 0 0 0 0
  // X X X 0 0

  // Define o Inicio da LINHA do 4º Quartil && Define o Final da LINHA do 4º Quartil
  int iniLinQ4 = meioLin;
  int fimLinQ4 = posfimLin;
  // Define o Inicio da COLUNA do 4º Quartil && Define o Final da COLUNA do 4º Quartil
  int iniColQ4 = meioCol;
  int fimColQ4 = posfimCol;
  // 0 0 0 0 0
  // 0 0 0 0 0
  // 0 0 0 X X

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
      // Se a cor não for uniforme, Verificamos se estamos no menor tamanho possível 
      if (limites[q][1] - limites[q][0] < 1 && limites[q][3] - limites[q][2] < 1)
      {
        // Se estamos no menor tamanho possível, armazena a cor no código
        for (i = limites[q][0]; i <= limites[q][1]; ++i)
        {
          for (j = limites[q][2]; j <= limites[q][3]; ++j)
          {
            strcat(codigo, matriz[i][j] == 0 ? "B" : "P");
          }
        }
      } else {
        // Se não estamos no menor tamanho possível, divide o quadrante
        // e ao terminar a pilha, o código(string) é passado como endereço no parametro
        // alterando diretamente o conteudo do código original.
        divideMatriz(matriz, limites[q][0], limites[q][1], limites[q][2], limites[q][3], codigo);
      }
    }
  }
}
