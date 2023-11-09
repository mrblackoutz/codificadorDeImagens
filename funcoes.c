/* ***************************************************************************************************************************
* Programa: Esse arquivo contem a definicao de funcoes a serem utilizadas no arquivo principal codificadorDeImagans.c
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
*************************************************************************************************************************** */

#include "funcoes.h"
#include <stdio.h>
#include <math.h>

int ehUniforme(int vetor[], int tam, int cor){
    int i, corBarra = cor;
    
    if(tam == 1){return v[0];}
    
    else if(cor > 1){return}

    else{
        for(i = 0; i < tam; i++){
            if(v[i] != cor){
                corBarra++;
                return ehUniforme(vetor, tam, corBarra);
            }

        }
    }
}