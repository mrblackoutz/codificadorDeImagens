/* ****************************************************************************************************************************************
* Programa: Esse programa contem um programa que busca codificar uma imagem binaria expressa na forma de 0 e 1 em um codigo de letras
* Autores: Gustavo Nascimento Siqueira & Vinicius Sanches Cappatti;
* Contato: gustavonascimento.siqueira@mackenzista.com.br & 32342901@mackenzista.com.br
**************************************************************************************************************************************** */
#include "funcoes.h"

int main(){
    int v1[5][768] = {
        {0,0,0}, 
        {0,0,0}, 
        {0,0,0}, 
        {0,0,0}, 
        {0,0,0}
    };
    int v2[5][3] = {
        {1,1,1}, 
        {1,1,1}, 
        {1,1,1}, 
        {1,1,1}, 
        {1,1,1}
    };
    int v3[5][3] = {
        {0,1,0}, 
        {0,1,0}, 
        {0,1,0}, 
        {0,1,0}, 
        {0,0,1}
    };
    int v4[5][768] = {
        {0, 0, 0},
        {1, 1, 1},
        {1, 1, 1},
        {0, 0, 0},
        {0, 0, 0}};

    //preencheQuadrante(v1, 0, 2, 1, 2);
    //imprimeMatriz(3, 2, v1);
    
    divideMatriz(v1, 0, 2, 1, 2);
    imprimeMatriz(3, 2, v1);

    divideMatriz(v2, 0, 2, 1, 2);
    imprimeMatriz(3, 2, v2);

    divideMatriz(v3, 0, 2, 1, 2);
    imprimeMatriz(3, 2, v3);

    divideMatriz(v4, 0, 2, 1, 2);
    imprimeMatriz(3, 2, v4);

    return 0;
}
