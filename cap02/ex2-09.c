/*
Exercise 2-9. In a two’s complement number system, x &= (x−1) deletes the rightmost 1-bit in x. 
Explain why.
Use this observation to write a faster version of bitcount.
*/

// Hipoteses

// 000000000000001 x
// 000000000000000 x-1
// 000000000000000 &

// 000000000000011 x
// 000000000000010 x-1
// 000000000000010 &

// 000000000000010 x
// 000000000000001 x-1
// 000000000000000

// 000000000000110 x
// 000000000000101 x-1
// 000000000000100 &

#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    printf("%d\n", bitcount(13)); // 000000000001101 => 3  
    return 0;
}

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; b++) {
        x &= (x-1);
    }
    return b;
}
