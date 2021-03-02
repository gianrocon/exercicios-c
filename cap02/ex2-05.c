/* Write the function any(s1,s2), which returns the first location in the string s1 where any character from the string s2 occurs, or −1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) */

#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{   
    int posicao;

    char string1[] = "fraternidade";
    char string2[] = "guli";

    posicao = any(string1, string2);
    printf("%d\n", posicao);
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;
    int s1Character, s2Character;

    for (i = 0; (s1Character = s1[i]) != '\0'; i++) {
        for (j = 0; (s2Character = s2[j]) != '\0'; j++) {
            if (s1Character == s2Character) {
                return i;
            }
        }
    }

    return -1;
}