/*
for (i=0; i<lim-1 && (c = getchar()) != '\n' && c != EOF; ++i)
    s[i] = c;

Write a loop equivalent to the for loop above without using && or ¦¦.
*/

#include <stdio.h>

int main()
{
    int c, i;
    int lim = 1000;
    char s[1000];
    
    for (i=0; (i<lim-1) + ((c = getchar()) != '\n') + (c != EOF) == 3; ++i)
        s[i] = c;

    s[i] = '\0';

    printf("%s", s);


}


