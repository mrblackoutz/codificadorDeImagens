/* ***************************************************************************************************************************
* Programa: Esse arquivo contem a definicao de funcoes a serem utilizadas no arquivo principal codificadorDeImagans.c
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
*************************************************************************************************************************** */

#include "funcoes.h"
#include <stdio.h>
#include <math.h>

int defCor(int linha[], int coluna[], int tam){
    int b, ehB = 1;

    for(b = 0; b < tam; b++){
        if(vetor[b] != 0){ehB = 0;}
    }

    int p, ehP = 1;

    if(ehB == 0){
        for(p = 0; p < tam; p++){
            if(vetor[p] != 1){ehP = 0;}
        }
    }

    if(ehB == 1 || ehP == 1){return 1;}
    else if(ehB == 0 && ehP == 0){return 0;}
    else{return 999;}
}
