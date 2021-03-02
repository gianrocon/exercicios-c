#include <stdio.h>

void strcat2(char s[], char t[]);

int main()
{
    char str1[100] = "Drauzio";
    char str2[] = " Varela\n";
    strcat2(str1, str2);
    printf("%s", str1);
}


/* strcat2:  concatenate t to end of s; s must be big enough */
void strcat2(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')    /* copy t */
        ;
}