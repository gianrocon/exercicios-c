#include <stdio.h>

unsigned getbits(unsigned x,int p,int n);

int main(void)
{
    printf("%u", getbits((unsigned)12,3,2)); 
    //8,3,2 0000001000 => 000000000010 => 2
    //12,3,2 0000001100 => 000000000011 => 3
}

unsigned getbits(unsigned x,int p,int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}