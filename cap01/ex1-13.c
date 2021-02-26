#include <stdio.h>

#define IN 1
#define OUT 0

/* Write a program to print histogram of lengths of words in its input. Its easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */
/* 61 = = */
int main(void)
{
    int i, j, c, nc, state;
    int nwords[16];

    nc = 0;
    state = OUT;

    for (i = 0; i < 16; ++i) {
        nwords[i] = 0; 
    } 

    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != '\t' && c !=' ') {
            ++nc;
            state = IN;
        }
        else if (state = IN) {
            ++nwords[nc];
            nc = 0;
            state = OUT;
        }
    }

    for (i = 0; i <16; ++i) {
        printf("%d", i);
        for (j = 0; j <= nwords[i]; ++j) 
            printf("=");
        printf("\n");
        
    }

}
