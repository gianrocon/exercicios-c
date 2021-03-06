/*
The conditional expression often leads to succinct code. For example, this loop prints n elements of an array, 10 per line, with each column separated by one blank, and with each line (including the last) terminated by a newline.
A newline is printed after every tenth element, and after the n-th. All other elements are followed by one blank. This might look tricky, but it’s more compact than the equivalent if-else.
*/

#include <stdio.h>

int main()
{
    int i;
    int n = 55;
    char a[] = "-------------------------------------------------------------------------------------------------------------";
    for (i = 0; i < n; i++)
        printf("%6c%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
    return 0;
}

