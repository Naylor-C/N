#ifndef art_glob_h
#define art_glob_h

#include <stdio.h>
#include <stdlib.h>

FILE *file;

// linha atual
static int linha = 1;

// tipos de tokens 
enum {
    // palavras chave
    PC_INIT, PC_END, PC_PRINT, PC_INPUT, PC_VAR, PC_IF, PC_ELSE, 

    // numeros
    T_INT,

    // operadores
    OP_MAIS, OP_MENOS, OP_MULT, OP_DIVI,

    // ( ) := < > <= >=  =
    T_LPARENT, T_RPARENT, T_ATRIB, T_MENOR, T_MAIOR, T_MENOR_I, 
    T_MAIOR_I, T_IGUAL,

    // identificador
    ID
};

typedef struct {
    int tipo;
    int val;
} Token;

Token tok;

#endif
