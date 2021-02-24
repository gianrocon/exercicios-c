#include <stdio.h>
int main()
{
    char c, d, e, f, g;
    
    printf("getc=");
    c = getchar();
    printf("\ngetd=");
    d = getchar();
    printf("\ngete=");
    e = getchar();
    printf("\ngetf=");
    f = getchar();
    printf("\ngetg=");
    g = getchar();

    printf("\n%c%c%c%c%c\n", c, d, e, f, g);
}