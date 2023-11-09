/* ****************************************************************************************************************************************
* Programa: Esse programa contem um programa que busca codificar uma imagem binaria expressa na forma de 0 e 1 em um codigo de letras
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
**************************************************************************************************************************************** */

#ifndef _funcoes.h
#define MAX_LIN 1024
#define MAX_COL 768

int defCor( int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL]);
void imprimeMatriz(int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL]);
void preencheQuadrante(int matriz[MAX_LIN][MAX_COL], int quadrante[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol);
int divideMatriz(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol);

#endif