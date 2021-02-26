/* Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab? When either a tab or a single blank would suffice to reach a tab stop, which should be given preference? */

#include <stdio.h>
#define MAXSIZE 1000

int main()
{
    int index = 0;                  /* index = 0,1,2,3,4,5,6,7,8,9,10,11 ... */
    int indexColuna = 0;            /* indexColuna = 0,1,2,3,4,5,6,7 */
    int espacoAcumulado = 0;        /* quantidade de espacos acumulados dentro da coluna, relevante quando >= 2  */
    int espacoAcumuladoIndex = 0;   /* index onde comecou a acumular espaco */
    char character;                 /* \n, \t, ' ', demais char com indexColuna 7, com indexColuna < 7  */
    char texto[MAXSIZE];            /* array que armazena a string */

    while ((character = getchar()) != EOF && index < MAXSIZE) {
        
        if (character == '\n') {
            texto[index] = character;
            espacoAcumulado = 0;
            ++index;
            indexColuna = 0;
        }

        else if (character == '\t') {
            if (espacoAcumulado >= 1) {
                index = espacoAcumuladoIndex;
                texto[index] = '\t';
            }
            else
                texto[index] = character;
            espacoAcumulado = 0;
            indexColuna = 0;
            ++index;
        }

        else if (indexColuna == 7) {
            if (espacoAcumulado >= 2 && character == ' ') {
                index = espacoAcumuladoIndex;
                texto[index] = '\t';
            }
            else
                texto[index] = character;
            espacoAcumulado = 0;
            indexColuna = 0;
            ++index;
        }

        else if (character == ' ') {
            texto[index] = '-';
            if (espacoAcumulado == 0)
                espacoAcumuladoIndex = index;
            ++espacoAcumulado;
            ++indexColuna;
            ++index;
        }

        else {
            texto[index] = character;
            espacoAcumulado = 0;
            ++indexColuna;
            ++index;
        }
        
    }

    texto[index] = '\0';

    printf("%s", texto);
}
