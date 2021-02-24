#include <stdio.h>

main()
{
    int b;
    int c;
    
    b = (getchar() != EOF);
    c = EOF;
    
    printf("O valor da expressão é %d.\n", b);
    printf("O valor de EOF é %d.\n", c);
}

