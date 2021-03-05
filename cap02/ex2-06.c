/* Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. */

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned b = setbits((unsigned)128,3,2,(unsigned)14);
    printf("%u\n", b);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned a = (y & ~(~0 << n)) << (p+1-n); // prepara os 2 caracteres de y na posição de receber em x
    unsigned b = x & ~(~(~0 << n) << (p+1-n)); // prepara x para receber os 2 caracteres acima na posicao p
    return a | b;
}
