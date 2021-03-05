/* Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.  */
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned resultado;
    unsigned x = 24; // 000000011000; => p=5 n=3  0000000100000 =>32
    int p = 5;       // 000000111000 = 56
    int n = 3;       // XOR---------
                     // 000000100000

    resultado = invert(x,p,n);
    printf("%u\n", resultado);
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask;
    unsigned resultado;
    mask = (~(~0 << n) << (p - n + 1));
    return x ^ mask;
} 