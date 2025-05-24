#include <stdlib.h>
 
#include "lex.h"
#include "glob.h"
 
int main(int argc, char *argv[])
{
    // abrir o arquivo
    file = fopen(argv[1], "r");
 
 
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
 
    proximo_token();
 
    fclose(file);
    return EXIT_SUCCESS; // ou return 0
}
