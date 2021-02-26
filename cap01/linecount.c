#include <stdio.h>

/* '' single quotes = character constant in the machine character set */

int main()
{
    int c, nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n') 
            ++nl;
    printf("%d\n", nl);
}
