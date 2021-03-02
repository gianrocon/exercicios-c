/* Write an alternate version of squeeze2(s1, s2) that deletes each character in s1 that matches any character in the string s2.*/
#include <stdio.h>

void squeeze2(char s1[], char s2[]);

int main()
{
    char string1[] = "Casa Grande";
    char string2[] = "gordo fartao";
    squeeze2(string1, string2);
    printf("%s\n", string1);
}

void squeeze2(char s1[], char s2[])
{
    int h;
    char c;
    int i, j;
    
    for (h = 0; (c = s2[h]) != '\0'; h++) {
        for (i = j = 0; s1[i] != '\0'; i++) 
            if (s1[i] != c)
                s1[j++] = s1[i];
        s1[j] = '\0';
    }
}