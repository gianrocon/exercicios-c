/* Write a program to print all input lines that are longer than 80 characters. */

#include <stdio.h>
#define MINLINES 10       /* Minimo de characters */ 
#define MAXLINES 1000     /* Maximo de characters */


int getline2(char line[], int maxlimit);

int main(void)
{   
    char line[MAXLINES];
    int len;
        
    while ((len = getline2(line, MAXLINES)) > 0)
        if (len > MINLINES)
        printf("%s", line);

    return 0;
}

int getline2(char s[], int maxlimit)
{   
    char c;
    int i;

    for (i = 0; i < maxlimit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}