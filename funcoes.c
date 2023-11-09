/* ***************************************************************************************************************************
* Programa: Esse arquivo contem a definicao de funcoes a serem utilizadas no arquivo principal codificadorDeImagans.c
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
*************************************************************************************************************************** */

#include "funcoes.h"
#include <stdio.h>
#include <math.h>


int defCor( int tamLin, int tamCol, int matriz[MAX_LIN][MAX_COL]){
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

