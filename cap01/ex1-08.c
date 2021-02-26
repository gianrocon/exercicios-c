#include <stdio.h>

/* Wirte a program to count blanks, tabs and newlines. */
int main()
{
    int c, blanks, tabs, nl;
    
    blanks = tabs = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++blanks;
    }

    printf("blanks=%d tabs=%d newlines=%d\n", blanks, tabs, nl);
}
