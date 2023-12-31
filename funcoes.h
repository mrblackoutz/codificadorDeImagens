/* ****************************************************************************************************************************************
* Programa: Esse programa contem um programa que busca codificar uma imagem binaria expressa na forma de 0 e 1 em um codigo de letras
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
**************************************************************************************************************************************** */

#ifndef FUNCOES_H
#define MAX_LIN 10
#define MAX_COL 10

  #include <stdbool.h>
  #include <stdio.h>
  #include <math.h>
  #include <string.h>
  #include <stdlib.h>

  bool cor_uniforme(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol);
  void imprimeMatriz(int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL]);
  void preencherQuadrante(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol);
<<<<<<< HEAD
  void imprimeCodigo(char codigo[], int tam);
  void divideMatriz(int matriz[MAX_LIN][MAX_COL], char codigo[], int iniLin, int fimLin, int iniCol, int fimCol);
=======
  void divideMatriz(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol, char *codigo);
>>>>>>> 20851950f707e09ea204181fadb1b3a20f6e725d

#endif