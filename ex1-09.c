#include <stdio.h>

/* Write a program to copy its input to its output, replacinng each string of one or more blanks by a single blank. */

int main()

#define YES 1
#define NO 0

{
    int c, spaced;

    spaced = NO;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            spaced = NO;
        }
        else if (c == ' ' && spaced == NO) {
            putchar(c);
            spaced = YES;
        }
    }
}
