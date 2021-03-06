/* Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else. */

#include <stdio.h>

void lower2(char s[]);

int main()
{
    char string[] = "AbcdEFghiJLSASADADADADADADM";
    lower2(string);
    printf("%s\n", string);
    return 0;
}

void lower2(char s[])
{
    int i;
    for (i=0;  s[i] != '\0'; ++i) {
        // s[i] = s[i] | 32; // 32 = 0100000
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + ('a' - 'A') : s[i];
    }
    s[i] = '\0';
}

// 72  = H = 1001000
// 104 = h = 1101000