/* Write a program detab that replaces tabs in input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or symbolindiceColuna parameter? */

#include <stdio.h>
#define MAXIMO 1000

int main()
{
    char line[MAXIMO];
    char character;
    int indice, indiceColuna;

    indice = 0;                         /* indice do array 0 até final */
    indiceColuna = 0;                   /* indice da coluna 0 até 7, indice coluna = 8 significa  proxima coluna */

    while ((character = getchar()) != EOF) {
        line[indice] = character;

        if (character == '\t') {
            /* loop adiciona whitespaces enquanto não chegar na proxima coluna" */
            while (indiceColuna < 8) {      
                line[indice] = ' ';
                ++indice;
                ++indiceColuna;
            }
            indiceColuna = 0;
        }

        /* \n ou final da coluna indica resetar o indiceColuna */
        else if ((character == '\n') || (indiceColuna == 7)) {  
            indiceColuna = 0;
            ++indice;
        }

        /* incremento na rotina normal */
        else {                  
            ++indice;
            ++indiceColuna;
        }
    }

    /* adicionar \0 ao final do array para marcar para o output o final da string */
    ++indice;
    line[indice] = '\0';        
    printf("%s", line);
}
