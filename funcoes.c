/* ***************************************************************************************************************************
* Programa: Esse arquivo contem a definicao de funcoes a serem utilizadas no arquivo principal codificadorDeImagans.c
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
*************************************************************************************************************************** */

#include "funcoes.h"
#include <stdio.h>
#include <math.h>


int defCor(int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL]){
    int i, j, ehB = 1;

    for(i = 0; i < tamLin; i++){
        for(j = 0; j < tamCol; j++){
            if(matriz[i][j] != 0){
                ehB = 0;
                break;
        }
    }
}

    int ehP = 1;

    if(ehB == 0){
        for(i = 0; i < tamLin; i++){
            for(j = 0; j < tamCol; j++){
                if(matriz[i][j] != 1){
                    ehP = 0;
                    break;
                }
            }
        }
    }

    if(ehB == 1 || ehP == 1){return 1;}
    else if(ehB == 0 && ehP == 0){return 0;}
    else{return 999;}
}

void imprimeMatriz(int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL]){
    int i, j;
    for(i = 0; i < tamLin; i ++){
        for(j = 0; j < tamCol; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencherQuadrante(int matriz[][MAX_COL], int quadrante[][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol){
    for (int i = iniLin; i <= fimLin; ++i) {
        for (int j = iniCol; j <= fimCol; ++j) {
            quadrante[i - iniLin][j - iniCol] = matriz[i][j];
        }
    }
}

int divideMatriz(int matriz[MAX_LIN][MAX_COL], int iniLin, int fimLin, int iniCol, int fimCol){
    int meioLin = ceil((iniLin + fimLin) / 2);
    int meioCol = ceil((iniCol + fimCol) / 2);

    /*int q1[meioCol - iniCol][meioLin - iniLin];
    preencheQuadrante(matriz, q1, 0, meioLin, 0, meioCol); função ainda não funciona*/

    /*int q2[meioCol - iniCol][fimLin - meioLin];
    preencheQuadrante(matriz, q1, meioLin, fimLin, 0, meioCol); função ainda não funciona*/


    return 0;
}   