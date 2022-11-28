#include <math.h>

#define euler 2.7182818284590452353602874713526624977572470936999
//nome = euler, propriedade = valor, tempo =  pré-processamento

double pitagoras(double, double);
//nome = pitagoras, propriedade = implementacao, tempo = ligacao
//nome = pitagoras, propriedade = tipo de retorno, tempo = compilacao

static double milhao = 1000000.0;
//nome = milhao, propriedade  = endereco, tempo = carregamento
//nome = double, propriedade = tamanho, tempo = implementacao

int main (void) {

    double proporcaoAurea = 1.6180339887498948482045868343656381177203091798057;
    //nome = proporcaoAurea, propriedade  = endereco, tempo = execucao

    int val = (int)(cos(pitagoras(proporcaoAurea, euler)) * milhao);
    //nome = cos, propriedade = implementacao, tempo = ligacao
    //nome = val, propriedade = tipo, tempo = compilacao
    //nome = *, propriedade  = semantica, tempo = compilacao
    //nome = int, propriedade = tamanho, tempo = implementacao

    return val; 

}
