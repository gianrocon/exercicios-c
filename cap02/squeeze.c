/* squeeze:  delete all c from s */

#include <stdio.h>

void squeeze2(char s[], int c);

int main()
{
    char str1[] = "casagrande";

    squeeze2(str1, 'a');
    printf("%s", str1);
}


void squeeze2(char s[], int c)
{
    int i, j;
 for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}
