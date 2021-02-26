/* Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab? When either a tab or a single blank would suffice to reach a tab stop, which should be given preference? */
/* versão 2.0 */

#include <stdio.h>
#define MAXSIZE 1000

int main()
{
    int index = 0;                  /* index = 0,1,2,3,4,5,6,7,8,9,10,11 ... */
    int indexColuna = 0;            /* indexColuna = 0,1,2,3,4,5,6,7 */
    int newLineCandidateIndex = 0;  /* index candidato ao \n da linha */
    int tabCandidateIndex = 0;      /* index candidato ao \t da coluna */
    char character;                 /* \n, \t, ' ', demais char com indexColuna 7, com indexColuna < 7  */
    char texto[MAXSIZE];            /* array que armazena a string */

    while ((character = getchar()) != EOF && index < MAXSIZE) {

        /* NEWLINE */
        if (character == '\n') {
            texto[newLineCandidateIndex] = '\n';
            index = newLineCandidateIndex + 1;
            indexColuna = 0;
            newLineCandidateIndex = index;
            tabCandidateIndex = index;
        }

        /* TAB */
        else if (character == '\t') {
            texto[tabCandidateIndex] = '\t';
            index = tabCandidateIndex + 1;
            indexColuna = 0;
            tabCandidateIndex = index;
        }

        /* WHITESPACE */
        else if (character == ' ') {
            if (indexColuna == 7) {
                texto[tabCandidateIndex] = '\t';
                index = tabCandidateIndex + 1;
                indexColuna = 0;
                tabCandidateIndex = index;
            }
            else {
                texto[index] = '-';
                ++index;
                ++indexColuna;
            }
        }

        /* DEMAIS CHARACTERS */
        else {
            texto[index] = character;
            ++index;
            tabCandidateIndex = index;
            newLineCandidateIndex = index;
            ++indexColuna;
            if (indexColuna == 8)
                indexColuna = 0;
            }
    }

    texto[index] = '\0';

    printf("%s", texto);
 }
