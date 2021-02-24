/* Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

#include <stdio.h>
#define MAXLINE 1000


int getline2(char rawline[], int maxline);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline2(line, MAXLINE)) > 0) {
        printf("%d %s",len, line);
    }
    
    return 0;
}

int getline2(char s[], int maxlimit)
{   
    char c;
    int i, end;

    end = 0;
    for (i = 0; i < maxlimit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
        if (c != ' ' && c != '\t')
            end = i + 1;
    }
    if (c == '\n') {
        s[end] = '\n';
        ++end;
    }
    s[end] = '\0';

    return end;
}
